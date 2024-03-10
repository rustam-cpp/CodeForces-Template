void dijkstra(int start) {
  set <pair <int, int>> q;
  q.insert({0, start});
  d[start] = 0;
  while (!q.empty()) {
    int v = (*q.begin()).second;
    q.erase(q.begin());
    for (auto u : g[v]) {
      if (d[u.second] > d[v] + u.first) {
        d[u.second] = d[v] + u.first;
        q.insert({d[u.second], u.second});
      }
    }
  }
}