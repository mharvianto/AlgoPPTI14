#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student {
    char name[50];
    int score;
};

void bubble(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].score < arr[j+1].score) {
                Student temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } else if(arr[j].score == arr[j+1].score && strcmp(arr[j].name, arr[j+1].name) > 0) {
                Student temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main () {
    char nama[100][50] = {
        "ABRAHAM MAHAYANA SETIAWAN",
        "ALEXANDER IMMANUEL SAMOSIR",
        "ANDREAS LIUJAYA WIRANATA",
        "CAROLINE NATALIA AMRAN",
        "CATHERINE OLIVIA WINANDA",
        "DAVIN RAFFILIO",
        "DEXTER VALERIAN KRISNADHI",
        "DIANDRA PRAMESTI KINASIH",
        "EVOTIANUS",
        "FELIX GUSTINO TJUATJA",
        "FREDY SUNJAYA",
        "GRACE ADELINE KHARISMA",
        "GRISELLA MEIRISIA ZEGA",
        "HOSANNIA MICHAELA MARSINTA HARDIPUTRI",
        "HOWAN ANDERSON",
        "IGNES ANGELICA",
        "MICHAEL",
        "MUHAMMAD ARYA AQILAH FAUZAN",
        "PETER PRATAMA MULYADI",
        "RICHIE HARTONO",
        "SUPANDI SAPUTRA",
        "VALINA EVELYN PRANOTO",
        "VANECHKA RADJA WINATA",
        "AGNES RINAWATI NAULITA SIANTURI",
        "KEREN HOSANNA BIRILA",
        "STEPHANIE ANASTASIA MAKMUR",
        "NEISYA HOLLY SANTOSO",
        "NATHASYA RIZANDI",
        "ARI KUSUMADEWI",
        "JOELIARDO GERALD LEVIOTHNIEL",
        "SHAQUILLE DITAMA PUTRA",
        "MICHAEL SCUDERIA TANUDJAJA",
        "ARIYA GUNANANDA",
        "MATTHEW ALBERT SETIAWAN",
        "PUTU ARYASATYA DHARMA KENZHIE",
    };
    Student ppti14[50];
    printf("\n\n\n\n\n");
    for (int i = 0; i < 35; i++) {
        strcpy(ppti14[i].name, nama[i]);
        ppti14[i].score = rand() % 36 + 65; // 65 - 100
    }
    bubble(ppti14, 35);
    for (int i = 0; i < 35; i++) {
        printf("%3d - %s\n", ppti14[i].score, ppti14[i].name);
    }
    return 0;
}