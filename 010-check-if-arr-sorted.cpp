#include <bits/stdc++.h>
using namespace std;

bool checkIfArrSorted(vector<int> v, int n)
{
  bool is_sorted = true;
  for (int i = 0; i < n - 1; i++)
  {
    if (v[i] > v[i + 1])
      is_sorted = false;
  }
  return is_sorted;
}

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      v.push_back(a);
    }
    cout << (checkIfArrSorted(v, n) ? "YES" : "NO") << '\n';
  }

  return 0;
}