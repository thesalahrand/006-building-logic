#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> v)
{
  int xor_sum = 0;
  for (int i = 0; i < v.size(); i++)
  {
    xor_sum ^= v[i];
  }
  return xor_sum;
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
    cout << getSingleElement(v) << '\n';
  }

  return 0;
}