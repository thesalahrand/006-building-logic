#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicatesFromSortedArr(vector<int> v, int n)
{
  int j = 0;
  for (int i = 1; i < n; i++)
  {
    if (v[i] != v[j])
      v[++j] = v[i];
  }
  while (j < n - 1)
  {
    v.pop_back();
    j++;
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
    v = removeDuplicatesFromSortedArr(v, n);
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << ' ';
    }
    cout << '\n';
  }

  return 0;
}