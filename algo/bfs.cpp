void bfs(int start) {
  queue <int> q;
  d[start] = 0;
  q.push(start);
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (auto u : g[v]) {
      if (d[u] < d[v] + 1) {
        d[u] = d[v] + 1;
        q.push(u);
      }
    }
  }
}