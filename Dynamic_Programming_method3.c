int fibonacci_dynamic(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int* memo = (int*) calloc(n + 1, sizeof(int));
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 2;

    for (int i = 3; i <= n; i++) {
        memo[i] = memo[i - 3] + memo[i - 2];
    }

    int result = memo[n];
    free(memo);
    return result;
}
