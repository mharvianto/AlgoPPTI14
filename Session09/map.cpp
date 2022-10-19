#include<stdio.h>

int floodfill(char map[100][100], int x, int y) {
    if (map[x][y] == '#') return 0;
    map[x][y] = '#';
    return 1 + floodfill(map, x+1, y) + floodfill(map, x-1, y) + 
        floodfill(map, x, y+1) + floodfill(map, x, y-1);
}

/*
######
#..A.#
###..#
#.##.#
#B.#.#
######
*/
int main (){
    int n;
    char map[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", map[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if('A' <= map[i][j] && map[i][j] <= 'Z') {
                char city = map[i][j];
                printf("%c %d\n", city, floodfill(map, i, j));
            }
        }
    }
    return 0;
}