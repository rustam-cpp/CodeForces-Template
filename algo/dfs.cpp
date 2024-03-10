void dfs(int cur) {
  used[cur] = 1;
  for (auto i : g[cur]) {
    if (!used[i]) {
      dfs(i);
    }
  }
}