long long multiply(int base, int exponent) {
    long long ans = 1;
    for (int i = 0; i < exponent; i++) {
        ans *= base;
        if (ans > 1e9) return ans; // Early stopping if answer exceeds limit
    }
    return ans;
}

int NthRoot(int n, int m) {
    int l = 1;
    int r = m;
    int mid;
    while (l <= r) {
        mid = l + (r - l) / 2;
        long long midPower = multiply(mid, n);
        if (midPower == m) {
            return mid;
        } else if (midPower < m) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1; // If no integer root is found
}