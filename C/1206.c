#include <stdio.h>

//Chapter23 구조체
//475p
// struct point
// {
//     int xpos;
//     int ypos;
// };

// typedef struct point Point;

// typedef struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// }Person;

// int main(void){
//     Point pos = {10,20};
//     Person man = {"이승기", "010-1212-0001", 21};
//     printf("%d %d \n", pos.xpos, pos.ypos);
//     printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//     return 0;
// }


//478p
// typedef struct point
// {
//     int xpos;
//     int ypos;
// }Point;

// void ShowPosition(Point pos){
//     printf("[%d %d] \n", pos.xpos, pos.ypos);
// }

// Point GetCurrentPosition(void){
//     Point cen;
//     printf("Input current pos: ");
//     scanf("%d %d", &cen.xpos, &cen.ypos);
//     return cen;
// }

// int main(void){
//     Point curPos = GetCurrentPosition();
//     ShowPosition(curPos);
//     return 0;
// }



//483p
// typedef struct point
// {
//     int xpos;
//     int ypos;
// }Point;

// Point AddPoint(Point pos1, Point pos2)
// {
//     Point pos = {pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos};
//     return pos;
// }

// Point MinPOint(Point pos1, Point pos2)
// {
//     Point pos = {pos1.xpos-pos2.xpos, pos1.ypos-pos2.ypos};
//     return pos;
// }

// int main(void){
//     Point pos1 = {5,6};
//     Point pos2 = {2, 9};
//     Point result;

//     result = AddPoint(pos1, pos2);
//     printf("[%d %d] \n", result.xpos, result.ypos);
//     result = MinPOint(pos1, pos2);
//     printf("[%d %d] \n", result.xpos, result.ypos);
//     return 0;
// }



//495p
// typedef enum syllable{
//     Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
// }Syllable;
 
// void Sound(Syllable sy)
// {
//     switch (sy)
//     {
//     case Do:
//         puts("도는 하얀 도라지 ♪"); return;
//     case Re:
//         puts("레는 둥근 레코드 ♪"); return;
//     case Mi:
//         puts("미는 파란 미나리 ♪♪"); return;
//     case Fa:
//         puts("파는 예쁜 파랑새 ♩♪"); return;
//     case So:
//         puts("솔은 작은 솔방울 ♪♩"); return;
//     case La:
//         puts("라는 라디오고요~ ♪♪"); return;
//     case Ti:
//         puts("시는 졸졸 시냇물 ♪♪"); return;
//     }
//     puts("다 함께 부르세~ 도레미파 솔라시도 솔 도~ 짠~♬");
// }

// int main(void)
// {
//     Syllable tone;
//     for(tone = Do; tone<=Ti; tone+=1)
//         Sound(tone);
//     return 0;
// }



//Chapter24 파일 입출력
//505p
// int main(void)
// {
//     FILE* fp = fopen("data.txt", "wt");
//     if(fp == NULL)
//     {
//         puts("파일오픈 실패!");
//         return -1;
//     }

//     fputc('A', fp);
//     fputc('B', fp);
//     fputc('C', fp);
//     fclose(fp);
//     return 0;
// }



//509p
// int main(void){
//     int ch, i;
//     FILE* fp = fopen("data.txt", "rt");
//     if(fp == NULL){
//         puts("파일오픈 실패!");
//         return -1;
//     }

//     for(i = 0; i<3; i++){
//         ch = fgetc(fp);
//         printf("%c \n", ch);
//     }
//     fclose(fp);
//     return 0;
// }






//개인공부
//배열을 함수의 인자로 전달 (312p ArrayParam)
// #include <stdio.h>

// void ShowArayElem(int *param, int len)
// {
//     int i;
//     for(i=0; i<len; i++)
//         printf("%d ", param[i]);
//     printf("\n");
// }

// int main(void){
//     int arr1[3] = {1,2,3};
//     int arr2[5] = {4,5,6,7,8};
//     ShowArayElem(arr1, sizeof(arr1)/sizeof(int));       //ShowArayElem 함수 인자: arr1 배열, arr1 배열 길이
//     ShowArayElem(arr2, sizeof(arr2)/sizeof(int));
//     return 0;
// }



//배열을 함수의 인자로 전달하고 값 변경까지(313p ArrayParamAccess)
// #include <stdio.h>

// void ShowArayElem(int* param, int len){     //int* param == int param[]
//     int i;
//     for(i=0; i<len; i++)
//         printf("%d ", param[i]);
//     printf("\n");
// }

// void AddArrayElem(int* param, int len, int add){
//     int i;
//     for(i=0; i<len; i++)
//         param[i] += add;
// }

// int main(void){
//     int arr[3] = {1,2,3};
//     AddArrayElem(arr, sizeof(arr)/sizeof(int), 1);      //AddArrayElen 함수 인자: arr 배열, arr 배열 길이, 얼마를 더할지
//     ShowArayElem(arr, sizeof(arr)/sizeof(int));

//     AddArrayElem(arr, sizeof(arr)/sizeof(int), 2);
//     ShowArayElem(arr, sizeof(arr)/sizeof(int));

//     AddArrayElem(arr, sizeof(arr)/sizeof(int), 3);
//     ShowArayElem(arr, sizeof(arr)/sizeof(int));

//     return 0;
// }



//값을 전달하는 형태의 함수: Call-by-value
// #include <stdio.h>
// void Swap(int n1, int n2)
// {
//     int temp = n1;
//     n1 = n2;
//     n2 = temp;
//     printf("n1 n2: %d %d \n", n1, n2);
// }

// int main(void){
//     int num1 = 10;
//     int num2 = 20;
//     printf("num1 num2: %d %d \n", num1, num2);

//     Swap(num1, num2);   //num1과 num2에 저장된 값이 서로 바뀌길 기대!
//     printf("num1 num2: %d %d \n", num1, num2);
//     return 0;
// }



//주소 값을 전달하는 형태의 함수: Call-by-reference
// #include <stdio.h>

// void Swap(int* ptr1, int* ptr2){
//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
// }

// int main(void){
//     int num1 = 10;
//     int num2 = 20;
//     printf("num1 num2: %d %d \n", num1, num2);

//     Swap(&num1, &num2);
//     printf("num1 num2: %d %d \n", num1, num2);
//     return 0;
// }



//320p
//연습문제14-1
//문제1
// void SquareByValue(int num){   //Call-by-value
//     num *= num;
//     return num;
// }

// void SquareByReference(int* num){    //Call-by-reference
//     *num *= *num;
// }

// int main(void){
//     int num;
//     printf("숫자를 입력하시오: ");
//     scanf("%d", &num);
//     SquareByValue(num);
//     printf("%d\n", num);
//     SquareByReference(&num);
//     printf("%d\n", num);
//     return 0;
// }



// //문제2
// void Swap3(int n1[], int n2[], int n3[]){
//     int temp = *n1;

// }
// int main(void){
//     int num1, num2, num3;
//     printf("세 개의 정수를 입력하시오: ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     Swap3(&num1, &num2, &num3);

//     return 0;
// }