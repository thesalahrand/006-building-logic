#include <bits/stdc++.h>
using namespace std;

void pattern01(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 1; j < n; j++) {
      cout << '*';
    }
    cout << '\n';
  }
}

void pattern02(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= i; j++) {
      cout << '*';
    }
    cout << '\n';
  }
}

void pattern03(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= i; j++) {
      cout << j + 1;
    }
    cout << '\n';
  }
}

void pattern04(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= i; j++) {
      cout << i + 1;
    }
    cout << '\n';
  }
}

void pattern05(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= n - (i + 1); j++) {
      cout << '*';
    }
    cout << '\n';
  }
}

void pattern06(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= n - (i + 1); j++) {
      cout << j + 1;
    }
    cout << '\n';
  }
}

void pattern07(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n - 1 - i; j++) {
      cout << ' ';
    }
    for(int j = 0; j < 2 * i + 1; j++) {
      cout << '*';
    }
    for(int j = 0; j < n - 1 - i; j++) {
      cout << ' ';
    }
    cout << '\n';
  }
}

void pattern08(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < i; j++) {
      cout << ' ';
    }
    for(int j = 0; j < (2 * n - 1) - (2 * i); j++) {
      cout << '*';
    }
    for(int j = 0; j < i; j++) {
      cout << ' ';
    }
    cout << '\n';
  }
}

void pattern09(int n) {
  pattern07(n);
  pattern08(n);
}

void pattern10(int n) {
  for(int i = 0; i < (2 * n - 1); i++) {
    int s_cnt = (i < n) ? i + 1 : (2 * n - 1) - i;
    for(int j = 0; j < s_cnt; j++) {
      cout << '*';
    }
    cout << '\n';
  }
}

void pattern11(int n) { 
  for(int i = 0; i < n; i++) {
    int start_dig = i % 2 ? 0 : 1;
    for(int j = 0; j <= i; j++) {
      cout << start_dig << ' ';
      start_dig = !start_dig;
    }
    cout << '\n';
  }
}

void pattern12(int n) { 
  for(int i = 0; i < n; i++) {
    for(int j = 1; j <= i + 1; j++) {
      cout << j;
    }
    for(int j = 0; j < (2 * n - 2) - (2 * i); j++) {
      cout << ' ';
    }
    for(int j = i + 1; j >= 1; j--) {
      cout << j;
    }
    cout << '\n';
  }
}

void pattern13(int n) { 
  for(int i = 0; i < n; i++) {
    for(int j = 0, num = (i * (i + 1) / 2) + 1; j <= i; j++, num++) {
      cout << num << ' ';
    }
    cout << '\n';
  }
}

void pattern14(int n) { 
  for(int i = 0; i < n; i++) {
    for(char ch = 'A'; ch <= 'A' + i; ch++) {
      cout << ch << ' ';
    }
    cout << '\n';
  }
}

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    pattern14(n);
    cout << '\n';
  }

  return 0;
}