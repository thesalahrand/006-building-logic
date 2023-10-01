#include <bits/stdc++.h>
using namespace std;

int getPartitionIdx(vector<int> &v, int l, int r)
{
  int pivot = v[l], i = l, j = r;
  while (i < j)
  {
    while (v[i] <= pivot && i <= r)
    {
      i++;
    }
    while (v[j] > pivot && j >= l)
    {
      j--;
    }
    if (i < j)
      swap(v[i], v[j]);
  }
  swap(v[l], v[j]);

  return j

      ;
}

void quickSort(vector<int> &v, int l, int r)
{
  if (l >= r)
    return;

  int partition_idx = getPartitionIdx(v, l, r);
  quickSort(v, l, partition_idx - 1);
  quickSort(v, partition_idx + 1, r);
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
  quickSort(v, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << ' ';
  }
  cout << '\n';

  return 0;
}