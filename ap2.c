#include<stdio.h>
#include<stdlib.h>

void main()
{
    printf("[----- [Bayarbat Mergen] [2020039087] -----]\n");
    int list[5];                             	//배열 선언
    int* plist[5];                         	//포인터 배열 선언
    list[0] = 10;                             	//배열의 첮 번째 값을 10으로 초기화
    list[1] = 11;                                 //배열의 두 번째 값을 11으로 초기화
    plist[0] = (int*)malloc(sizeof(int));     	//동적 메모리 할당


    printf("list[0] \t= %d\n", list[0]);                       //배열 리스트의 첮 번째 값 출력
    printf("address of list\t =%p\n", list);                   //리스트의 주소 출력
    printf("address of list[0]\t =%p\n", &list[0]);            //배열 리스트의 첮 번째 주소 출력
    printf("address of list + 0\t =%p\n", list + 0);             //리스트의 첮 번째 주소 출력
    printf("address of list + 1\t =%p\n", list + 1);             //리스트의 두 번째 주소 출력
    printf("address of list + 2\t =%p\n", list + 2);             //리스트의 세 번째 주소 출력
    printf("address of list + 3\t =%p\n", list + 3);             //리스트의 네 번째 주소 출력
    printf("address of list + 4\t =%p\n", list + 4);             //리스트의 다섯 번째 주소 출력
    printf("address of list[4]\t =%p\n", &list[4]);            //배열 리스트의 다섯 번째 주소 출력

    free(plist[0]);                                            ////동적 메모리 해제
}

