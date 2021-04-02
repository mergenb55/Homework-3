#include<stdio.h>
#include<stdlib.h>

struct student {             //struct형 구조체 선언
    char lastName[13];      //char형 변수 선언
    int studentId;          //int형 변수 선언
    short grade;            //short형 변수 선언
};

int main()
{
    printf("[----- [Bayarbat Mergen] [2020039087] -----]\n");
    struct student pst;                     			    //구조체 초기화

    printf("size of student = %ld\n", sizeof(struct student));      //구조체의 사이즈를 출력, padding에서의 크기
    printf("size of int = %ld\n", sizeof(int));                     //int형의 사이즈를 출력
    printf("size of short = %ld\n", sizeof(short));                 //short형으 사이즈를 출력

    return 0;                       //리턴
}

