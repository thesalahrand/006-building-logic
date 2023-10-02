#include <bits/stdc++.h>
using namespace std;

vector<int> leftRotate(vector<int> v, int n, int k)
{
  reverse(v.begin(), v.begin() + k);
  reverse(v.begin() + k, v.end());
  reverse(v.begin(), v.end());
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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      v.push_back(a);
    }
    v = leftRotate(v, n, k % n);
    for (int i = 0; i < n; i++)
    {
      cout << v[i] << ' ';
    }
    cout << '\n';
  }

  return 0;
}