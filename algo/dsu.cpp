vector <int> p;
vector <int> r;

int get(int a) {
  if (p[a] == a) {
    return a;
  }
  return get(p[a]);
}

void uni(int a, int b) {
  int v = get(a);
  int u = get(b);
  if (v == u) {
    return;
  }
  if (r[v] > r[u]) {
    p[u] = v;
    r[v] += r[u];
  } else {
    p[v] = u;
    r[u] += r[v];
  }
}
