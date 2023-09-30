#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int l, int r, int mid)
{
  vector<int> temp;

  int i = l, j = mid + 1;

  while (i <= mid && j <= r)
  {
    if (v[i] < v[j])
    {
      temp.push_back(v[i]);
      i++;
    }
    else
    {
      temp.push_back(v[j]);
      j++;
    }
  }

  while (i <= mid)
  {
    temp.push_back(v[i]);
    i++;
  }

  while (j <= r)
  {
    temp.push_back(v[j]);
    j++;
  }

  for (int k = l; k <= r; k++)
  {
    v[k] = temp[k - l];
  }
}

void mergeSort(vector<int> &v, int l, int r)
{
  if (l == r)
    return;

  int mid = (l + r) / 2;
  mergeSort(v, l, mid);
  mergeSort(v, mid + 1, r);
  merge(v, l, r, mid);
}

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    v.push_back(a);
  }
  mergeSort(v, 0, n - 1);
  for (int i = 0; i < n; i++)
    cout << v[i] << ' ';
  cout << '\n';

  return 0;
}