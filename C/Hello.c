#include <stdio.h>

// int main(void)
// {
    //11월 21일
    // printf("Hello World\n");
    // printf("%d \n", 1234);
    // printf("%d %d\n", 10, 20);


    // int num1, num2;
    // int num3 = 30, num4 = 40;
    // printf("num1: %d, num2: %d, \n", num1, num2);
    // num1 = 10;
    // num2 = 20;
    // printf("num1: %d, num2: %d, \n", num1, num2);
    // printf("num3: %d, num4: %d, \n", num3, num4);


    // int num1 = 12;
    // int num2 = 12;
    // printf("num1: %d \n", num1);
    // printf("num1++: %d \n", num1++);
    // printf("num1: %d\n\n", num1);

    // printf("num2: %d \n", num2);
    // printf("++num2: %d \n", ++num2);
    // printf("num2: %d\n\n", num2);


    // int num1 = 0;
    // int num2 = 10;
    // int result1 = num1++ + num2;
    // int result2 = ++num1 + num2++;
    // int result3 = num1-- + num1-- - --num2;
    // int result4 = num2++ * num1++ - --num2 + num1;
    // printf("%d %d %d %d\n", result1, result2, result3, result4);
    // printf("%d, %d\n",num1, num2);



    // int result;
    // int num1, num2;

    // printf("정수 one: ");
    // scanf("%d", &num1);
    // printf("정수 two: ");
    // scanf("%d", &num2);

    // result = num1 + num2;
    // printf("%d + %d = %d \n", ++num1, num2, result);


    // int result;
    // int num1, num2, num3;
    // printf("세 개의 정수 입력: ");
    // scanf("%d %d %d", &num1, &num2, &num3);

    // result = num1+num2+num3;
    // printf("%d+%d+%d = %d\n", num1, num2, num3, result);


    // 연습문제1
    // int num1, num2, del, mul;
    // printf("두 개의 정수를 입력하시오: ");
    // scanf("%d %d", &num1, &num2);

    // del = num1 - num2;
    // mul = num1 * num2;

    // printf("두 수의 뺄셈: %d\n두 수의 곱셈: %d", del, mul);


    // 연습문제2
    // int num1, num2, num3, result;
    // printf("세 개의 정수를 입력하시오: ");
    // scanf("%d %d %d", &num1, &num2, &num3);

    // result = num1* num2 + num3;
    // printf("%d x %d + %d = %d", num1, num2, num3, result);


    //연습문제3
    // int num1;
    // printf("정수를 입력하시오: ");
    // scanf("%d", &num1);
    // printf("%d의 제곱: %d\n", num1, num1*num1);


    //연습문제4
    // int num1, num2;
    // printf("두 정수를 입력하시오: ");
    // scanf("%d %d", &num1, &num2);
    // printf("몫: %d, 나머지: %d\n", num1/num2, num1%num2);


    //연습문제5
    // int num1, num2, num3, result1, result2, result3;
    // printf("세 개의 정수를 입력하시오: ");
    // scanf("%d %d %d", &num1, &num2, &num3);
    
    // result1 = num1-num2;
    // result2 = num2+num3;
    // result3 = num3%num1;

    // printf("%d", result1*result2*result3);


    // int num1 = 2;
    // int num2 = 3;
    // int result1 = num1&num2;
    // int result2 = num1|num2;
    // int result3 = num1^num2;
    // printf("%d %d %d", result1, result2, result3);


    // int num1 = 1;
    // int result1 = num1 <<1;
    // int result2 =result1<<2;
    // int result3 =result2>>3;

    // printf("%d %d %d", result1, result2, result3);


    //연습문제1(100p)
    // int num1, result;
    // printf("정수를 입력하시오: ");
    // scanf("%d", &num1);
    // printf("%d", ~num1+1);

    
    //연습문제2
    // int num2, num3, num1 = 3;
    // num2 = num1 << 3;
    // num3 = num2 >> 2;

    // printf("%d", num3);


    // char ch = 9;
    // int inum = 1052;
    // double dnum = 2.1415;
    // printf("변수 ch의 크기: %d\n", sizeof(ch));
    // printf("변수 inum의 크기: %d\n", sizeof(inum));
    // printf("변수 dnum의 크기: %d\n", sizeof(dnum));

    // printf("변수 char의 크기: %d\n", sizeof(char));
    // printf("변수 int의 크기: %d\n", sizeof(int));
    // printf("변수 long의 크기: %d\n", sizeof(long));
    // printf("변수 long long의 크기: %d\n", sizeof(long long));
    // printf("변수 float의 크기: %d\n", sizeof(float));
    // printf("변수 double의 크기: %d\n", sizeof(double));

    
    // double rad;
    // double area;
    // printf("원의 반지름 입력: ");
    // scanf("%lf", &rad);

    // area = rad*rad*3.1415;
    // printf("원의 넓이: %0.3f \n", area);



    // char ch1 = 'A', ch2 = 65;
    // char ch3 = 'z', ch4 = 90;

    // printf("%c %d \n", ch1, ch1);
    // printf("%c %d \n", ch2, ch2);
    // printf("%c %d \n", ch3, ch3);
    // printf("%c %d \n", ch4, ch4);



    //연습문제1(118p)
    // int num1, num2, num3, num4, result1;
    // printf("좌 상단의 x,y 좌표: ");
    // scanf("%d %d", &num1, &num2);
    // printf("우 상단의 x,y 좌표: ");
    // scanf("%d %d", &num3, &num4);

    // result1 = (num3 - num1)*(num4-num2);

    // printf("두 점이 이루는 직사각형의 넓의는 %d입니다.", result1);



    //연습문제2
    // double num1, num2;
    // double result1, result2, result3, result4;
    // printf("두개의 실수를 입력하시오: ");
    // scanf("%lf %lf", &num1, &num2);

    // result1 = num1+num2;
    // result2 = num1-num2;
    // result3 = num1*num2;
    // result4 = num1/num2;

    // printf("덧셈: %f", result1);
    // printf("뺄셈: %f", result2);
    // printf("곱셈: %f", result3);
    // printf("나눗셈: %f", result4);



    //연습문제4
    // int num1;
    // printf("정수 입력하시오: ");
    // scanf("%d", &num1);
    // printf("아스키코드: %c", num1);



    //연습문제5
    // char ch1, ch2;
    // printf("문자를 입력하시오: ");
    // scanf("%c%c", &ch1, &ch2);
    // printf("아스키코드 값: %d\n", ch2);


    // int num1, num2, num3;
    // printf("세 개의 정수 입력: ");
    // scanf("%d %o %x", &num1, &num2, &num3);

    // printf("입력된 정수 10진수 출력");
    // printf("%d %d %d \n", num1, num2, num3);


    // float num1;
    // double num2;
    // long double num3;
    // printf("실수 입력1(e 표기법으로): ");
    // scanf("%f", &num1);
    // printf("입력된 실수 %f \n", num1);

    // printf("실수 입력2(e 표기법으로): ");
    // scanf("%lf", &num2);
    // printf("입력된 실수 %f \n", num2);

    // printf("실수 입력3(e 표기법으로): ");
    // scanf("%Lf", &num3);
    // printf("입력된 실수 %Lf \n", num3);


    // int dan=0, num=1;
    // printf("몇 단? ");
    // scanf("%d", &dan);

    // while(num<10){
    //     printf("%d x %d = %d \n", dan, num, dan*num);
    //     num++;
    // }


    
    //연습문제1(155p)
    // int n, num1;
    // printf("정수를 입력하시오: ");
    // scanf("%d", &num1);

    // while(n < num1){
    //     printf("Hello World!\n");
    //     n++;
    // }


    //연습문제2
    // int n=0, num, s = 3;
    // printf("양의 정수를 입력하시오: ");
    // scanf("%d", &num);

    // while(n < num){    
    //     printf("%d\n", s);
    //     s += 3;
    //     n++;
    // }


    //연습문제3
    // int num, sum;

    // while(num != 0){
    //     scanf("%d", &num);
    //     sum += num;
    // }
    // printf("%d", sum);


    //연습문제4
    // int num, n=9;
    // scanf("%d", &num);
    // while(n>0){
    //     printf("%d x %d = %d\n", num, n, num*n);
    //     n--;
    // }


    //연습문제5
    // int num, n=0, num2, sum;
    // printf("몇 개의 정수를 입력? ");
    // scanf("%d", &num);
    // while(n < num){
    //     printf("정수를 입력하시오: ");
    //     scanf("%d", &num2);
    //     sum += num2;
    //     n++;
    // }
    // printf("입력한 정수의 평균: %0.1f", (double)(sum/num));


    // int cur = 2;
    // int is = 0;
    // while(cur<10){
    //     is = 1;
    //     while(is<10){
    //         printf("%dx%d=%d \n", cur, is, cur*is);
    //         is++;
    //     }
    //     cur++;
    // }



    //연습문제1(157p)
    // int n1=0,n2=0,n3=0,n4=0,n5=0,sum=0;
    // while(n1<1 || n2<1 || n3<1 || n4<1 || n5<1)
    // {
    //     printf("정수 5개를 입력하시오: ");
    //     scanf("%d %d %d %d %d", &n1,&n2,&n3,&n4,&n5);
    // }
    // sum = n1+n2+n3+n4+n5;
    // printf("%d", sum);



    // int total = 0, num = 0;
    // do
    // {
    //     printf("정수 입력(0 to quit): ");
    //     scanf("%d", &num);
    //     total += num;
    // } while (num!=0);
    // printf("합계: %d \n", total);

    
    // int total = 0;
    // int i, num;
    // printf("0부터 num까지의 덧셈, num은? ");
    // scanf("%d", &num);

    // for(i = 0; i<num+1; i++){
    //     total +=i
    //     ;
    // }
    // printf("0부터 %d까지 덧셈결과: %d\n", num, total);


    // double total = 0.0;
    // double input = 0.0;
    // int num = 0;

    // for(; input >=0.0 ;)
    // {
    //     total += input;
    //     printf("실수 입력(minus to quit): ");
    //     scanf("%lf", &input);
    //     num++;
    // }
    // printf("평균: %f \n", total/(num-1));


    // int cur, is;
    // for(cur=2;cur<10;cur++){
    //     for(is = 1; is<10; is++)
    //         printf("%dx%d=%d \n",cur, is, cur*is);
    //     printf("\n");
    // }


    // int num1, num2, sum;
    // printf("두 정수를 입력하세요: ");
    // scanf("%d %d", &num1, &num2);
    // for(sum = 0; num1<=num2; num1++){
    //     sum += num1;
    // }
    // printf("%d", sum);








    //11월 22일
    // int num;
    // printf("정수 입력: ");
    // scanf("%d", &num);
    // if(num<0)
    //     printf("입력 값은 0보다 작다.\n");
    // if(num>0)
    //     printf("입력 값은 0보다 크다.\n");
    // if(num==0)
    //     printf("입력 값은 0이다.\n");


    // int opt;
    // double num1, num2;
    // double result;
    // printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
    // printf("선택?: ");
    // scanf("%d", &opt);
    // printf("두 개의 실수 입력: ");
    // scanf("%lf %lf", &num1, &num2);
    //
    // if(opt==1)
    //     result = num1+num2;
    // else if(opt==2)
    //     result = num1-num2;
    // else if(opt==3)
    //     result = num1*num2;
    // else
    //     result = num1/num2;
    //
    // printf("결과: %f \n", result);


    // int num;
    // for(num=1; num<100; num++) {
    //     if(num%3==0||num%4==0)
    //         printf("3 또는 4의 배수: %d \n", num);
    // }


    // int num, abs;
    // printf("정수 입력: ");
    // scanf("%d", &num);
    //
    // abs = num>0 ? num:num*(-1);
    // printf("절댓값: %d\n", abs);



    //8-1 (189p)
    //연습문제1
    // int num;
    // for(num = 0; num<100; num++)
    //     if(num%7==0 || num%9==0)
    //         printf("%d ", num);



    //연습문제2
    // int num1, num2, result;
    // printf("두 개의 정수를 입력하시오: ");
    // scanf("%d %d", &num1, &num2);
    //
    // result = num1>num2 ? num1-num2 : num2-num1;
    // printf("두 수의 차: %d\n", result);



    //연습문제3
    // int k, m, e, result;
    // printf("국어 성적을 입력하시오: ");
    // scanf("%d", &k);
    // printf("수학 성적을 입력하시오: ");
    // scanf("%d", &m);
    // printf("영어 성적을 입력하시오: ");
    // scanf("%d", &e);
    // result = (k+m+e)/3;
    // if(result >= 90)
    //     printf("성적 A\n");
    // else if (result >= 80)
    //     printf("성적 B\n");
    // else if (result >= 70)
    //     printf("성적 C\n");
    // else if (result >= 50)
    //     printf("성적 D\n");
    // else
    //     printf("F\n");    





    // int sum=0, num=0;
    // while(1){
    //     sum+=num;
    //     if(sum>5000)
    //         break;
    //     num++;
    // }
    // printf("sum: %d \n", sum);
    // printf("num: %d \n", num);


    // int num;
    // printf("start! ");
    // for(num=1; num<20; num++){
    //     if(num%2==0 || num%3==0)
    //         continue;
    //     printf("%d ", num);
    // }
    // printf("end! \n");


    // int num;
    // printf("1이상 5이하의 정수 입력: ");
    // scanf("%d", &num);

    // switch(num){
    // case 1:
    //     printf("1은 ONE \n");
    //     break;
    // case 2:
    //     printf("2은 TWO \n");
    //     break;
    // case 3:
    //     printf("3은 THREE \n");
    //     break;
    // case 4:
    //     printf("4은 FOUR \n");
    //     break;
    // case 5:
    //     printf("5은 FIVE \n");
    //     break;
    // default:
    //     printf("I don't know! \n");
    // }


    // char sel;
    // printf("M 오전, A 오후, E 저녁\n");
    // printf("입력: ");
    // scanf("%\c", &sel);
    // switch (sel)
    // {
    // case 'M':
    // case 'm':
    //     printf("Morning \n");
    //     break;
    // case 'A':
    // case 'a':
    //     printf("Afternoon \n");
    //     break;
    // case 'E':
    // case 'e':
    //     printf("Evening \n");
    //     break;
    // }



    //8-2 (193p)
    //연습문제1(193p)
    // int num, num2;
    // for(num = 2; num<10; num++){
    //     if(num%2!=0)
    //         continue;
    //     for(num2 = 1; num2<=num; num2++)
    //         printf("%dx%d = %d\n", num, num2, num*num2);
    // }



    //연습문제2
    // int a, z;
    // for(a = 0; a<10; a++){
    //     for(z=0; z<10; z++){
    //         if(a==z)
    //             continue;
    //         else if(a+z == 9){
    //             printf("a:%d z:%d\n", a, z);
    //             break;
    //         }
    //     }
    // }



    // //8-3 (200p)
    // //연습문제
    // int n;
    // printf("숫자를 입력하시오: ");
    // scanf("%d", &n);
    // switch(n/10)
    // {
    // case 0 :
    //     printf("0이상 10 미만");
    //     break;
    // case 1 :
    //     printf("10이상 20미만");
    //     break;
    // case 2:
    //     printf("20이상 30미만");
    //     break;
    // default: 
    //     printf("30 이상");
    //     break;
    // }



    // int num1, num2;
    // num1 = printf("12345\n");
    // num2 = printf("I love my home\n");
    // printf("%d %d \n", num1, num2);

//     return 0;
// }



// int Add(int num1, int num2){
//     return num1+num2;
// }
// int main(void){
//     int result;
//     result = Add(3, 4);
//     printf("덧셈결과1: %d \n", result);
//     result = Add(5,8);
//     printf("덧셈결과2: %d\n", result);
//     return 0;
// }



// int Add(int num1, int num2){        //인자전달o, 반환값o
//     return num1+num2;
// }

// void ShowAddResult(int num){        //인자전달o, 반환값x
//     printf("덧셈결과 출력: %d \n", num);
// }

// int ReadNum(void){      //인자전달x, 반환값o
//     int num;
//     scanf("%d", &num);
//     return num;
// }

// void HowToUseThisProg(void){
//     printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
//     printf("자! 그럼 두 개의 정수를 입력하세요: \n");
// }

// int main(void){
//     int result, num1, num2;
//     HowToUseThisProg();
//     num1 = ReadNum();
//     num2 = ReadNum();
//     result = Add(num1,num2);
//     ShowAddResult(result);
//     return 0;
// }


// int AbsoCOmpare(int num1, int num2);
// int GetAbsoValue(int num);

// int main(void){
//     int num1, num2;
//     printf("두 개의 정수 입력: ");
//     scanf("%d %d", &num1, &num2);
//     printf("%d와 %d중 절댓값이 큰 정수: %d\n", num1, num2, AbsoCOmpare(num1,num2));
//     return 0;
// }

// int AbsoCOmpare(int num1, int num2){
//     if(GetAbsoValue(num1)> GetAbsoValue(num2))
//         return num1;
//     else
//         return num2;
// }

// int GetAbsoValue(int num){
//     if(num<0)
//         return num*(-1);
//     else
//         return num;
// }



#include <stdio.h>
#include <stdlib.h>
// #include <wchar.h>
int isCrash(char (*arr)[25], int *pos_X, int *pos_Y,int move){
    if(move==1&&arr[(*pos_Y)-1][(*pos_X)]!=' '){
        return 1;
    }
    if(move==2&&arr[(*pos_Y)+1][(*pos_X)]!=' '){
        return 1;
    }
    if(move==3&&arr[(*pos_Y)][(*pos_X)-1]!=' '){
        return 1;
    }
    if(move==4&&arr[(*pos_Y)][(*pos_X)+1]!=' '){
        return 1;
    }
    else
        return 0;
}
char* move(char (*arr)[25],char moveChar, int * pos_X, int * pos_Y){
    if(moveChar=='w'||moveChar=='W'){
        if(isCrash(arr,pos_X,pos_Y,1)==0){
            arr[(*pos_Y)][(*pos_X)]=' ';
            (*pos_Y)--;
            arr[(*pos_Y)][(*pos_X)]='p';
        }
    }
    if(moveChar=='s'||moveChar=='S'){
        if(isCrash(arr,pos_X,pos_Y,2)==0){
        arr[(*pos_Y)][(*pos_X)]=' ';
        (*pos_Y)++;
        arr[(*pos_Y)][(*pos_X)]='p';
        }
    }
    if(moveChar=='a'||moveChar=='A'){
        if(isCrash(arr,pos_X,pos_Y,3)==0){        
        arr[(*pos_Y)][(*pos_X)]=' ';
        (*pos_X)--;
        arr[(*pos_Y)][(*pos_X)]='p';
        }
    }
    if(moveChar=='d'||moveChar=='D'){
        if(isCrash(arr,pos_X,pos_Y,4)==0){        
        arr[(*pos_Y)][(*pos_X)]=' ';
        (*pos_X)++;
        arr[(*pos_Y)][(*pos_X)]='p';
        }
    }
    return (*arr);
}


char* initMap(char (*arr)[25]){
    for(int i=0;i<25;i++){//벽 표시
        for(int j=0;j<25;j++){
            arr[i][j]='w';
        }
    }
    for(int i=1;i<24;i++){// 내부 공간
        for(int j=1;j<24;j++){
            arr[i][j]=' ';
        }
    }
    for(int i=0;i<25;i++){//벽,통로 공사
        //교실 입구 열기
        if(i>=11&&i<=13){
            continue;
        }
        //사이드 교실 격벽 설치 공사
        arr[i][6]='w';
        arr[i][18]='w';
        //교수실,급식실,교실2통로 설치 공사
        if(i==4||i==20){
            continue;
        }
        //교수실,급식실,교실2측면 격벽공사
        arr[i][9]='w';
        arr[i][15]='w';
        
        //교수실,급식실 문틀 공사
        if(i==3||i==21){
            arr[3][10]='w';
            arr[3][14]='w';
            arr[21][10]='w';
            arr[21][14]='w';
        }
        //교실 상하측 격벽공사
        if(i==5||i==19){
            for(int j=10;j<15;j++){
                arr[i][j]='w';
            }
        }
    }
    //교수,영양사 위치 표시
    arr[1][12] = 'b';
    arr[23][12] = 'h';
    arr[21][12] = 'p';
    return (*arr);
}

void printMap(char (*arr)[25]){
    for(int i=0;i<25;i++){
        for(int j=0;j<25;j++){
            if(arr[i][j]=='w'){
                printf("🟩 ");
            }
            else if(arr[i][j]=='b'){
                printf("👿 ");
            }
            else if(arr[i][j]=='h'){
                printf("🏥 ");
            }
            else if(arr[i][j]=='p'){
                printf("🤓 ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }    
}

int main(void){
    int pos_X=12,pos_Y=21;//현재 좌표를 나타내는 pos_X와 pos_Y(배열로는 [21][12] 시작)
    char moveChar;//w a s d로 입력을 받게 되므로 선언
    int GameOver=0;
    char mapArr[25][25];
    initMap(mapArr);
    printMap(mapArr);
    while(GameOver==0){
        scanf("%c",&moveChar);
        move(mapArr,moveChar,&pos_X,&pos_Y);
        system("clear");

        printMap(mapArr);

    }
    return 0;
}
