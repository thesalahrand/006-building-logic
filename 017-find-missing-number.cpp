#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> v, int n)
{
  int xor1 = 0, xor2 = 0;
  for (int i = 0; i < n - 1; i++)
  {
    xor1 ^= v[i];
    xor2 ^= (i + 1);
  }
  xor2 ^= n;
  return xor1 ^ xor2;
}

int _missingNumber(vector<int> v, int n)
{
  long long int sum = 0, sum_of_first_n = (n * (n + 1)) / 2;
  for (int i = 0; i < n - 1; i++)
  {
    sum += v[i];
  }
  return sum_of_first_n - sum;
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
    for (int i = 0; i < n - 1; i++)
    {
      int a;
      cin >> a;
      v.push_back(a);
    }
    cout << missingNumber(v, n) << '\n';
  }

  return 0;
}