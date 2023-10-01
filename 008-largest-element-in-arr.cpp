#include <bits/stdc++.h>
using namespace std;

int getLargestElementInArr(vector <int> v, int n) {
  int largest = v[0];
  for(int i = 1; i < n; i++) largest = max(largest, v[i]);
  return largest;
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
    vector <int> v;
    for(int i = 0; i < n; i++) {
      int a;
      cin >> a;
      v.push_back(a);
    }
    cout << getLargestElementInArr(v, n) << '\n';
  }

  return 0;
}