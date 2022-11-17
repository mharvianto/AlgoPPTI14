#include<stdio.h>

struct Course {
    char code[10];
    char name[105];
    int credits;
} db[1005];

int main(){
    int n, q, a;
    scanf("%d", &n); getchar();
    for (int i = 0; i < n; i++) {
        scanf("%s", db[i].code); getchar();
        scanf("%[^\n]", db[i].name); getchar();
        scanf("%d", &db[i].credits); getchar();
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &a);
        printf("Query #%d:\n"
            "Code: %s\n"
            "Name: %s\n"
            "Credits: %d\n", i+1, db[a-1].code, db[a-1].name, db[a-1].credits);
    }
    return 0;
}