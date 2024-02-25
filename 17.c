#include <stdio.h>

int add(int start, int end)
{
    if (start == end) {
        return start;
    }
    return start + add(start + 1, end);
}

int main()
{
    int start = 1;
    int end = 99;
    int result = add(start, end);
    printf("%d\n", result);

    return 0;
}