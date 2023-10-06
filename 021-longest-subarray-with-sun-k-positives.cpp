#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> v, long long k)
{
  int j = 0, longest_sub_arr_len = INT_MIN;
  long long sum = 0;
  for (int i = 0; i < v.size(); i++)
  {
    sum += v[i];
    while (sum > k)
    {
      sum -= v[j];
      j++;
    }
    if (sum == k)
    {
      longest_sub_arr_len = max(longest_sub_arr_len, i - j + 1);
    }
  }
  return longest_sub_arr_len;
}

// 1 1 2 1 1 3 1

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      v.push_back(a);
    }
    cout << longestSubarrayWithSumK(v, k) << '\n';
  }

  return 0;
}