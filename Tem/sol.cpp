#include <bits/stdc++.h>

using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#define int long long
#define int128 __int128_t

const int inf  = 7e18;
const int mod  = 1e9 + 7;
const int mod2 = 998244353;

#define all(x)(x).begin(), (x).end()
#define rall(x)(x).rbegin(), (x).rend()

template <typename T> istream& operator >> (istream& in, vector <T>& a) { for (auto &i : a) in >> i; return in; }
template <typename X> map <X, int> Count(vector <X>& a) { map <X, int> cnt; for (auto i : a) cnt[i]++; return cnt; }
template <typename A, typename B> ostream& operator << (ostream& out, pair <A, B>& a) { out << "[ "; out << a.first << ", " << a.second; out << " ]"; return out; }
template <typename C> ostream& operator << (ostream& out, vector <C>& a) { out << "{ "; int num = 0; for (auto i : a) { out << i; num++; out << ((num != 0 && num != a.size()) ? ", " : " "); } out << "}"; return out; }
template <typename D, typename E> ostream& operator << (ostream& out, map <D, E>& a) { out << "{ "; int num = 0; for (auto i : a) { out << i; num++; out << ((num != 0 && num != a.size()) ? ", " : " "); } out << "}"; return out; }
template <typename F> ostream& operator << (ostream& out, set <F>& a) { out << "{ "; int num = 0; for (auto i : a) { out << i; num++; out << ((num != 0 && num != a.size()) ? ", " : " "); } out << "}"; return out; }
template <typename G> ostream& operator << (ostream& out, queue <G>& a) { out << "{ "; int num = 0; for (auto i : a) { out << i; num++; out << ((num != 0 && num != a.size()) ? ", " : " "); } out << "}"; return out; }
template <typename H> ostream& operator << (ostream& out, deque <H>& a) { out << "{ "; int num = 0; for (auto i : a) { out << i; num++; out << ((num != 0 && num != a.size()) ? ", " : " "); } out << "}"; return out; }
template <typename I, typename J> ostream& operator << (ostream& out, unordered_map <I, J>& a) { out << "{ "; int num = 0; for (auto i : a) { out << i; num++; out << ((num != 0 && num != a.size()) ? ", " : " "); } out << "}"; return out; }
template <typename K> ostream& operator << (ostream& out, priority_queue <K>& a) { out << "{ "; int num = 0; for (auto i : a) { out << i; num++; out << ((num != 0 && num != a.size()) ? ", " : " "); } out << "}"; return out; }

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
