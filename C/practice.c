#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// int main(void){

    //Chapter05
    //문제 5-1
    // int num1, num2, num3, num4;
    // printf("좌 상단의 x,y 좌표: ");
    // scanf("%d %d", &num1,&num2);
    // printf("우 하단의 x,y 좌표: ");
    // scanf("%d %d",&num3, &num4);
    // printf("두 점이 이루는 직사각형의 넓이는 %d입니다.", (num3-num1)*(num4-num2));



    //문제 5-2
    // double n1,n2;
    // printf("두 개의 실수를 입력하시오: ");
    // scanf("%lf %lf", &n1, &n2);
    // printf("덧셈: %f\n", n1+n2);
    // printf("뺄셈: %f\n", n1-n2);
    // printf("곱셈: %f\n", n1*n2);
    // printf("나눗셈: %f\n", n1/n2);



    //문제 5-4
    // int a;                                      //정수 형태
    // printf("아스키코드 값을 입력하시오: ");
    // scanf("%d", &a);                            //정수 형태로 아스키코드값 입력받음
    // printf("%c\n", a);                          //아스키코드 문자로 출력



    //문제 5-5
    // char a;                                     //문자 형태
    // printf("알파벳 문자 하나 입력하시오: ");
    // scanf("%c", &a);                            //문자 형태로 알파벳 문자 하나 입력받음
    // printf("%d\n", a);                          //아스키코드 값으로 출력





    //Chapter06
    //정수 출력을 위한 서식문자들
    //8진수, 16진수 답게 # 붙여서 출력
    // int num = 7, num2 = 13;
    // printf("%o %#o\n", num, num);
    // printf("%x %#x\n", num2, num2);



    //필드폭 지정하여 출력 정돈
    // printf("%-8s %14s %4s \n", "이  름", "전공학과", "학년");
    // printf("%-8s %14s %4d \n", "김동수", "전자공학", 3);
    // printf("%-8s %14s %4d \n", "이을수", "컴퓨터공학", 2);





    //Chapter07 반복문
    //구구단
    // int dan, num = 1;
    // printf("몇 단? ");
    // scanf("%d", &dan);

    // while(num<10)
    // {
    //     printf("%dx%d=%d \n", dan, num, dan*num);
    //     num++;
    // }



    //연습문제 7-1
    //문제1
    // int num, i=0;
    // printf("양의 정수 입력: ");
    // scanf("%d", &num);
    // while(i<num){
    //     printf("Hello world!\n");
    //     i++;
    // }



    //문제2
    // int num, i = 0;
    // printf("정수 입력: ");
    // scanf("%d", &num);
    // while(i++<num){        // <(비교연산) 후, i++값 증가!
    //    printf("%d\n", i*3);
    // }



    //문제3
    // int num=1, sum=0;
    // while(num!=0){
    //     printf("정수 입력: ");
    //     scanf("%d", &num);
    //     sum += num;
    // }
    // printf("%d", sum);



    //문제4
    // int num, i=9;
    // printf("정수 입력: ");
    // scanf("%d", &num);
    // while(i>0){
    //     printf("%dx%d=%d\n", num, i, num*i);
    //     i--;
    // }



    //문제5
    // int num, n1, i=0, sum = 0;
    // printf("몇 개의 정수를 입력할 것인가? ");
    // scanf("%d", &num);
    // printf("정수 %d개를 입력해주세요: ", num);
    // while(i++<num){
    //     scanf("%d", &n1);
    //     sum += n1;
    // }
    // printf("%f", (double)sum/num);



    //중첩 구구단
    // int cur = 2;
    // int is = 0;
    // while(cur<10)       //2단에서 9단까지 반복
    // {
    //     is = 1;         //새로운 단의 시작을 위해 초기값 재지정
    //     while(is<10)    //각 단의 1부터 9까지의 곱
    //     {
    //         printf("%dx%d=%d \n", cur, is, cur*is);
    //         is++;
    //     }
    //     cur++;
    // }



    //7-2
    //문제1
    // int n1, i=0, sum=0;
    // printf("정수 5개를 입력하시오: ");
    // while(i<5){
    //     scanf("%d", &n1);
    //     if (n1>0)
    //     {
    //         sum += n1;
    //         i++;
    //     }        
    // }
    // printf("%d", sum);

    //0이상 알려줌
    // int n1=0, i=0, sum=0;
    // while(i<5){
    //     while(n1<=0)
    //     {
    //         printf("0보다 큰 수를 입력(%d번째): ", i+1);
    //         scanf("%d", &n1);
    //     }
    //     sum+= n1;
    //     n1 = 0;
    //     i++;
    // }
    // printf("%d", sum);



    //문제2
    // int i=0;
    // while(i<5){
    //     int j=0;
    //     while(j<i){
    //         printf("o");
    //         j++;
    //     }
    //     printf("*\n");
    //     i++;
    // }



    //do~while문
    // int total = 0, num = 0;
    // do
    // {
    //     printf("정수 입력(0 to quit): ");
    //     scanf("%d", &num);
    //     total += num;
    // } while (num!=0);
    // printf("합계: %d\n", total);
    


    //7-3
    //문제1
    // int total = 0, num;
    // printf("정수 입력(0 to quit): ");
    // scanf("%d", &num);
    // total += num;
    // while(num!=0)
    // {
    //     printf("정수 입력(0 to quit): ");
    //     scanf("%d", &num);
    //     total += num;
    // }
    // printf("합계: %d\n", total);



    //문제2
    // int num=0, total=0;
    // do
    // {
    //     printf("%d\n", num);
    //     total += num;
    //     num += 2;
    // } while (num<=100);
    // printf("합계: %d\n", total);
    


    //문제3
    // int cur = 2, is;
    // do
    // {
    //     is = 1;
    //     do
    //     {
    //         printf("%dx%d=%d\n", cur, is, cur*is);
    //         is++;
    //     } while (is<10);
    //     cur++;
    //     printf("\n");
    // } while (cur<10);



    //for문
    // int total = 0;
    // int i, num;
    // printf("0부터 num까지의 덧셈, num은?");
    // scanf("%d", &num);
    // for(i=0; i<=num; i++)
    //     total += i;
    // printf("0부터 %d까지 덧셈결과: %d \n", num, total);



    //연습문제 7-4
    //문제1
    // int num1, num2, total=0;
    // printf("두 개의 정수를 입력: ");
    // scanf("%d %d", &num1, &num2);
    // for(int i = num1; i<=num2; i++){
    //     total += i;
    // }
    // printf("%d", total);

    //for문 ver2
    // int num1, num2, total;
    // printf("두 개의 정수를 입력: ");
    // scanf("%d %d", &num1, &num2);
    // for(total = 0; num1<=num2; num1++){
    //     total += num1;
    // }
    // printf("%d", total);


    //문제2
    // int n, total=1;
    // printf("정수 입력: ");
    // scanf("%d", &n);
    // for(int i = 1; i<=n; i++)
    // {
    //     total *= i;
    // }
    // printf("%d! = %d", n, total);



    //Chapter11 1차원배열
    //문제 11-1
    //문제1
    // int arr1[5];
    // int max, min, total;
    // printf("정수 5개를 입력하시오: ");

    // //배열에 입력받기
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &arr1[i]);
    // }

    // max = min = total = arr1[0];

    // for (int i = 1; i < 5; i++)
    // {
    //     max = max>arr1[i] ? max:arr1[i];
    //     min = min<arr1[i] ? min:arr1[i];
    //     total += arr1[i];
    // }
    // printf("%d %d %d \n", max, min, total);
    

    
    //문제2
    // char arr1[] = "Good time";
    // printf("%d", sizeof(arr1));
    // for (int i = 0; i < sizeof(arr1); i++)
    // {
    //     printf("%c", arr1[i]);
    // }
    


    //scanf 함수를 이용한 문자열의 입력
    //262p ReadString
    // char str[50];
    // int idx = 0;
    // printf("문자열 입력: ");
    // scanf("%s", str);           //문자열을 입력받아서 배열 str에 저장!
    // printf("입력 받은 문자열: %s \n", str);
    // printf("문자 단위 출력: ");
    // while (str[idx] != '\0')
    // {
    //     printf("%c", str[idx]);
    //     idx++;
    // }
    // printf("\n");



    //11-2
    //문제1
    // char arr1[50];
    // int i=0, count=0;
    // printf("영단어를 입력하시오: ");
    // scanf("%s", arr1);
    // while(arr1[i] != '\0')
    // {
    //     count += 1;
    //     i++;
    // }
    // printf("%d", count);



    //문제2
    // char arr1[50];
    // int i=0, count=0;

    // printf("영단어를 입력하시오: ");
    // scanf("%s", arr1);

    // //문자열 길이 세기
    // while(arr1[i] != '\0')
    // {
    //     count += 1;
    //     i++;
    // }

    // //문자열 가운데 잡고 양쪽 문자 스위치
    // for (i = 0; i < count/2; i++)
    // {
    //     int temp = arr1[i];
    //     arr1[i] = arr1[(count-1)-i];
    //     arr1[(count-1)-i] = temp;
    // }
    // printf("%s", arr1);



    //문제3
    // char arr[50];
    // int count=0, max=0;

    // printf("영단어를 입력하시오: ");
    // scanf("%s", arr);

    // while(arr[count] != '\0')
    //     count++;

    // for(int i = 0; i < count; i++)
    // {
    //     max = max > arr[i] ? max:arr[i];
    // }
    // printf("%c", max);





    //Chapter13 포인터 배열
    // int arr1[3] = {14,2,3};
    // double arr2[3] = {1.1, 2.2, 3.3};
    // int *ptr = arr1;

    // // printf("%d %g\n", *arr1, *arr2);
    // // printf("%d %g\n", *arr1+1, *arr2+1);
    // // printf("%d %g\n", *(arr1+1), *(arr2+1));
    
    // // *(++ptr);
    // printf("%d", *(ptr+2));
    // printf("%d", *ptr);
    // printf("%d", *(++ptr));
    // printf("%d", *ptr);



    //13-1
    //문제1
    // int arr[5] = {1,2,3,4,5};
    // int* ptr = arr;             //int* ptr = &arr[0]과 같은문장
    // for (int i = 0; i <5; i++)
    //     *(ptr++) += 2;
    // for (int i = 0; i < 5; i++)
    //     printf("%d", arr[i]);
    


    //문제2
    // int arr[5] = {1,2,3,4,5};
    // int* ptr = arr;
    // for (int i = 0; i < 5; i++)
    // {
    //     *(ptr+i) += 1;
    // }



    //문제3
    // int arr[5] = {1,2,3,4,5};
    // int* ptr = &arr[4];
    // int sum=0;
    // for (int i = 0; i < 5; i++)
    // {
    //     sum += *(ptr--);
    // }
    // printf("%d", sum);



    //문제4
    // int arr[6] = {1,2,3,4,5,6};
    // int* ptr1 = arr;
    // int* ptr2 = &arr[5];
    // for (int i = 0; i < 3; i++)
    // {
    //     int temp = *(ptr1+i);
    //     *(ptr1+i) = *(ptr2-i);
    //     *(ptr2-i) = temp;
    // }
    // for (int i = 0; i < 6; i++)
    //     printf("%d ", arr[i]);


    // char num;
    // printf("안녕?");
    // scanf("%c", &num);
    // if (num==32)
    // {
    //     printf("><?");
    // }
    
    


    //Chapter13 포인터 배열
    // int arr1[3] = {1,2,3};
    // double arr2[3] = {1.1, 2.2, 3.3};

    // printf("%d %g \n", *arr1, *arr2);
    // *arr1 += 100;       // arr1[3] = {101,2,3};
    // *arr2 += 120.5;     // arr2[3] = {121.6, 2.2, 3.3};
    // printf("%d %f \n",arr1[0], arr2[0]);



    // int arr1[3] = {1,2,3};
    // int* ptr = arr1;

    // *(ptr) = 20;
    // printf("%d\n",  *ptr);
    // *(ptr+1) = 20;
    // printf("%d\n",  *ptr);



    //문제 13-1
    //문제3
    // int arr[6] = {1,2,3,4,5,6};
    // int *ptr1 = arr;
    // int *ptr2 = &arr[5];

    // for(int i = 0; i < 3; i++)
    // {
    //     int temp = *(ptr1+i);
    //     *(ptr1+i) = *(ptr2-i);
    //     *(ptr2-i) = temp;
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%d", arr[i]);
    // }



    //303 예제
    // char str1[] = "My String";
    // char* str2 = "Your String";
    // printf("%s %s \n", str1, str1);




    //12월5일
    //420p
    // int ch1, ch2;

    // ch1 = getchar();        //문자입력
    // ch2 = fgetc(stdin);     //엔터 키 입력

    // putchar(ch1);           //문자 출력
    // fputc(ch2, stdout);     //엔터 키 출력
    // return 0;



    //421p
    // int ch;
    // while(1){
    //     ch = getchar();
    //     if(ch == EOF)       //window에서는 ctrl+z, linux에서는 ctrl+d 입력되면 커맨트창 종료
    //         break;
    //     putchar(ch);
    // }



    //426p
    // char str[7];
    // int i;
    // for(i = 0; i<3; i++){
    //     fgets(str, sizeof(str), stdin);
    //     printf("Read %d: %s \n", i+1, str);
    // }


//     return 0;
// }




//432p
// void ClearLineFromReadBuffer(void){
//     while(getchar()!='\n');
// }

// int main(void){
//     char perID[7];
//     char name[10];

//     fputs("주민번호 앞 6자리 입력: ", stdout);
//     fgets(perID, sizeof(perID), stdin);
//     ClearLineFromReadBuffer();

//     fputs("이름 입력: ", stdout);
//     fgets(name, sizeof(name),stdin);

//     printf("주민번호: %s\n", perID);
//     printf("이름: %s\n", name);
//     return 0;
// }



//435p
// void RemoveBSN(char str[]){
//     int len = strlen(str);
//     str[len-1] = 0;
// }

// int main(void){
//     char str[100];
//     printf("문자열 입력: ");
//     fgets(str, sizeof(str), stdin);
//     printf("길이: %d, 내용: %s \n", strlen(str), str);

//     RemoveBSN(str);
//     printf("길이: %d, 내용: %s \n", strlen(str), str);

//     return 0;
// }



//Chapter22 구조체
//454p
// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void){
//     struct point pos1, pos2;
//     double distance;

//     fputs("point1 pos: ", stdout);
//     scanf("%d %d", &pos1.xpos, &pos1.ypos);

//     fputs("point2 pos: ", stdout);
//     scanf("%d %d", &pos2.xpos, &pos2.ypos);

//     /* 두 점간의 거리 계산 공식 */
//     distance = sqrt((double)((pos1.xpos-pos2.xpos) * (pos1.xpos-pos2.xpos)+(pos1.ypos - pos2.ypos)*(pos1.ypos - pos2.ypos)));

//     printf("두 점의 거리는 %g 입니다. \n", distance);
//     return 0;
// }



//456p
// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void){
//     struct person man1, man2;
//     strcpy(man1.name, "안성준");
//     strcpy(man1.phoneNum, "010-1122-3344");
//     man1.age = 23;

//     printf("이름 입력: "); scanf("%s", man2.name);
//     printf("번호 입력: "); scanf("%s", man2.phoneNum);
//     printf("나이 입력: "); scanf("%d", &man2.age);
    
//     printf("이름 입력: %s \n", man1.name); 
//     printf("번호 입력: %s \n", man1.phoneNum);
//     printf("나이 입력: %d \n", man1.age); 
    
//     printf("이름 입력: %s \n", man2.name); 
//     printf("번호 입력: %s \n", man2.phoneNum);
//     printf("나이 입력: %d \n", man2.age); 
//     return 0;
// }



//458p
// struct point{
//     int xpos;
//     int ypos;
// };

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void){
//     struct point pos = {10, 20};
//     struct person man = {"이승기", "010-1212-0001", 21};
//     printf("%d %d \n", pos.xpos, pos.ypos);
//     printf("%s %s %d \n", man.name, man.phoneNum, man.age);
//     return 0;
// }



//462p
// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct person arr[3] = {
//         {"이승기", "010-1212-0001", 21},
//         {"정지영", "010-1313-0002", 22},
//         {"한지수", "010-1717-0003", 19}
//     };

//     int i;
//     for(i=0; i<3; i++)
//         printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);

//     return 0;
// }



//464p
// struct point
// {
//     int xpos;
//     int ypos;
// };

// int main(void)
// {
//     struct point pos1 = {1,2};
//     struct point pos2 = {100, 200};
//     struct point * pptr = &pos1;

//     (*pptr).xpos += 4;
//     (*pptr).ypos += 5;
//     printf("[%d %d] \n", pptr ->xpos, pptr->ypos);

//     pptr = &pos2;
//     pptr -> xpos += 1;
//     pptr -> ypos += 2;
//     printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
//     return 0;
// }



//465p
// struct point
// {
//     int xpos;
//     int ypos;
// };

// struct circle
// {
//     double radius;
//     struct point* center;
// };

// int main(void)
// {
//     struct point cen = {2,7};
//     double rad = 5.5;

//     struct circle ring = {rad, &cen};
//     printf("원의 반지름: %g \n", ring. radius);
//     printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
//     return 0;
// }



int main(void){
    system("clear");

    int quizCount = 1;
    int answer;
    int right=0, wrong=0;

    int notDupArr[3]={0,};
    int isDup;
    int randQuiz;
    srand(time(NULL));

    //O가 정답
    char* a[5] = {
        "북두칠성은 시계의 반대 방향으로 회전한다.\n1. O\n2. X\n답: ",
        "낙지는 심장이 3개이다.\n1. O\n2. X\n답: ",
        "개발에도 땀이 난다.\n1. O\n2. X\n답: ",
        "남자와 여자의 목소리 중 멀리 들리는 것은 여자 목소리이다.\n1. O\n2. X\n답: ",
        "빵은 순수한 우리말이다.\n1. O\n2. X\n답: "
    };

    //X가 정답
    char* b[5] = {
        "용은 십장생의 하나다.\n1. O\n2. X\n답: ",
        "남극에도 우편번호가 있다.\n1. O\n2. X\n답: ",
        "비행기의 블랙박스는 검은색이다.\n1. O\n2. X\n답: ",
        "로마의 수도는 로마이다.\n1. O\n2. X\n답: ",
        "셰익스피어의 희곡 햄릿의 주인공인 햄릿은 네덜란드 왕자이다.\n1. O\n2. X\n답: "
    };

    //중복제거
    while(isDup<3){
        isDup=0;
        for(int i=0;i<3;i++){
            randQuiz=rand()%5;
            notDupArr[i]=randQuiz;
        }
        for(int i=0;i<2;i++){
            for(int j=i+1;j<3;j++){
                if(j!=i&&notDupArr[i]!=notDupArr[j]){
                    isDup++;
                }
            }
        }
    }

    printf("지금부터 퀴즈 3문제를 낼 건데,\n퀴즈를 맞춘다면 선물을 줄 거임.\n");
    printf("\n만약 세 문제 모두 맞춘다면 큰 선물을 주겠음.\n대신 모두 틀린다면 큰 패널티를 부여할 거임 ㅋㅅㅋ\n");
    printf("\n자, 준비가 됐다면 엔터를 누르도록.\n");

    while(getchar()!='\n');
    system("clear");
    
    while (quizCount<=3)
    {
        int quizRight = rand()%2+1;     //1이 나왔을 땐 정답이 O, 2가 나왔을 땐 정답이 X

        printf("자! %d번째 문제다.\n", quizCount);

        //문제 제출
        if (quizRight == 1)
            printf("%s\n", a[notDupArr[quizCount-1]]);
        else if (quizRight == 2)
            printf("%s\n", b[notDupArr[quizCount-1]]);            

        scanf(" %d", &answer);

        // 정답 맞춤
        if (quizRight == answer){
            printf("정답이다. 꽤 하는데?\n\n");
            quizCount++;
            right++;
        }
        else{
            if (answer != 1 && answer != 2)
            {
                printf("예끼 요녀석아! 분명 1번 아니면 2번을 선택하라고 했잖아!\n");
                if (quizCount < 3)      // 2번문제까지는 경고해줌
                {
                    printf("남은 기회는 %d번이니 정신차려!\n", 3-quizCount);
                    sleep(1);
                }              
            }
            else{
                printf("몰상식한 녀석. 틀렸다!\n\n");
            }
            quizCount++;
            wrong++;
        }
    }
    if (wrong == 3)
    {
        system("clear");
        printf("떼잉... 형편없네, 아주 형편없어.\n");
        sleep(1);
        printf("\nHP가 50%% 감소했습니다.\n");
        sleep(2);
    }
    else if(right == 3)
    {
        system("clear");
        printf("너의 상식에 감탄했다. 약속한대로 큰 보상을 주도록 하마.\n\n간식을 받았습니다. 개발몬의 LV이 1만큼 추가 상승! 개발몬의 HP가 모두 회복됩니다.\n");
        
        sleep(2);
    }
    system("clear");
    return 0;
}