#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionOfTwoArr(vector<int> v1, vector<int> v2)
{
  int p1 = 0, p2 = 0;
  vector<int> v_intersection;
  while (p1 < v1.size() && p2 < v2.size())
  {
    if ((v1[p1] == v2[p2]))
    {
      if (!v_intersection.size() || v_intersection.back() != v1[p1])
        v_intersection.push_back(v1[p1]);
      p1++;
    }
    else if (v1[p1] < v2[p2])
    {
      p1++;
    }
    else if (v1[p1] > v2[p2])
    {
      p2++;
    }
  }

  return v_intersection;
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
    vector<int> v_intersection = intersectionOfTwoArr(v1, v2);
    for (auto it : v_intersection)
    {
      cout << it << ' ';
    }
    cout << '\n';
  }

  return 0;
}