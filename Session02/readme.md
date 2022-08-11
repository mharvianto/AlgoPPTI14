# Session 02

## Operator

### Arithmahtic Operator

| Operator | Description           | Ex:          |
| :------: | --------------------- | ------------ |
|   `+`    | _Perjumlahan_         | `7 + 5` &rarr; 12  |
|   `-`    | _Pengurangan_         | `7 - 5` &rarr; 2   |
|   `*`    | _Pengalian_           | `7 * 5` &rarr; 35 |
|   `/`    | _Pembagian_           | `7 / 5` &rarr; 1   |
|   `%`    | _Modulus_/_sisa bagi_ | `7 % 5` &rarr; 2   |

### Bitwise Operator

| Operator | Description | Ex:                  |
| :------: | ----------- | -------------------- |
|   `\|`   | OR          | `11 \| 14` &rarr; 15 |
|   `&`    | AND         | `11 & 14` &rarr; 10  |
|   `^`    | XOR         | `11 ^ 14` &rarr; 5   |
|   `<<`   | Shift left  | `10 << 2` &rarr; 40  |
|   `>>`   | Shift right | `10 >> 2` &rarr; 2   |

### Logical Operator

| Operator | Description          | Ex 1:               | Ex 2:               |
| :------: | -------------------- | ------------------- | ------------------- |
|   `<`    | Less than            | `7 < 5` &rarr; 0    | `5 < 5` &rarr; 0    |
|   `>`    | More than            | `7 > 5` &rarr; 1    | `5 > 5` &rarr; 0    |
|   `<=`   | Less than and equals | `7 <= 5` &rarr; 0   | `5 <= 5` &rarr; 1   |
|   `>=`   | More than and equals | `7 >= 5` &rarr; 1   | `5 >= 5` &rarr; 1   |
|   `==`   | Equals               | `7 == 5` &rarr; 0   | `5 == 5` &rarr; 1   |
|   `!=`   | Not Equals           | `7 != 5` &rarr; 1   | `5 != 5` &rarr; 0   |
|  `\|\|`  | OR                   | `1 \|\| 0` &rarr; 1 | `0 \|\| 0` &rarr; 0 |
|   `&&`   | AND                  | `1 && 1` &rarr; 0   | `1 && 0` &rarr; 0   |


## Selection

### `if-else`
General uses, like range (1-100);

Ex 1:
```c++
int a = 7;
if (a < 10) {
    printf("the number less than 10.\n");
}
```

Ex 2:
```c++
int a = 7;
if (a < 10) {
    printf("the number less than 10.\n");
} else if(a <= 20) {
    printf("the number between 10 and 20\n");
}
```

### `switch-case`

Specific uses.

```c++
int angka = 3;
switch(angka) {
    case 0: printf("Nol\n"); break;
    case 1: printf("Satu\n"); break;
    case 2: printf("Dua\n"); break;
    case 3: printf("Tiga\n"); break;
    case 4: printf("Empat\n"); break;
    case 5: printf("Lima\n"); break;
    case 6: printf("Enam\n"); break;
    case 7: printf("Tujuh\n"); break;
    case 8: printf("Delapan\n"); break;
    case 9: printf("Sembilan\n"); break;
}
```

## Looping / Iteration

### `for`

### `while`

### `do-while`

Challenge: [link](challenge.md) 