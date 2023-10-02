#include <bits/stdc++.h>
using namespace std;

vector<int> moveZerosToEnd(vector<int> v, int n)
{
  int leftmost_idx_of_zero = -1;
  for (int i = 0; i < n; i++)
  {
    if (leftmost_idx_of_zero != -1 && v[i])
    {
      swap(v[i], v[leftmost_idx_of_zero]);
      leftmost_idx_of_zero++;
    }
    else if (leftmost_idx_of_zero == -1 && !v[i])
    {
      leftmost_idx_of_zero = i;
    }
  }
  return v;
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
    v = moveZerosToEnd(v, n);
    for (int i = 0; i < n; i++)
    {
      cout << v[i] << ' ';
    }
    cout << '\n';
  }

  return 0;
}