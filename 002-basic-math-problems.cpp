#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
  int digits_cnt = 0;
  while (n > 0) {
    digits_cnt++;
    n = n / 10;
  }
  return digits_cnt;
}

int reverseNum(int num) {
  int reverse_num = 0;
  while (num > 0) {
    int last_dig = num % 10;
    num /= 10;
    reverse_num = (reverse_num * 10) + last_dig;
  }
  return reverse_num;
}

bool isPalindrome(int num) {
  return num == reverseNum(num);
}

bool isAmstrong(int n) {
  int sum = 0, n_copy = n;
  while(n > 0) {
    int last_digit = n % 10;
    n /= 10;
    sum += (last_digit * last_digit * last_digit);
  }
  return sum == n_copy; 
}

void printAllDivisors(int n) {
  vector <int> v;
  for(int i = 1; i * i <= n; i++) {
    if(!(n % i)) {
      v.push_back(i);
      if(i != (n / i)) {
        v.push_back(n / i);
      }
    }
  }

  sort(v.begin(), v.end());
  for(auto it: v) cout << it << ' ';
}

bool isPrime(int n) {
  int divisors_cnt = 0;
  for(int i = 1; i * i <= n; i++) {
    if(!(n % i)) {
      divisors_cnt++;
      if(i != (n / i)) {
        divisors_cnt++;
      }
    }
  }
  return divisors_cnt == 2;
}

int gcd(int a, int b) {
  while(a > 0 && b > 0) {
    if(a > b) a %= b;
    else b %= a;
  }
  return !a ? b : a;
}

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int t;
  cin >> t;
  while(t--) {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    cout << '\n';
  }

  return 0;
}