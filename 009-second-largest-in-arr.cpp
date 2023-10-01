#include <bits/stdc++.h>
using namespace std;

int secondLargestElementInArr(vector<int> v, int n)
{
  int largest = v[0], s_largest = -1;
  for (int i = 1; i < n; i++)
  {
    if (v[i] > largest)
    {
      s_largest = largest;
      largest = v[i];
    }
    else if (v[i] != largest && v[i] > s_largest)
    {
      s_largest = v[i];
    }
  }
  return s_largest;
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
    cout << secondLargestElementInArr(v, n) << '\n';
  }

  return 0;
}