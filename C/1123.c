// // // // //11월 23일
// // // // #include <stdio.h>

// // // // //234p static 변수 예제
// // // // // void SimpleFunc(void){
// // // // //     static int num1 = 0;
// // // // //     int num2 = 0;
// // // // //     num1++, num2++;
// // // // //     printf("static: %d, local: %d \n", num1, num2);
// // // // // }

// // // // //243p 재귀함수 예제
// // // // // int Factorial(int n){
// // // // //     if(n==0)
// // // // //         return 1;
// // // // //     else
// // // // //         return n * Factorial(n-1);
// // // // // }


// // // // int main(void){

// // // //     //12장
// // // //     //포인터 예제 PointerOperation
// // // //     // int num1 = 100, num2 = 100;
// // // //     // int *pnum;
// // // //     // pnum = &num1;   //포인터 pnum이 num1을 가리킴
// // // //     // (*pnum) += 30;  //num1 += 30;과 동일
// // // //     // pnum = &num2;
// // // //     // (*pnum) -= 30;
// // // //     // printf("num1: %d, num2: %d \n", num1, num2);



// // // //     //포인터 연습문제2
// // // //     // int num1=10, num2=20;
// // // //     // int *ptr1 = &num1;
// // // //     // int *ptr2 = &num2;
// // // //     // *ptr1 += 10;
// // // //     // *ptr2 -= 10;

// // // //     // ptr1 = &num2;
// // // //     // ptr2 = &num1;
    
// // // //     // printf("ptr1: %d, ptr2: %d\n", *ptr1, *ptr2);




// // // //     //9장 함수
// // // //     // //226p 예제 AnotherLocal
// // // //     // int cnt;
// // // //     // for(cnt=0; cnt<3; cnt++){
// // // //     //     int num = 0;
// // // //     //     num++;
// // // //     //     printf("%d번째 반복, 지역변수 num은 %d. \n", cnt+1, num);
// // // //     // }
// // // //     // if(cnt==3){
// // // //     //     int num = 7;
// // // //     //     num++;
// // // //     //     printf("if문 내에 존재하는 지역변수 num은 %d. \n", num);
// // // //     // }


// // // //     // 228p 예제 LocalValHideVal
// // // //     // int num = 1;
// // // //     // if(num==1){
// // // //     //     int num = 7;
// // // //     //     num+=10;
// // // //     //     printf("if문 내 지역변수 num: %d\n", num);
// // // //     // }
// // // //     // printf("main 함수 내 지역변수 num: %d\n", num);


// // // //     //234p static 변수 예제
// // // //     // int i;
// // // //     // for(i = 0; i<3; i++)
// // // //     //     SimpleFunc();

    
// // // //     //243p 재귀함수 예제
// // // //     // printf("1! = %d \n", Factorial(1));
// // // //     // printf("2! = %d \n", Factorial(2));
// // // //     // printf("3! = %d \n", Factorial(3));
// // // //     // printf("4! = %d \n", Factorial(4));
// // // //     // printf("9! = %d \n", Factorial(9));


// // // //     //256p 배열 변수 ArrayAccess
// // // //     // int arr[5];
// // // //     // int sum = 0, i;

// // // //     // arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;
// // // //     // for (i = 0; i < 5; i++)
// // // //     //     sum+=arr[i];
    
// // // //     // printf("배열요소에 저장된 값의 합: %d\n", sum);


// // // //     //259p 배열 예제 ArrayInit
// // // //     // int arr1[5] = {1,2,3,4,5};
// // // //     // int arr2[]= {1,2,3,4,5,6,7};
// // // //     // int arr3[5] = {1,2};
// // // //     // int ar1Len, ar2Len, ar3Len, i;


// // // //     // printf("배열 arr1의 크기: %d \n", sizeof(arr1));
// // // //     // printf("배열 arr2의 크기: %d \n", sizeof(arr2));
// // // //     // printf("배열 arr3의 크기: %d \n", sizeof(arr3));

// // // //     // ar1Len = sizeof(arr1)/sizeof(int);
// // // //     // ar2Len = sizeof(arr2)/sizeof(int);
// // // //     // ar3Len = sizeof(arr3)/sizeof(int);
    
// // // //     // for(i=0; i<ar1Len; i++)
// // // //     //     printf("%d", arr1[i]);
// // // //     // printf("\n");

// // // //     // for(i=0; i<ar2Len; i++)
// // // //     //     printf("%d", arr1[i]);
// // // //     // printf("\n");

// // // //     // for(i=0; i<ar3Len; i++)
// // // //     //     printf("%d", arr1[i]);
// // // //     // printf("\n");


// // // //     //260p 배열 문제
// // // //     // int a[5];
// // // //     // int n1,n2,n3,n4,n5,i, max, min, sum=0;
// // // //     // printf("숫자 5개를 입력하시오: ");
// // // //     // scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
// // // //     // a[0] = n1, a[1] = n2, a[3] = n3, a[4] = n4, a[5] = n5;

// // // //     // for(i=0; i<4; i++)
// // // //     //     // max = a[i]>a[i+1] ? a[i]:a[i+1];
// // // //     //     // min = a[i]<a[i+1] ? a[i]:a[i+1];
// // // //     //     sum += a[i];
    
// // // //     // printf("%d \n", sum);


// // // //     //262p 배열 예제 ArrayString
// // // //     // char str[] = "Good morning!";
// // // //     // printf("배열 str의 크기: %ld \n", sizeof(str));
// // // //     // printf("널 문자 문자형 출력: %c \n", str[13]);
// // // //     // printf("널 문자 정수형 출력: %d \n", str[13]);

// // // //     // str[12]='?';
// // // //     // printf("문자열 출력: %s\n", str);


// // // //     //263p 배열 예제 ReadString
// // // //     // char str[50];
// // // //     // int idx = 0;
    
// // // //     // printf("문자열 입력: ");
// // // //     // scanf("%s", str);
// // // //     // printf("입력 받은 문자열: %s \n", str);

// // // //     // printf("문자 단위 출력: ");
// // // //     // while(str[idx]!='\0'){
// // // //     //     printf("%c", str[idx]);
// // // //     //     idx++;
// // // //     // }
// // // //     // printf("\n");


// // // //     //266p 배열 예제 StartEndString
// // // //     // char str[50] = "I like C programming";
// // // //     // printf("string: %s \n", str);

// // // //     // str[8]='\0';
// // // //     // printf("string: %s \n", str);

// // // //     // str[6] = '\0';
// // // //     // printf("string: %s \n", str);

// // // //     // str[1] = '\0';
// // // //     // printf("string: %s \n", str);



// // // //     //268p
// // // //     //연습문제1 
// // // //     // char str[50];
// // // //     // int i=0, len=0;
// // // //     // printf("영단어를 입력하시오: ");
// // // //     // scanf("%s", str);
// // // //     // while(str[i] != '\0'){
// // // //     //     len += 1;
// // // //     //     i++;
// // // //     // }
// // // //     // printf("%d", len);


    

// // // //     //1124
// // // //         //12장 포인터
// // // //     // const unsigned int NUM1 = 3;
// // // //     // const unsigned int NUM2 = 5;
// // // //     // const unsigned int NUM3 = NUM1 & NUM2;
// // // //     // printf("%d\n", NUM3);
// // // //     // printf("%p", (void*)&NUM3);


// // // //     //280p 포인터예제 PointerOperation
// // // //     // int num1 =100, num2 = 100;
// // // //     // int *pnum;
// // // //     // pnum=&num1;
// // // //     // (*pnum)+=30;
// // // //     // pnum= &num2;
// // // //     // (*pnum) -=30;
// // // //     // printf("num:%d, num2:%d \n", num1,num2);


// // // //     //284p 포인터 연습문제
// // // //     // int num1=10, num2=20;
// // // //     // int *ptr1 = &num1;
// // // //     // int *ptr2 = &num2;
// // // //     // *ptr1 += 10;
// // // //     // *ptr2 -= 10;
// // // //     // ptr1 = &num2;
// // // //     // ptr2 = &num1;
// // // //     // printf("ptr1이 가리키는 변수: %d, ptr2가 가리키는 변수: %d", *ptr1, *ptr2);


// // // //     //290p 포인터와 배열 예제 ArrayNameType
// // // //     // int arr[3] = {0,1,2};
// // // //     // printf("배열의 이름: %p \n", arr);
// // // //     // printf("첫 번째 요소: %p \n", &arr[0]);
// // // //     // printf("두 번째 요소: %p \n", &arr[1]);
// // // //     // printf("세 번째 요소: %p \n", &arr[2]);
    

// // // //     //292p 예제 ArrayNamePointerOperation
// // // //     // int arr1[3] = {1,2,3};
// // // //     // double arr2[3] = {1.1, 2.2, 3.3};

// // // //     // printf("%d %g\n", *arr1, *arr2);
// // // //     // *arr1 += 100;
// // // //     // *arr2 += 120.5;
// // // //     // printf("%d %g \n", arr1[0], arr2[0]);


// // // //     //297p 예제 PointerBaseArrayAccess
// // // //     // int arr[3] = {11,22,33};
// // // //     // int * ptr = arr;
// // // //     // printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));
// // // //     // printf("%d ", *ptr);
// // // //     // ptr++;                          //printf 함수 호출 후, ptr++ 실행    
// // // //     // printf("%d ", *ptr);
// // // //     // ptr++;
// // // //     // printf("%d ", *ptr);
// // // //     // ptr--;                          //printf 함수 호출 후, ptr-- 실행
// // // //     // printf("%d ", *ptr);
// // // //     // ptr--;
// // // //     // printf("%d ", *ptr);
// // // //     // printf("\n");


// // // //     //302p 예제 TwoStringType
// // // //     // char str1[] = "My String";
// // // //     // char *str2 = "Your String";
// // // //     // printf("%s %s\n", str1, str2);

// // // //     // str2 = "Our String";
// // // //     // printf("%s %s \n", str1, str2);

// // // //     // str1[0] = 'X';
// // // //     // //str2[0] = 'X';
// // // //     // printf("%s %s \n", str1, str2);


// // // //     //305p 문자열저장하는 배열 StringArray
// // // //     // char * strArr[3] ={"Simple", "String", "Array"};
// // // //     // printf("%s \n", strArr[0]);
// // // //     // printf("%s \n", strArr[1]);
// // // //     // printf("%s \n", strArr[2]);


// // // //     return 0;
// // // // }






// // // //1127
// // // //Chapter14 포인터 함수
// // // //배열을 함수의 인자로 전달 (312p 예제 ArrayParam)
// // // // #include <stdio.h>

// // // // void ShowArayElem(int* param, int len)      //배열의 이름과 배열의 길이를 가져옴
// // // // {
// // // //     int i;
// // // //     for(i = 0; i<len; i++)
// // // //         printf("%d", param[i]);
// // // //     printf("\n"), printf("\n");
// // // // }

// // // // int main(void)
// // // // {
// // // //     int arr1[3] = {1,2,3};
// // // //     int arr2[5] = {4,5,6,7,8};
// // // //     ShowArayElem(arr1, sizeof(arr1)/sizeof(int));
// // // //     ShowArayElem(arr2, sizeof(arr2)/sizeof(int));
// // // //     return 0;
// // // // }



// // // //배열을 함수의 인자로 전달2 (313p 예제 ArraryParamAccess)
// // // // #include <stdio.h>

// // // // void ShowArayElem(int* param, int len)
// // // // {
// // // //     int i;
// // // //     for(i = 0; i<len; i++)
// // // //         printf("%d ", param[i]);
// // // //     printf("\n");
// // // // }

// // // // void AddArayElem(int * param, int len, int add)
// // // // {
// // // //     int i;
// // // //     for(i=0; i<len; i++)
// // // //         param[i] += add;
// // // // }

// // // // int main(void)
// // // // {
// // // //     int arr[3] = {1,2,3};
// // // //     AddArayElem(arr, sizeof(arr)/sizeof(int), 1);
// // // //     ShowArayElem(arr, sizeof(arr)/sizeof(int));

// // // //     AddArayElem(arr, sizeof(arr)/sizeof(int), 2);
// // // //     ShowArayElem(arr, sizeof(arr)/sizeof(int));

// // // //     AddArayElem(arr, sizeof(arr)/sizeof(int), 3);
// // // //     ShowArayElem(arr, sizeof(arr)/sizeof(int));

// // // //     return 0;
// // // // }



// // // //값을 전달하는 형태의 함수 호출: Call-by-value (315p 예제 CallByValueSwap)
// // // // #include <stdio.h>

// // // // void Swap(int n1, int n2){
// // // //     int temp = n1;
// // // //     n1 = n2;
// // // //     n2 = temp;
// // // //     printf("n1 n2: %d %d\n", n1, n2);
// // // // }

// // // // int main(void){
// // // //     int num1 = 10;
// // // //     int num2 = 20;
// // // //     printf("num1 num2: %d %d\n", num1, num2);

// // // //     Swap(num1, num2);    //값이 바뀌길 기대하지만 어림없죠?
// // // //     printf("num1 num2: %d %d \n", num1, num2);
// // // //     return 0;
// // // // }



// // // //주소 값을 전달하는 형태의 함수 호출: Call-by-value (315p 예제 CallByValueSwap)
// // // // #include <stdio.h>

// // // // void Swap(int* ptr1, int* ptr2){
// // // //     int temp = *ptr1;
// // // //     *ptr1 = *ptr2;
// // // //     *ptr2 = *ptr1;
// // // // }

// // // // int main(void){
// // // //     int num1 = 10;
// // // //     int num2 = 20;
// // // //     printf("num1 num2: %d %d\n", num1, num2);

// // // //     Swap(&num1, &num2);    //주소값 전달
// // // //     printf("num1 num2: %d %d \n", num1, num2);
// // // //     return 0;
// // // // }



// // // //연습문제 14-1 (320p)
// // // //문제1
// // // // void SquareByValue(int n){       //값 전달
// // // //     n *= n;
// // // // }

// // // // void SquareByReference(int* ptr){       //주소 전달
// // // //     *ptr *= *ptr;
// // // // }

// // // // int main(void){
// // // //     int num = 5;
// // // //     SquareByValue(num);
// // // //     printf("%d\n", num);

// // // //     SquareByReference(&num);
// // // //     printf("%d\n", num);
    
// // // //     return 0;
// // // // }



// // // //문제2
// // // // #include<stdio.h>

// // // // void Swap3(int* ptr1, int* ptr2, int* ptr3){
// // // //     int temp;
// // // //     temp = *ptr1;
// // // //     *ptr1 = *ptr3;
// // // //     *ptr3 = *ptr2;
// // // //     *ptr2 = temp;
// // // // }

// // // // int main(void){
// // // //     int num1 = 10, num2 = 20, num3 = 30;
// // // //     Swap3(&num1, &num2, &num3);
// // // //     printf("%d %d %d\n", num1, num2, num3);
// // // // }





// // // #include<stdio.h>

// // // int main(void){
// // //     //1128
// // //     //Chapter 16 다차원 배열
// // //     //339p 예제 TwoDimArraySize
// // //     // int arr1[3][4];
// // //     // int arr2[7][9];
// // //     // printf("세로3, 가로4: %d\n", sizeof(arr1));
// // //     // printf("세로7, 가로9: %d\n", sizeof(arr2));



// // //     //2차원배열
// // //     //342p 예제 PopuResarch
// // //     // int villa[4][2];
// // //     // int popu, i, j;
// // //     // //가구별 거주 인원 입력받기
// // //     // for(i=0; i<4; i++)
// // //     // {
// // //     //     for(j=0; j<2; j++)
// // //     //     {
// // //     //         printf("%d층 %d호 인구수: ", i+1, j+1);
// // //     //         scanf("%d", &villa[i][j]);
// // //     //     }
// // //     // }
// // //     // //빌라의 층별 인구수 출력하기
// // //     // for(i=0; i<4; i++)
// // //     // {
// // //     //     popu = 0;
// // //     //     popu += villa[i][0];
// // //     //     popu += villa[i][1];
// // //     //     printf("%d층 인구수: %d \n", i+1, popu);
// // //     // }



// // //     //연습문제 16-1
// // //     //문제1
// // //     // int arr[3][9];
// // //     // for(int i= 2; i<5; i++)
// // //     // {
// // //     //     for(int j=1; j<10; j++)
// // //     //     {
// // //     //         printf("%d ", i*j);
// // //     //     }
// // //     //     printf("\n");
// // //     // }



// // //     //문제2
// // //     // int arr1[2][4] = {{1,2,3,4},{5,6,7,8}};     //배열A
// // //     // int arr2[4][2] = arr1;     //배열B



// // //     //문제3
// // //     // int arr1[5][5];
// // //     // int i, j, sum=0;
// // //     // int s, w;

// // //     // //과목 점수 입력받아서 저장
// // //     // for (i = 0; i < 4; i++)
// // //     // {   
// // //     //     printf("국어, 영어, 수학, 국사 성적을 입력하시오: ");
// // //     //     for (j = 0; j < 4; j++)
// // //     //     {
// // //     //         scanf("%d", &arr1[i][j]);
// // //     //     }
// // //     // }

// // //     // //개인별 총점
// // //     // for (i = 0; i < 4; i++)
// // //     // {
// // //     //     for (j = 0; j < 4; j++)
// // //     //     {
// // //     //         sum += arr1[i][j];
// // //     //     }
// // //     //     arr1[i][4] = sum;
// // //     //     s += sum;
// // //     //     sum = 0;
// // //     // }

// // //     // //과목별 총점    
// // //     // for(j = 0; j<5; j++){
// // //     //     for (i = 0; i < 4; i++)
// // //     //         sum += arr1[i][j];
// // //     //     arr1[4][j] = sum;
// // //     //     sum = 0;
// // //     // }

// // //     // //출력
// // //     // for (i = 0; i < 5; i++)
// // //     // {
// // //     //     for (j = 0; j < 5; j++)
// // //     //         printf("%d ", arr1[i][j]);
// // //     //     printf("\n");
// // //     // }
    
    
    
// // //     //3차원배열
// // //     // int mean = 0, i, j;
// // //     // int record[3][3][2]={
// // //     //     {
// // //     //         {70, 80},       //A 학급 학생 1의 성적
// // //     //         {94, 90},       //A 학급 학생 2의 성적
// // //     //         {70, 85},       //A 학급 학생 3의 성적
// // //     //     },
// // //     //     {
// // //     //         {83, 90},       //B 학급 학생 1의 성적
// // //     //         {95, 60},       //B 학급 학생 2의 성적
// // //     //         {90, 82}        //B 학급 학생 3의 성적
// // //     //     },
// // //     //     {
// // //     //         {98, 89},       //C 학급 학생 1의 성적
// // //     //         {99, 94},       //C 학급 학생 2의 성적
// // //     //         {91, 87}        //C 학급 학생 3의 성적
// // //     //     }
// // //     // };

// // //     // for(i=0; i<3; i++)
// // //     //     for (j = 0; j<2; j++)
// // //     //         mean += record[0][i][j];
// // //     // printf("A 학급 전체 평균: %g \n", (double)mean/6);

// // //     // mean = 0;
// // //     // for (i = 0; i < 3; i++)
// // //     //     for (j = 0; j<2; j++)
// // //     //         mean += record[1][i][j];
// // //     // printf("B 학급 전체 평균: %g \n", (double)mean/6);
    
// // //     // mean = 0;
// // //     // for (i = 0; i < 3; i++)
// // //     //     for (j = 0; j<2; j++)
// // //     //         mean += record[2][i][j];
// // //     // printf("C 학급 전체 평균: %g \n", (double)mean/6);   





// // //     //Chatper17 포인터의 포인터
// // //     //이중 포인터
// // //     //359p 예제 DoublePointerAccess
// // //     // double num = 3.14;
// // //     // double *ptr = &num;
// // //     // double **dptr = &ptr;
// // //     // double *ptr2;

// // //     // printf("%9p %9p\n", ptr, *dptr);
// // //     // printf("%9g %9g \n", num, **dptr);
// // //     // ptr2 = *dptr;
// // //     // *ptr2 = 10.99;
// // //     // printf("%9g %9g \n", num, **dptr);



// // //     // int num1;개발계획서 일정표 간단한 요구분석서 구조도제출
// // //     // p = &num1;
// // //     // q = &num2;
// // //     // r = &num1;

// // //     // pp = &p;
// // //     // *pp = q;
// // //     // **pp = 1024;
// // //     // pp = &r;
// // //     // **pp = *p *2;

// // //     // printf("%d %d \n", num1, num2);





// // //     //1129
// // //     //Chapter18 이차원배열 포인터
// // //     //376p 예제
// // //     // int arr1[3][2];
// // //     // int arr2[2][3];

// // //     // printf("arr1: %p \n", arr1);
// // //     // printf("arr+1: %p \n", arr1+1);         //자기가 갖고있는 첫번째 배열값만큼 커짐(2열이니까 2*4(byte)해서 8만큼 증가)
// // //     // printf("arr1+2: %p\n\n", arr1+2);

// // //     // printf("arr2: %p \n", arr2);
// // //     // printf("arr2+1: %p \n", arr2+1);



// // //     //379p 예제 2DArrNameAndArrPtr
// // //     // int arr1[2][2] = {  {1,2},
// // //     //                     {3,4} };
// // //     // int arr2[3][2] = {  {1,2},
// // //     //                     {3,4},
// // //     //                     {5,6}};
// // //     // int arr3[4][2] = {  {1,2},
// // //     //                     {3,4},
// // //     //                     {5,6},
// // //     //                     {7,8}};
// // //     // int (*ptr)[2];
// // //     // int i;

// // //     // ptr = arr1;
// // //     // printf("** Show 2,2 arr1 **\n");
// // //     // for (i = 0; i < 2; i++)
// // //     //     printf("%d %d \n", ptr[i][0], ptr[i][1]);

// // //     // ptr = arr2;
// // //     // printf("** Show 3,2 arr1 **\n");
// // //     // for (i = 0; i < 3; i++)
// // //     //     printf("%d %d \n", ptr[i][0], ptr[i][1]);

// // //     // ptr = arr3;
// // //     // printf("** Show 4,2 arr1 **\n");
// // //     // for (i = 0; i < 4; i++)
// // //     //     printf("%d %d \n", ptr[i][0], ptr[i][1]);


// // //     return 0;
// // // }



// // //2차원 배열을 함수의 인자로 전달하기
// // //383p 예제 2DArrParam
// // #include <stdio.h>
// // void ShowArr2DStyle(int (*arr)[4], int column)
// // {
// //     int i, j;
// //     for (i = 0; i < column; i++)
// //     {
// //         for(j=0; j<4; j++)
// //             printf("%d ", arr[i][j]);
// //         printf("\n");
// //     }
// //     printf("\n");
// // }
// // int Sum2DArr(int arr[][4], int column)
// // {
// //     int i, j, sum = 0;
// //     for (i = 0; i < column; i++)
// //         for (j = 0; j < 4; j++)
// //             sum += arr[i][j];
// //     return sum;
// // }

// // int main(void)
// // {
// //     int arr1[2][4] = {1,2,3,4,5,6,7,8};
// //     int arr2[3][4] = {1,1,1,1,3,3,3,3,5,5,5,5};

// //     ShowArr2DStyle(arr1, sizeof(arr1)/sizeof(arr1[0]));
// //     ShowArr2DStyle(arr2, sizeof(arr2)/sizeof(arr2[0]));
// //     printf("arr1의 합: %d \n", Sum2DArr(arr1, sizeof(arr1)/sizeof(arr1[0])));
// //     printf("arr2의 합: %d \n", Sum2DArr(arr2, sizeof(arr2)/sizeof(arr2[0])));
// //     return 0;
// // }



// #include <stdio.h>
// int main(void)
// {
//     // int a[3][2] = {{1,2}, {3,4}, {5,6}};

//     // printf("a[0]: %p \n", a[0]);
//     // printf("*(a+0): %p \n", *(a+0));

//     // printf("a[1]: %p \n", a[1]);
//     // printf("*(a+1): %p \n", *(a+1));

//     // printf("a[2]: %p \n", a[2]);
//     // printf("*(a+2): %p \n", *(a+2));

//     // printf("%d, %d \n", a[2][1], (*(a+2))[1]);
//     // printf("%d, %d \n", a[2][1], *(a[2]+1));
//     // printf("%d, %d \n", a[2][1], *(*(a+2)+1));




//     int* arr1[5];
//     int arr2[3][5];
//     int *ptr;
//     int (*ptr2)[5];

//     ptr = arr1;
//     ptr2 = arr2;

//     return 0;
// }





//1130
//Chapter19 함수 포인터와 void 포인터
// #include <stdio.h>

// int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
// {
//     return cmp(age1, age2);
// }
// int OlderFirst(int age1, int age2)
// {
//     if(age1>age2)
//         return age1;
//     else if(age1<age2)
//         return age2;
//     else
//         return 0;
// }
// int YoungerFirst(int age1, int age2)
// {
//     if(age1<age2)
//         return age1;
//     else if(age1>age2)
//         return age2;
//     else    return 0;
// }

// int main(void)
// {
//     int age1 = 20;
//     int age2 = 30;
//     int first;

//     printf("입장순서 1 \n");
//     first = WhoIsFirst(age1, age2, OlderFirst);
//     printf("%d세와 %d세 중 %d세가 먼저 입장! \n\n", age1, age2, first);

//     printf("입장순서 2\n");
//     first = WhoIsFirst(age1, age2, YoungerFirst);
//     printf("%d세와 %d세 중 %d세가 먼저 입장! \n\n", age1, age2, first);

//     return 0;
// }



//397p 형(Type)이 존재하지 않는 void 포인터
// #include <stdio.h>

// void SoSimpleFunc(void)
// {
//     printf("I'm so simple");
// }

// int main(void)
// {
//     int num= 20;
//     void* ptr;

//     ptr = &num;
//     printf("%p \n", ptr);

//     ptr = SoSimpleFunc;
//     printf("%p \n", ptr);
//     return 0;
// }