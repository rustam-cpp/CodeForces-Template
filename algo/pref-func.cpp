string s;
cin >> s;
int n = s.size();
vector <int> a(n);
for (int i = 1; i < n; i++) {
  int k = a[i - 1];
  while (k > 0 && s[k] != s[i]) {
    k = a[k - 1];
  }
  if (s[k] == s[i]) {
    k++;
  }
  a[i] = k;
}