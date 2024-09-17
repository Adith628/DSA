int fibonacci(int n, unordered_map<int, int> &map)
{
    if (n == 0 || n == 1)
    {
        map[n] = n;
        return n;
    }
    int prev;
    int nextPrev;
    if (map[n - 1])
    {
        prev = map[n - 1];
    }
    else
        prev = fibonacci(n - 1, map);
    if (map[n - 2])
        nextPrev = map[n - 2];
    else
        nextPrev = fibonacci(n - 2, map);
    return prev + nextPrev;
}

int fib(int n)
{
    unordered_map<int, int> map;
    return fibonacci(n, map);
}