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

| Type Data | Description               | Format |
| --------- | ------------------------- | :----: |
| `short`   | Angka bulat               |  `%d`  |
| `int`     | Angka bulat               |  `%d`  |
| `long`    | Angka bulat               | `%ld`  |
| `char`    | Huruf/character           |  `%c`  |
| `char[]`  | string/array of char/word |  `%s`  |
| `float`   | Angka desimal             |  `%f`  |
| `double`  | Angka desimal             | `%lf`  |

## Variabel

[type data] [nama variable]

Ex:

```c
int angka;
```

```c
char nama[50];
```
