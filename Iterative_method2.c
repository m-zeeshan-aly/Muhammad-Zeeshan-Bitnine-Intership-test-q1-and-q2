int fibonacci_iterative(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int fib1 = 0, fib2 = 1, fib3 = 2;
    for (int i = 3; i <= n; i++) {
        int temp = fib1 + fib2 + fib3;
        fib1 = fib2;
        fib2 = fib3;
        fib3 = temp;
    }
    return fib3;
}
