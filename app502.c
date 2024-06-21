//ข้อมูลอักขระ
#include<stdio.h>
#include<stdbool.h>
int X = 65;//Decimal = 10
int y = 33;//Decimal = 10
bool isMarry = true;
bool ismale = false;

int main()
{
    printf("x in Decimal :%d\n", X);
    printf("x in Octal :%o\n", X);
    printf("x in Hexadecimal :%x\n", X);
    printf("x in Character :%c\n", X);
    printf("isMarry in bool :%d\n\n", isMarry);

    printf("y in Decimal :%d\n", y);
    printf("y in Octal :%o\n", y);
    printf("y in Hexadecimal :%x\n", y);
    printf("y in Character :%c\n", y);
    printf("isMale in bool :%d\n\n", ismale);
    return 0;
}