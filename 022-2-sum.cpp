#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<pair<int, int>> v, int k)
{
  int i = 0, j = v.size() - 1;
  vector<int> res;
  while (i < j)
  {
    if (v[i].first + v[j].first == k)
    {
      res = {v[i].second, v[j].second};
      break;
    }
    else if (v[i].first + v[j].first > k)
    {
      j--;
    }
    else
    {
      i++;
    }
  }
  return res;
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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      v.push_back({a, i});
    }
    sort(v.begin(), v.end());
    vector<int> res = twoSum(v, k);
    cout << res[0] << ' ' << res[1] << '\n';
  }

  return 0;
}