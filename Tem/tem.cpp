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

template <typename T> istream& operator >> (istream& in, vector <T>& a) { for (auto &i : a) in >> i; return in; }
template <typename X> map <X, int> Count(vector <X>& a) { map <X, int> cnt; for (auto i : a) cnt[i]++; return cnt; }
template <typename A, typename B> ostream& operator << (ostream& out, pair <A, B>& a) { out << "[ "; out << a.first << ", " << a.second; out << " ]"; return out; }
template <typename V> ostream& operator << (ostream& out, vector <V>& a) { out << "{ "; int num = 0; for (auto i : a) { out << i; num++; out << ((num != 0 && num != a.size()) ? ", " : " "); } out << "}"; return out; }
template <typename W, typename Y> ostream& operator << (ostream& out, map <W, Y>& a) { out << "{ "; int num = 0; for (auto i : a) { out << i; num++; out << ((num != 0 && num != a.size()) ? ", " : " "); } out << "}"; return out; }
template <typename Z> ostream& operator << (ostream& out, set <Z>& a) { out << "{ "; int num = 0; for (auto i : a) { out << i; num++; out << ((num != 0 && num != a.size()) ? ", " : " "); } out << "}"; return out; }

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
