#include<stdio.h>
#include<stdlib.h>

void main()
{
    int** x;               			    //더블형 포인터 선언
    printf("[----- [Bayarbat Mergen] [2020039087] -----]\n");
    printf("sizeof(x) = %lu\n", sizeof(x));         //x의 사이즈를 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));       //*x의 사이즈를 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x));     //**x의 사이즈를 출력
}
