#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &v, int n)
{
  int l = 0, m = 0, h = n - 1;
  while (m <= h)
  {
    if (v[m] == 0)
    {
      swap(v[l], v[m]);
      l++;
      m++;
    }
    else if (v[m] == 1)
    {
      m++;
    }
    else
    {
      swap(v[h], v[m]);
      h--;
    }
  }
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
    sortArray(v, n);
    for (auto it : v)
      cout << it << ' ';
    cout << '\n';
  }

  return 0;
}