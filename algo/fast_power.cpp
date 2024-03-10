int fpow(int a, int n, int mod) {
  if (n == 0) return 1;
  if (n == 1) return a;
  int k = fpow(a, n / 2, mod);
  if (n % 2 == 0) {
    return (k % mod) * (k % mod) % mod;
  } else {
    return (k % mod) * (k * a % mod) % mod;
  }
}