#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfTwoArr(vector<int> v1, vector<int> v2, int n, int m)
{
  vector<int> v_union;
  int p1 = 0, p2 = 0;
  while (p1 < n || p2 < m)
  {
    if (p1 < n && p2 < m)
    {
      if (v1[p1] <= v2[p2])
      {
        if (!v_union.size() || v1[p1] != v_union.back())
          v_union.push_back(v1[p1]);
        p1++;
      }
      else if (v1[p1] > v2[p2])
      {
        if (!v_union.size() || v2[p2] != v_union.back())
          v_union.push_back(v2[p2]);
        p2++;
      }
    }
    else if (p1 < n)
    {
      if (!v_union.size() || v1[p1] != v_union.back())
        v_union.push_back(v1[p1]);
      p1++;
    }
    else if (p2 < m)
    {
      if (!v_union.size() || v2[p2] != v_union.back())
        v_union.push_back(v2[p2]);
      p2++;
    }
  }

  return v_union;
}

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      v1.push_back(a);
    }
    for (int i = 0; i < m; i++)
    {
      int a;
      cin >> a;
      v2.push_back(a);
    }
    vector<int> v_union = unionOfTwoArr(v1, v2, n, m);
    for (auto it : v_union)
    {
      cout << it << ' ';
    }
    cout << '\n';
  }

  return 0;
}