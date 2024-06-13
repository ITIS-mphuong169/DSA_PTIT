//
// Created by Macbook on 29/02/2024.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <map>
#include <string>
#include <iomanip>
#include<sstream>
#include <queue>
#include<math.h>
#include<string.h>
#include <fstream>
using namespace std;
//char a, b;
//string s;
//bool used[100];
//void Try(char c)
//{
//    if (a > b)
//    {
//        char tmp = a;
//        a = b;
//        b = tmp;
//    }
//    for (char j = a; j <= b; j++)
//    {
//            if (used[j] == false)
//            {
//                s.push_back(j);
//                used[j] = true;
//                if (s.size() == b - a + 1)
//                    cout << s << endl;
//                else
//                    Try(j + 1);
//                s.pop_back();
//                used[j] = false;
//            }
//
//        }
//    }
//
//int main()
//{
//    cin >> a >> b;
//    Try('a');
//}

//int n, k;
//vector<int> tmp;
//int a[100], x[100];
//set<vector<int> > se;
//vector<vector<int> > res;
//void Try(int i, int bd)
//{
//    for (int j = bd; j <= n - k + i; j++)
//    {
//        tmp.push_back(a[j]);
//        if (i == k)
//        {
//            if (se.count(tmp) == 0)
//            {
//                res.push_back(tmp);
//                se.insert(tmp);
//            }
//        }
//        else
//            Try(i + 1, j + 1);
//        tmp.pop_back();
//    }
//}
//int main()
//{
//    cin >> n >> k;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    Try(1, 1);
//    sort(res.begin(), res.end());
//    for (auto i : res)
//    {
//        for (auto j : i)
//            cout << j;
//        cout << endl;
//    }
//}
//int n, m;
//bool vst[1005];
//vector<int> ke[1005];
//int sz[1005];
//int cnt = 0;
//int id = 0;
//void dfs(int u)
//{
//    //cnt++;
//    sz[id]++;
//    vst[u] = true;
//    for (int v : ke[u])
//    {
//        if (!vst[v])
//        {
//            dfs(v);
//        }
//    }
//}
//int main()
//{
//    cin >> n >> m;
//    for(int i = 1; i <= m; i++)
//    {
//        int x, y;
//        cin >> x >> y;
//        ke[x].push_back(y);
//        ke[y].push_back(x);
//    }
//    for (int i = 1; i <= n; i++) {
//        if (!vst[i]) {
//            sz[id] = 0;
//            dfs(i);
//            id++;
//        }
//    }
//
//    // Tìm thành phần liên thông chứa đỉnh 1
//    int sz1 = 0;
//    for (int i = 1; i <= n; i++) {
//        if (ke[1].size() > 0 && vst[1]) {
//            sz1 = sz[id- 1];
//            break;
//        }
//    }
//
//    // Tìm thành phần liên thông lớn nhất khác
//    int msz = 0;
//    for (int i = 0; i < id; i++) {
//        if (sz[i] != sz1) {
//            msz = max(msz, sz[i]);
//        }
//    }
//
//    int result = sz1 + msz;
//    cout << result << endl;
//}


//int n, m, parent[100001], num[100001];
//void init(){
//    for(int i=1; i<=n; i++){
//        parent[i] = i;
//        num[i] = 1;
//    }
//}
//int Find(int u){
//    if(u != parent[u])
//        parent[u] = Find(parent[u]);
//    return parent[u];
//}
//void Union(int u, int v){
//    int a = Find(u), b = Find(v);
//    if(a == b) return;
//    if (num[a] < num[b]) swap(a,b);
//    parent[b] = a;
//    num[a] += num[b];
//}
//int main(){
//    int u,v,x,i,ans = 0;
//    cin >> n >> m;
//    init();
//    while(m--){
//        cin >> u >> v;
//        Union(u, v);
//    }
//    int first = Find(1);
//    for(i=1; i<= n;i++){
//        x = Find(i);
//        if(x != first) ans = max(ans, num[x]);
//    }
//    cout << ans + num[first] << endl;
//}


//int visited[1001], n, m, parent[1001];
//int parentb[1001];
//int visitedb[1001];
//vector < int > ds[1001];
//void ktao()
//{
//    memset(visited,0,sizeof(visited));
//    memset(visitedb,0,sizeof(visitedb));
//    for( int i = 1; i <= n; i++)
//    {
//        parent[i] = i;
//        parentb[i] = i;
//    }
//}
//void dfs( int u)
//{
//    visited[u] = 1;
//    for( int x: ds[u])
//    {
//        if(visited[x] == 0)
//        {
//            parent[x] = u;
//            dfs(x);
//        }
//    }
//}
//void bfs( int u)
//{
//    visitedb[u] = 1;
//    queue < int > q;
//    q.push(u);
//    while( !q.empty())
//    {
//        int top = q.front();
//        q.pop();
//        for( int x : ds[top])
//        {
//            if(visitedb[x] == 0)
//            {
//                visitedb[x] = 1;
//                parentb[x] = u;
//                q.push(x);
//            }
//        }
//    }
//}
//
//int main()
//{
//    cin >> n >> m;
//    for( int i = 0; i < m; i++)
//    {
//        int x,y;
//        cin >> x >> y;
//        ds[x].push_back(y);
//        ds[y].push_back(x);
//    }
//    ktao();
//    dfs(1);
//    bfs(1);
//    for( int i = 2; i <= n; i++)
//    {
//        vector <int > tmp;
//        int tt = i;
//        tmp.push_back(tt);
//        while( 1 != parent[tt])
//        {
//            tt= parent[tt];
//            tmp.push_back(tt);
//            //cout << -1 << endl;
//        }
//        tmp.push_back(1);
//        reverse(tmp.begin(),tmp.end());
//        for( int xx : tmp)
//        {
//            cout << xx<< " ";
//        }
//        cout << endl;
//        int tt1 = i;
//        tmp.clear();
//        tmp.push_back(tt1);
//        while (1 != parentb[tt1])
//        {
//            tt1 = parentb[tt1];
//            tmp.push_back(tt1);
//
//        }
//        tmp.push_back(1);
//        for( int xx : tmp)
//        {
//            cout << xx <<" ";
//        }
//        cout << endl;
//
//    }
//}

//int n, m;
//int par[1005], num[1005];
//
//void ktao()
//{
//    for (int i = 1; i <= n; i++)
//    {
//        par[i] = i;
//        num[i] = 1;
//    }
//}
//
//int Find(int u)
//{
//    if (u != par[u])
//    {
//        par[u] = Find(par[u]);
//    }
//    return par[u];
//}
//
//void Union(int u, int v)
//{
//    int a = Find(u), b = Find(v);
//    if (a == b)
//        return;
//    if (num[a] < num[b])
//        swap(a, b);
//    par[b] = a;
//    num[a] += num[b];
//}
//
//int main()
//{
//    cin >> n >> m;
//    ktao();
//    for (int i = 1; i<= m; i++)
//    {
//        int x, y;
//        cin >> x >> y;
//        Union(x, y);
//    }
//    int ans = 0;
//    int first = Find(1);
//    for (int i = 1; i <= n; i++)
//    {
//       int x = Find(i);
//       if (x != first)
//       {
//           ans = max(ans, num[x]);
//       }
//    }
//    cout << ans + num[first] << endl;
//}

 struct node
 {
 	int data;
 	node *left;
 	node * right;
 	node ( int x)
 	{
 		data = x;
 		left = right = NULL;
 	}
 };
 void inorder( node * root)
 {
 	if( root != NULL)
 	{
 		inorder(root->left);
 		cout << root->data<<" ";
 		inorder(root->right);
 	}
 }
 void insert( node * & root, vector < int > &a)
 {
 	queue < node * > q;
 	root = new node(a[0]);
 	int n = a.size();
 	q.push(root);
 	int i = 1;
 	while(i < a.size())
 	{
 		node * top = q.front();
 		q.pop();
 		if( i < n)
 		{
 			top->left = new node(a[i]);
 			i++;
 			q.push(top->left);
 		}
 		if( i < n)
 		{
 			top->right = new node(a[i]);
 			i++;
 			q.push(top->right);
 		}
 	}
 	inorder(root);
 }
 int main()
 {
 	int t;
 	cin >> t;
 	while( t--)
 	{
 		int n;
 		cin >> n;
 		vector < int > a;
 		for( int i = 0; i < n; i++)
 		{
 			int x; cin >> x;
 			a.push_back(x);
 		}
 		node * root = NULL;
 		insert(root,a);
 		cout << endl;
 	}
 }