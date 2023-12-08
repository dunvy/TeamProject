//Chapter25 메모리 관리와 메모리의 동적 할당
// #include <stdio.h>
// #include <stdlib.h>

// char* ReadUserName(void){
//     char* name = (char*)malloc(sizeof(char)*30);
//     printf("Waht's your name? ");
//     gets(name);
//     return name;
// }

// int main(void){
//     char* name1;
//     char* name2;
//     name1 = ReadUserName();
//     printf("name1: %s \n", name1);
//     name2 = ReadUserName();
//     printf("name2: %s \n", name2);

//     printf("again name1: %s \n", name1);
//     printf("again name2: %s \n", name2);
//     free(name1);
//     free(name2);
//     return 0;
// }



// #include <stdio.h>

// char* ReadArr(void){
//     char* arr = (char*)malloc(sizeof(char)*30);
//     printf("");
// }

// int main(void){
//     char* arr1;
//     arr1 = ReadArr();
// }







// //15장 도전문제
// //문제 1번
// #include <stdio.h>

// void Odd(int arr[], int len){         //홀수
//     printf("홀수 출력:");
//     for (int i = 0; i < len; i++)
//     {
//         if (arr[i]%2 != 0)
//             printf("%d ", arr[i]);        
//     }    
// }
// void Even(int arr[], int len){        //짝수
//     printf("짝수 출력:");
//     for (int i = 0; i < len; i++)
//     {
//         if (arr[i]%2 == 0)
//             printf("%d ", arr[i]);        
//     }
// }
// int main(void){
//     int arr[10];
//     printf("총 10개의 숫자 입력\n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("입력: ");
//         scanf("%d", &arr[i]);
//     }
//     Odd(arr, sizeof(arr)/sizeof(int));
//     printf("\n");
//     Even(arr, sizeof(arr)/sizeof(int));
//     return 0;
// }



// //문제 2번
// int main(void){
//     int num, i = 0;
//     int arr[10];
//     prnitf("10진수 정수 입력: ");
//     scanf("%d", &num);
    
//     while (1)
//     {
//         arr[i] = num%2;
//         i++;
//     }
//     for (int i = 0; num < 1; i++)
//     {
//         arr[i] = num%2;
//         num /= 2;
//     }
            

//     return 0;
// }



//Chapter16 다차원배열
//문제 16-1
//문제1
// #include <stdio.h>

// int main(void){
//     int arr[3][9] = {{2,4,6,8,10,12,13,15,18}, {3,6,9,12,15,18,21,24,27}, {4,8,12,16,20,24,28,32,36}};

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 9; j++)
//             printf("%d ", arr[i][j]);
//         printf("\n");
//     }    
//     return 0;
// }



//문제2
#include <stdio.h>

int main(void){
    int arr1[2][4] = {{1,2,3,4},{5,6,7,8}};
    int arr2[][2] = {1,5,2,6,3,7,4,8};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", arr1[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}