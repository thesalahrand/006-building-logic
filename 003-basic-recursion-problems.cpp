#include <bits/stdc++.h>
using namespace std;

void printNameNTimes(int n, int cnt = 0)
{
  if (cnt == n)
    return;
  cout << "Mohammad Salah\n";
  printNameNTimes(n, cnt + 1);
}

void print1ToN(int n, int cur_n = 1)
{
  if (n < cur_n)
    return;
  cout << cur_n << ' ';
  print1ToN(n, ++cur_n);
}

void printNTo1(int n)
{
  if (!n)
    return;
  cout << n << ' ';
  printNTo1(--n);
}

void print1ToNByBacktracking(int n)
{
  if (!n)
    return;
  print1ToNByBacktracking(n - 1);
  cout << n << ' ';
}

void printNTo1ByBacktracking(int n, int cur_n = 1)
{
  if (cur_n > n)
    return;
  printNTo1ByBacktracking(n, cur_n + 1);
  cout << cur_n << ' ';
}

// Sum of N numbers
// Functional Way
int sumOfNNumbers(int n)
{
  if (n == 1)
    return n;
  return n + sumOfNNumbers(n - 1);
}

// Parameterised Way
int sumOfNNumbers2(int n, int sum = 0)
{
  if (n == 0)
    return sum;
  return sumOfNNumbers2(n - 1, sum + n);
}

int factorialOfN(int n)
{
  if (n == 1)
    return 1;
  return n * factorialOfN(n - 1);
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
    cout << factorialOfN(n) << '\n';
  }

  return 0;
}