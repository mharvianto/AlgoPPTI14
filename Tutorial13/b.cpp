#include<stdio.h>

int flood(char map[105][105], int x, int y, int xMax, int yMax) {
    if(x < 0 || y < 0 || x >= xMax || y >= yMax || map[y][x] == '#') return 0;
    int count = map[y][x] == '.' ? 1 : 0;
    map[y][x] = '#';
    return count + flood(map, x - 1, y, xMax, yMax) +
        flood(map, x + 1, y, xMax, yMax) +
        flood(map, x, y - 1, xMax, yMax) +
        flood(map, x, y + 1, xMax, yMax);
}

int main(){
    int t, p, l;
    char map[105][105];
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++) {
        scanf("%d %d", &p, &l);
        for (int i = 0; i < p; i++) {
            scanf("%s", map[i]);
        }
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < l; j++) {
                if (map[i][j] == 'S') {
                    printf("Case #%d: %d\n", tc + 1, flood(map, j, i, l, p));
                }
            }
        }
    }
    
    return 0;
}