#include<stdio.h>
int x = 0b1011; //binary = 2
int y = 0x10; //hexadecimal = 16
int z = 10; //Decimal = 10

int main(){
    printf("x in Decimal :%d\n", x);
    printf("x in Octal :%o\n", x);
    printf("x in Hexadecimal :%x\n\n", x);
    // printf("x in binary :%0xb\n", x);

    printf("y in Decimal :%d\n", y);
    printf("y in Octal :%o\n", y);
    printf("y in Hexadecimal :%x\n\n", y);
    printf("Y in birary :%d\n", x);

    printf("z in Decimal :%d\n", z);
    printf("z in Octal :%o\n", z);
    printf("z in Hexadecimal :%x\n\n", z);
    return 0;
}
