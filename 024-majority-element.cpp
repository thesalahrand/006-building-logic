#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n)
{
  int el, cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (cnt == 0)
    {
      el = arr[i];
      cnt = 1;
    }
    else if (el == arr[i])
    {
      cnt++;
    }
    else
    {
      cnt--;
    }
  }

  int el_cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == el)
      el_cnt++;
  }

  return (el_cnt > (n / 2)) ? el : -1;
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
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    cout << findMajorityElement(arr, n) << '\n';
  }

  return 0;
}