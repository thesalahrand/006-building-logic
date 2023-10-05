#include <bits/stdc++.h>
using namespace std;

int consecutiveOnes(vector<int> v)
{
  int cons_1s = 0, max_cons_1s = INT_MIN;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == 1)
    {
      cons_1s++;
      max_cons_1s = max(max_cons_1s, cons_1s);
    }
    else
    {
      cons_1s = 0;
    }
  }

  return max_cons_1s;
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
    cout << consecutiveOnes(v) << '\n';
  }

  return 0;
}