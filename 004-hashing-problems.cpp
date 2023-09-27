#include <bits/stdc++.h>
using namespace std;

#define min_int numeric_limits<int>::min()
#define max_int numeric_limits<int>::max()

void cntOfIntInAnArray()
{
  int n;
  cin >> n;
  int hash[1000000];

  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    hash[a]++;
  }

  int q;
  cin >> q;
  while (q--)
  {
    int a;
    cin >> a;
    cout << hash[a] << '\n';
  }
}

void cntOfCharInAString()
{
  int n;
  string s;
  cin >> n >> s;
  int hash[26] = {0};

  for (int i = 0; i < s.size(); i++)
  {
    hash[s[i] - 'a']++;
  }

  int q;
  cin >> q;
  while (q--)
  {
    char ch;
    cin >> ch;
    cout << hash[ch - 'a'] << '\n';
  }
}

void cntOfIntInAnArrayUsingMap()
{
  int n;
  cin >> n;
  map<int, int> m;

  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    m[a]++;
  }

  int q;
  cin >> q;
  while (q--)
  {
    int a;
    cin >> a;
    cout << m[a] << '\n';
  }
}

void cntOfCharInAStringUsingMap()
{
  int n;
  string s;
  cin >> n >> s;
  map<char, int> m;

  for (int i = 0; i < s.size(); i++)
  {
    m[s[i]]++;
  }

  int q;
  cin >> q;
  while (q--)
  {
    char ch;
    cin >> ch;
    cout << m[ch] << '\n';
  }
}

void minMaxFrequencyOfElementsInAnArray()
{
  int n;
  cin >> n;
  map<int, int> m;
  pair<int, int> min_ele;
  pair<int, int> max_ele;

  min_ele.first = max_ele.second = min_int;
  max_ele.first = min_ele.second = max_int;

  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    m[a]++;

    if (m[a] >= max_ele.second)
    {
      max_ele.first = a;
      max_ele.second = m[a];
    }
    if (m[a] <= min_ele.second)
    {
      min_ele.first = a;
      min_ele.second = m[a];
    }
  }

  cout << min_ele.first << " appears minimum of " << min_ele.second << " times" << '\n';
  cout << max_ele.first << " appears maximum of " << max_ele.second << " times" << '\n';
}

int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  minMaxFrequencyOfElementsInAnArray();

  return 0;
}