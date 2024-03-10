#include <bits/stdc++.h>
using namespace std;
#define int long long
string test = "";

int genint(int a, int b, int k, bool add) {
  if (a == b) {
    if (add) test += to_string(a);
    return a;
  }
  int ans = (rand() % (b / k - a / k) + (a / k + (a % k != 0))) * k;
  if (add) test += to_string(ans);
  return ans;
}

string genstr(int a, int b, int k, vector <string> p, bool add) {
  int l = genint(a, b, k, 0);
  vector <char> symbols;
  for (int i = 0; i < p.size(); i++) {
    if (p[i].size() == 1) {
      symbols.push_back(p[i][0]);
    } else {
      for (char j = p[i][0]; j <= p[i][2]; j++) {
        symbols.push_back(j);
      }
    }
  }
  string ans = "";
  for (int i = 0; i < l; i++) {
    ans += symbols[genint(0, symbols.size(), 1, 0)];
  }
  if (add) test += ans;
  return ans;
}

signed main() {
  // generating test

  // ---------------
  freopen("test", "w", stdout);
  cout << test;
}
