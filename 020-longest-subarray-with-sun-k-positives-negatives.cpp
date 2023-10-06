#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> v, int k)
{
  map<int, int> m;
  int sum = 0, longest_sub_arr_len = 0;
  for (int i = 0; i < v.size(); i++)
  {
    sum += v[i];
    if (sum == k)
      longest_sub_arr_len = i + 1;
    if (m.find(sum - k) != m.end())
    {
      longest_sub_arr_len = max(longest_sub_arr_len, i - m[sum - k]);
    }
    if (m.find(sum) == m.end())
    {
      m[sum] = i;
    }
  }

  return longest_sub_arr_len;
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
    cout << getLongestSubarray(v, k) << '\n';
  }

  return 0;
}