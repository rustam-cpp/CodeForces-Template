vector <vector <int>> Hash(int x, vector <int> mods, string s) {
  vector <vector <int>> ans(mods.size(), vector <int> (s.size() + 1));
  for (int i = 0; i < mods.size(); i++) {
    for (int j = 1; j <= s.size(); j++) {
      ans[i][j] = ans[i][j - 1] * x + (s[j] - 'a' + 1);
      ans[i][j] %= mods[i];
    }
  }
  return ans;
}
