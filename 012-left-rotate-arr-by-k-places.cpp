#include <bits/stdc++.h>
using namespace std;

vector<int> leftRotate(vector<int> v, int n, int k)
{
  vector<int> v_shift;
  for (int i = k; i < n; i++)
    v_shift.push_back(v[i]);
  for (int i = 0; i < k; i++)
    v_shift.push_back(v[i]);
  return v_shift;
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
    vector<int> v_shift = leftRotate(v, n, k % n);
    for (int i = 0; i < n; i++)
    {
      cout << v_shift[i] << ' ';
    }
    cout << '\n';
  }

  return 0;
}