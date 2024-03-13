/* author: rustam-cpp */

#include <bits/stdc++.h>

using namespace std;
#pragma optimize("Ofast")
#define int long long
#define stoi stoll
#define endl '\n'

const int inf  = 3e18;
const int mod  = 1e9 + 7;
const int mod2 = 998244353;

#define all(x)(x).begin(), (x).end()
#define rall(x)(x).rbegin(), (x).rend()

struct DEBUG {
  // types:
  // int, string,
  // pair <int/string, int/string>
  // vector <int/string>
  // vector <pair <int/string, int/string>>
  // map <int/string, int/string>
  // set <int/string>
  // set <pair <int/string, int/string>>
  int len(int a) { string l = to_string(a); return l.size(); }
  int len(string s) { return s.size(); }
  void print(string name, int a) { if (name != " ") cout << name << ": "; cout << a; }
  void print(string name, string a) { if (name != " ") cout << name << ": "; cout << "\"" << a << "\""; }
  void print(string name, pair <int, int> a) { if (name != " ") cout << name << ": "; cout << "[ " << a.first << " " << a.second << " ]"; }
  void print(string name, pair <string, int> a) { if (name != " ") cout << name << ": "; cout << "[ \"" << a.first << "\" " << a.second << " ]"; }
  void print(string name, pair <int, string> a) { if (name != " ") cout << name << ": "; cout << "[ " << a.first << " \"" << a.second << "\" ]"; }
  void print(string name, pair <string, string> a) { if (name != " ") cout << name << ": "; cout << "[ \"" << a.first << "\" \"" << a.second << "\" ]"; }
  void print(string name, vector <int>& a) { if (name != " ") cout << name << ": "; cout << "{ "; int ln = 0; for (auto i : a) { cout << i << " "; } cout << "}\n"; }
  void print(string name, vector <pair <int, int>>& a) { if (name != " ") cout << name << ": "; cout << "{\n"; cout << "first:  "; int ln = 0; for (auto i : a) { cout << i.first; for (int j = 0; j < max(0ll, len(i.second) - len(i.first)); j++) { cout << " "; } cout << " "; } cout << "\n"; cout << "second: "; for (auto i : a) { cout << i.second; for (int j = 0; j < max(0ll, len(i.first) - len(i.second)); j++) { cout << " "; } cout << " "; } cout << '\n'; cout << "}\n"; }
  void print(string name, vector <pair <string, int>>& a) { if (name != " ") cout << name << ": "; cout << "{\n"; cout << "first:  "; int ln = 0; for (auto i : a) { cout << "\"" << i.first << "\""; for (int j = 0; j < max(0ll, len(i.second) - len(i.first) - 2); j++) { cout << " "; } cout << " "; } cout << "\n"; cout << "second: "; for (auto i : a) { cout << i.second; for (int j = 0; j < max(0ll, len(i.first) - len(i.second) + 2); j++) { cout << " "; } cout << " "; } cout << '\n'; cout << "}\n"; }
  void print(string name, vector <pair <int, string>>& a) { if (name != " ") cout << name << ": "; cout << "{\n"; cout << "first:  "; int ln = 0; for (auto i : a) { cout << i.first; for (int j = 0; j < max(0ll, len(i.second) - len(i.first) + 2); j++) { cout << " "; } cout << " "; } cout << "\n"; cout << "second: "; for (auto i : a) { cout << "\"" << i.second << "\""; for (int j = 0; j < max(0ll, len(i.first) - len(i.second) - 2); j++) { cout << " "; } cout << " "; } cout << '\n'; cout << "}\n"; }
  void print(string name, vector <pair <string, string>>& a) { if (name != " ") cout << name << ": "; cout << "{\n"; cout << "first:  "; int ln = 0; for (auto i : a) { cout << "\"" << i.first << "\""; for (int j = 0; j < max(0ll, len(i.second) - len(i.first)); j++) { cout << " "; } cout << " "; } cout << "\n"; cout << "second: "; for (auto i : a) { cout << "\"" << i.second << "\""; for (int j = 0; j < max(0ll, len(i.first) - len(i.second)); j++) { cout << " "; } cout << " "; } cout << '\n'; cout << "}\n"; }
  void print(string name, vector <string>& a) { if (name != " ") cout << name << ": "; cout << "{ "; for (auto i : a) { cout << "\"" << i << "\" "; } cout << "}\n"; }
  void print(string name, map <int, int>& a) { vector <pair <int, int>> ans; for (auto i : a) { ans.push_back(i); } print(name, ans); }
  void print(string name, map <string, int>& a) { vector <pair <string, int>> ans; for (auto i : a) { ans.push_back(i); } print(name, ans); }
  void print(string name, map <int, string>& a) { vector <pair <int, string>> ans; for (auto i : a) { ans.push_back(i); } print(name, ans); }
  void print(string name, map <string, string>& a) { vector <pair <string, string>> ans; for (auto i : a) { ans.push_back(i); } print(name, ans); }
  void print(string name, set <int>& a) { vector <int> ans; for (auto i : a) { ans.push_back(i); } print(name, ans); }
  void print(string name, set <pair <int, int>>& a) { vector <pair <int, int>> ans; for (auto i : a) { ans.push_back(i); } print(name, ans); }
  void print(string name, set <pair <string, int>>& a) { vector <pair <string, int>> ans; for (auto i : a) { ans.push_back(i); } print(name, ans); }
  void print(string name, set <pair <int, string>>& a) { vector <pair <int, string>> ans; for (auto i : a) { ans.push_back(i); } print(name, ans); }
  void print(string name, set <pair <string, string>>& a) { vector <pair <string, string>> ans; for (auto i : a) { ans.push_back(i); } print(name, ans); }
};
DEBUG debug;

bool testcases = 0;
void solve(int testcase) {
  
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int t = 1, all;
  if (testcases) cin >> t;
  all = t;
  while (t--) solve(all-t);
}
