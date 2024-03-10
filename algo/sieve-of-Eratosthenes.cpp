int n;
cin >> n;
vector <bool> primes(n + 1, true);
primes[0] = false;
primes[1] = false;
for (int i = 2; i <= n; i++) {
  if (primes[i]) {
    for (int j = i * 2; j <= n; j += i) {
      primes[j] = false;
    }
  }
}