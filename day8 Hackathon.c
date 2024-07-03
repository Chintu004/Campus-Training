
//Sum of digits of 5 numbers
// #include<stdio.h>

// int main(){
//     int n,sum=0;
//     scanf("%d",&n);

//     while(n!=0){
//         sum+=n%10;
//         n/=10;
//     }
//     printf("%d",sum);
//     return 0;
// }





//Calculate nth term
// #include <stdio.h>

// int nterm(int n,int a,int b, int c) {
//     if (n==1){
//         return a;
//     } else if (n==2){
//         return b;
//     } else if (n==3){
//         return c;
//     } else {
//         return nterm(n-1,b,c,a+b+c);
//     }
// }

// int main() {
//     int n,a,b,c;
//     scanf("%d%d%d%d",&n,&a,&b,&c);
//     int ans = nterm(n,a,b,c);
//     printf("%d",ans);
//     return 0;
// }


//for loops

// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Enter the value: ");
//     scanf("%d %d",&a,&b);

//     for (intn=a;n<=b;n++) {
//         if (n>=1 && n<=9) {
//             switch (n) {
//                 case 1:
//                     printf("one\n");
//                     break;
//                 case 2:
//                     printf("two\n");
//                     break;
//                 case 3:
//                     printf("three\n");
//                     break;
//                 case 4:
//                     printf("four\n");
//                     break;
//                 case 5:
//                     printf("five\n");
//                     break;
//                 case 6:
//                     printf("six\n");
//                     break;
//                 case 7:
//                     printf("seven\n");
//                     break;
//                 case 8:
//                     printf("eight\n");
//                     break;
//                 case 9:
//                     printf("nine\n");
//                     break;
//             }
//         } else if (n>9 && n%2==0){
//             printf("even\n");
//         } else if (n>9 && n%2!=0) {
//             printf("odd\n");
//         }
//     }

//     return 0;
// }


