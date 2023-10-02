#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> v, int n, int k)
{
  for (int i = 0; i < n; i++)
  {
    if (v[i] == k)
      return i;
  }
  return -1;
}

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      v.push_back(a);
    }
    cout << linearSearch(v, n, k) << '\n';
  }

  return 0;
}