# Session 01

## main function template

```c
#include<stdio.h>

int main(){
    // your code
    return 0;
}
```

## Output

`printf([format]);` Untuk mengcetak ke layar.

Ex:

```c
printf("Hello world!\n");
```

Ref: https://cplusplus.com/reference/cstdio/printf/

## Escape Sequence

| Escape Sequence | Arti           |
| --------------- | -------------- |
| `\n`            | New line/Enter |
| `\t`            | Horizontal tab |

## Type Data

| Type Data | Description               | Format | Size   |
| --------- | ------------------------- | :----: | ------ |
| `short`   | Angka bulat               |  `%d`  | 2 byte |
| `int`     | Angka bulat               |  `%d`  | 4 byte |
| `long`    | Angka bulat               | `%ld`  | 8 byte |
| `char`    | Huruf/character           |  `%c`  | 1 byte |
| `char[]`  | string/array of char/word |  `%s`  |        |
| `float`   | Angka desimal             |  `%f`  | 4 byte |
| `double`  | Angka desimal             | `%lf`  | 8 byte |

## Variabel

[type data] [nama variable]

Ex:

```c
int angka;
```

```c
char nama[50];
```
