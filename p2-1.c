#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100                        //MAX_SIZE를 100으로 설정

float sum(float list[], int);               //매개변수 선언
float input[MAX_SIZE], answer;              //배열, 변수 선언
int i;                                      //변수 선언

void main(void)
{
    printf("[----- [Bayarbat Mergen] [2020039087] -----]\n");
    for (i = 0; i < MAX_SIZE; i++)             //for loop
        input[i] = i;

    printf("address of input = %p\n\n", input);         //input의 주소 출력

    answer = sum(input, MAX_SIZE);                      //함수를 부른다
    printf("The sum is: %f\n", answer);                 //변수의 값을 출력
}

float sum(float list[], int n)                          //함수
{
    printf("value of list = %p\n", list);               //리스트의 값을 출력
    printf("address of list = %p\n\n", &list);          //리스트의 주소 출력
    int i;                                              //변수 선언
    float tempsum = 0;                                  //변수 선언
    for (i = 0; i < n; i++)                              //for loop
        tempsum += list[i];
    return tempsum;                                     //리턴
}