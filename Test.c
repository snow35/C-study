#include <stdio.h>
#include <string.h>
#define idoller 0.001f
#define iWon 1000

int main(){
int selet, selet2, rnrneks, ejgkrl, ejgkrl2, Qorl, Qorl2, rhqgkrl, rhqgkrl2, Won, doller, selet3; // 그 외 변수
float sksnrl, sksnrl2; // 나누기 변수
char id[15];
char password[12];

printf("아이디와 패스워드를 4자리씩 입력하세요. \n");
printf("id: ____\b\b\b\b");
scanf("%d", &id);

printf("password: ____\b\b\b\b");
scanf("%d", &password);

if (strcmp(id, "haju") == 0) {
   if (strcmp(password, "0916") == 0){

      // 구구단, 계산기중 하나 선택
      printf("1. 구구단 출력기, 2. 계산기, 3. 환율 계산기\n세개 중 한개를 선택해주세요. : ");
   scanf("%d", &selet);

   // [구구단 선택할 시 작동되는 구구단 출력기]
   if (selet == 1) {
      printf("출력시길 단을 입력해주세요. : ");
      scanf("%d", &rnrneks);

      for (int i = rnrneks; i = rnrneks; ++i) {
         for (int j = 1; j < 10; ++j) {
            printf("%d * %d = %d", i, j, i * j);
            printf("\n");
         }
         break;
      }
   }


   // [계산기를 선택할 시 계산기 중, 더하기, 빼기, 나누기, 곱하기 중 택 1]
   else if (selet == 2) {
      printf("1. 덧셈, 2. 뺄셈, 3. 나눗셈, 4. 곱셈");
      printf("원하시는 계산식을 입력해 주세요. : ");
      scanf("%d", &selet2);

      // {덧셈 계산기를 선택 시 작동되는 덧셈 계산기}
      if (selet2 == 1) {
         printf("서로 더할 숫자 두개를 입력해주세요. : ");
         scanf("%d %d", &ejgkrl, &ejgkrl2);

         printf("%d + %d 는 %d 입니다", ejgkrl, ejgkrl2, ejgkrl + ejgkrl2);
      }

      // {뺄셈 계산기를 선택 시 작동되는 뺄셈 계산기}
      else if (selet2 == 2) {
         printf("서로 뺄 숫자 두개를 입력해주세요. : ");
         scanf("%d %d", &Qorl, &Qorl2);

         printf("%d - %d 는 %d 입니다.", Qorl, Qorl2, Qorl - Qorl2);
      }

      // {나눗셈 계산기 선택 시 작동되는 나눗셈 계산기}
      else if (selet2 == 3) {
         printf("서로 나눌 숫자 두개를 입력해주세요. : ");
         scanf("%f %f", &sksnrl, &sksnrl2);

         printf("%f / %f 는 %f 입니다.", sksnrl, sksnrl2, sksnrl / sksnrl2);
      }

      // {곱셈 계산기 선택 시 작동되는 곱셈 계산기}
      else if (selet2 == 4) {
         printf("서로 곱할 숫자 두개를 입력해주세요. : ");
         scanf("%d %d", &rhqgkrl, &rhqgkrl2);

         printf("%d 곱하기 %d 는 %d 입니다.", rhqgkrl, rhqgkrl2, rhqgkrl * rhqgkrl2);
      }

      // (덧셈, 뺄셈, 나눗셈, 곱셈 계산기 외 다른 선택지를 선택할 시 작동불가와 동시에 작동불가 메시지 출력)
      else
         printf("숫자를 잘못입력하셨습니다.");
   }

   // 환율 계산기를 선택할 시 작동되는 환율 계산기
   else if (selet == 3) {
      printf("Won을 Doller로 계산하실 경우에는 1, Doller를 Won으로 계산하실 경우에는 0을 입력해주세요.");
      scanf("%d", &selet3);

      if (selet3 == 1) {
         printf("원(Won)을 입력하세요. : ");
         scanf("%d", &Won);

         printf("%d 원은 미국 doller로 %d 달러 입니다.", Won, Won * idoller);
      }

      else if (selet3 == 0) {
         printf("달러(Doller)를 입력하세요. : ");
         scanf("%d", &doller);

         printf("%d 달러는 한국 Won으로 %d 원입니다.", doller, doller * iWon);
      }

      else
         printf("숫자를 잘못 입력하셨습니다.");
   }


   // (구구단 출력기, 계산기 외 다른 선택지를 선택할 시 작동불가와 동시에 작동불가 메시지 출력)
   else
      printf("숫자를 잘못입력하셨습니다.");



   float Math, English, Korean;

   printf("당신의 영어 점수를 입력해주세요. : ");
   scanf("%0.1f", &English);

   printf("당신의 수학 점수를 입력해주세요. : ");
   scanf("%0.1f", &Math);

   printf("당신의 국어 점수를 입력해주세요. : ");
   scanf("%0.1f", &Korean);

   printf("당신의 점수의 총 점은 %0.1f 입니다.\n", English + Math, Korean);
   printf("당신의 평균은 %0.1f 입니다.", (English + Math + Korean) / 3);
}
else
printf("\n비밀번호가 일치하지 않습니다.");
}
}