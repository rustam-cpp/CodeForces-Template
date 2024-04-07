struct DO {
  bool isset = 0;
  vector <int> a;
  void SetTree() {
    if (isset) {
      return;
    }
    int k = 1;
    while (k < a.size()) {
      k *= 2;
    }
    for (int i = 0; a.size() < k; i++) {
      a.push_back(0);
    }
    reverse(a.begin(), a.end());
    int sum = 0;
    for (int i = a.size(); i > 1; i /= 2) {
      for (int j = 0; j < i; j += 2) {
        a.push_back(a[j + sum] + a[j + sum + 1]);
      }
      sum += i;
    }
    reverse(a.begin(), a.end());
    isset = true;
  }
  void resize(int size) {
    a.resize(size);
  }
  int sum = 0;
  void recursion(int idx, int l, int r, int lx, int rx) {
    if (lx >= l && rx <= r) {
      sum += a[idx];
      return;
    }
    if (rx < l || lx >= r) {
      return;
    }
    recursion(idx * 2 + 1, l, r, lx, (lx + rx) / 2);
    recursion(idx * 2 + 2, l, r, (lx + rx) / 2 + 1, rx);
  }
  int Sum(int l, int r) { // sum of [l ... r]
    l = l * 2;
    r = r * 2 + 1;
    sum = 0;
    SetTree();
    recursion(0, l, r, 0, a.size());
    return sum;
  }
  int operator [] (int i) const {
    return a[i];
  }
  int& operator [] (int i) {
    return a[i];
  }
};