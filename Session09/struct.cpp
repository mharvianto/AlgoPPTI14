#include<stdio.h>
#include<string.h>

struct Date {
    int date;
    int month;
    int year;
};

enum Gender {
    Male,
    Female,
};

struct Student {
    char id[15];
    char name[100];
    Date birthDate;
    Gender gender;
};

int main(){
    char monthName[20][5] = { "", "Jan", "Feb", "Mar", "Apr", "Mei", "Jun", "Jul", "Agu", "Sep", "Okt", "Nov", "Dec"};
    struct Date tglLahir = { 12, 10, 2022 };
    printf("%d %s %d\n", tglLahir.date, monthName[tglLahir.month], tglLahir.year);

    Student keren;
    strcpy(keren.id, "1234567890");
    strcpy(keren.name, "Keren Hosanna Birila");
    keren.birthDate.date = 23;
    keren.birthDate.month = 7;
    keren.birthDate.year = 2004;
    keren.gender = Female;

    printf("Id: %s\n", keren.id);
    printf("Name: %s\n", keren.name);
    printf("BirthDate: %d %s %d\n", keren.birthDate.date, monthName[keren.birthDate.month], keren.birthDate.year);
    printf("Gender: %d\n", keren.gender);

    Student ppti14[40];
    ppti14[0] = keren;
    strcpy(keren.id, "2600012345");

    printf("Id: %s\n", ppti14[0].id);
    printf("Name: %s\n", ppti14[0].name);
    printf("BirthDate: %d %s %d\n", ppti14[0].birthDate.date, monthName[ppti14[0].birthDate.month], ppti14[0].birthDate.year);
    return 0;
}