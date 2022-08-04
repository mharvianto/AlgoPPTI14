#include <stdio.h>

int main()
{
    int h, m, s;
    // 16:05:30 -> 04:05:30
    scanf("%d:%d:%d", &h, &m, &s);

    printf("%02d:%.2d:%02d\n", h % 12, m, s);
    return 0;
}