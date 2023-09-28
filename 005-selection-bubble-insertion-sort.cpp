#include <bits/stdc++.h>
using namespace std;

#define min_int numeric_limits<int>::min()
#define max_int numeric_limits<int>::max()

int *selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_ele_idx = i;

    for (int j = i; j < n; j++)
    {
      if (arr[j] < arr[min_ele_idx])
      {
        min_ele_idx = j;
      }
    }

    swap(arr[i], arr[min_ele_idx]);
  }

  return arr;
}

int *bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  return arr;
}

int *insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    for (int j = i; j >= 1 && arr[j] < arr[j - 1]; j--)
    {
      swap(arr[j], arr[j - 1]);
    }
  }

  return arr;
}

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int *arr_sorted = insertionSort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr_sorted[i] << ' ';
  }

  return 0;
}