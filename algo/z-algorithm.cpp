string s;
cin >> s;
int n = s.size();
vector <int> a(n);
int j = 0;
for (int i = 1; i < n; i++) {
  if (a[i - j] + (i - j) < a[j]) {
    a[i] = a[i - j];
  } else {
    a[i] = max(a[j] - (i - j), 0ll);
    while (i + a[i] < n && s[i + a[i]] == s[a[i]]) {
      a[i]++;
    }
    if (i + a[i] > j + a[j]) {
      j = i;
    }
  }
}
a[0] = n;