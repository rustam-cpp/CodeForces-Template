void bellman(int st) {
  d[st] = 0;
  for (int i = 0; i < d.size(); i++) {
    for (edge e : g) {
      if (d[e.v] + e.w < d[e.u] && d[e.v] < inf) {
        d[e.u] = d[e.v] + e.w;
      }
    }
  }
}