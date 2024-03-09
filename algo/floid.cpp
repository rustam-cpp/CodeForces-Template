for (int k = 0; k < n; k++) {
  for (int v = 0; v < n; v++) {
    for (int u = 0; u < n; u++) {
      if (d[v][u] > d[v][k] + d[k][u] && d[v][k] < inf && d[k][u] < inf) {
        d[v][u] = d[v][k] + d[k][u];
      }
    }
  }
}