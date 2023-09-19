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

void pattern15(int n) {
  for(int i = 0; i < n; i++) {
    for(char ch = 'A'; ch <= 'A' + (n - 1 - i); ch++) {
      cout << ch << ' ';
    }
    cout << '\n';
  }
}

void pattern16(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= i; j++) {
      cout << (char) ('A' + i);
    }
    cout << '\n';
  }
}

void pattern17(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n - i - 1; j++) {
      cout << ' ';
    }
    for(char ch = 'A'; ch <= 'A' + i; ch++) {
      cout << ch;
    }
    for(char ch = 'A' + i - 1; ch >= 'A'; ch--) {
      cout << ch;
    }
    for(int j = 0; j < n - i - 1; j++) {
      cout << ' ';
    }
    cout << '\n';
  }
}

void pattern18(int n) {
  for(int i = 0; i < n; i++) {
    char ch = 'A' + (n - i - 1);
    for(int j = 0; j <= i; j++, ch++) {
      cout << ch << ' ';
    }
    cout << '\n';
  }
}

void pattern19(int n) {
  for(int i = 0; i < 2 * n; i++) {
    int star_cnt = (i < n) ? n - i : i - n + 1;
    int space_cnt = (i < n) ? 2 * i : (2 * n) - ((i - n + 1) * 2);

    for(int j = 0; j < star_cnt; j++) {
      cout << '*';
    }
    for(int j = 0; j < space_cnt; j++) {
      cout << ' ';
    }
    for(int j = 0; j < star_cnt; j++) {
      cout << '*';
    }
    cout << '\n';
  }
}

void pattern20(int n) {
  for(int i = 0; i < (2 * n) - 1; i++) {
    int star_cnt = (i < n) ? i + 1 : n - (i - n + 1);
    int space_cnt = (i < n) ? (2 * n) - (2 * (i + 1)) : 2 * (i - n + 1);
   
    for(int j = 0; j < star_cnt; j++) {
      cout << '*';
    }
    for(int j = 0; j < space_cnt; j++) {
      cout << ' ';
    }
    for(int j = 0; j < star_cnt; j++) {
      cout << '*';
    }
    cout << '\n';
  }
}

void pattern21(int n) {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      char ch = (i == 0 || j == 0 || i == n - 1 || j == n - 1) ? '*' : ' ';
      cout << ch;
    }
    cout << '\n';
  }
}

void pattern22(int n) {
  for(int i = 0; i < 2 * n - 1; i++) {
    for(int j = 0; j < 2 * n - 1; j++) {
      int top_distance = i;
      int left_distance = j;
      int right_distance = (2 * n - 2) - i;
      int bottom_distance = (2 * n - 2) - j;
      int min_distance = min(top_distance, min(left_distance, min(right_distance, bottom_distance)));
      cout << n - min_distance << ' ';
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
    pattern22(n);
    cout << '\n';
  }

  return 0;
}
