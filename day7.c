// #include<stdio.h>

// int sum(int,int); //Declaration

// int main(){

//     int a=5,b=20,s;
//     s=sum(a,b);
//     printf("The sum of a and b is %d",s);
//     return 0;

// }
// int sum(int x,int y){
//     return x+y;

// }



// #include<stdio.h>

// int sum(int x,int y){
//     return x+y; //Without Declaration also x and y are parameters
// }

// int main(){

//     int a=5,b=20,s;   //a and b are arguements
//     s=sum(a,b);
//     printf("The sum of a and b is %d",s);
//     return 0;

// }


// //Calculator by defining values
// #include<stdio.h>

// int sum(int,int);
// int diff(int,int);
// int mul(int,int);
// int div(int,int);



// int main(){
//     int a,b,s,d,m,di;
//     printf("Enter the value of a and b\n");
//     scanf("%d%d",&a,&b);
//     s=sum(a,b);
//     d=diff(a,b);
//     m=mul(a,b);
//     di=div(a,b);
//     printf("The sum of a and b is %d\n",s);
//     printf("The difference of a and b is %d\n",d);
//     printf("The multiplication of a and b is %d\n",m);
//     printf("The division of a and b is %d\n",di);
//     return 0;
// }
// int sum(int x,int y){
//     return x+y;
// }
// int diff(int x,int y){
//     return x-y;
// }
// int mul(int x,int y){
//     return x*y;
// }
// int div(int x,int y){
//     return x/y;
// }


// //Calculator By Passing Values 
// #include<stdio.h>
// #include<math.h>

// int sum(int,int);
// int diff(int,int);
// int mul(int,int);
// int div(int,int);
// int sq(int);
// int cube(int);
// int pow(int);

// int main(){
//     int a,b,s,d,m,di,choice,ss,cu,ss1,cu2,adsq,sbsq,adcu,sbcu,musq,mucu,divsq,divcube,dsq,dcube,msq,mcube,p,modsq,modcube;
//     printf("Enter the value of a:");
//     scanf("%d",&a);
//     printf("Enter the value of b:");
//     scanf("%d",&b);
//     printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Square\n6.Cube\n7.Addition With Squares\n8.Addition with Cubes\n9.Substraction With Squares\n10.Substraction With Cubes\n11.Multiplication With Squares\n12.Multiplication With Cubes\n13.Division with Squares\n14.Division With Cubes\n15.powers\n");
//     printf("Enter the choice:");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         s=sum(a,b);
//         printf("The sum of a and b is: %d\n",s);
//         break;
//     case 2:
//         d=diff(a,b);
//         printf("The difference of a and b is: %d\n",d);
//         break;
//     case 3:
//         m=mul(a,b);
//         printf("The multiplication of a and b is: %d\n",m);
//         break;
//     case 4:
//         di=div(a,b);
//         printf("The division of a and b is: %d\n",di);
//         break;
//     case 5:
//         ss=sq(a);
//         ss1=sq(b);
//         printf("The square of a is: %d\n",ss);
//         printf("The square of b is: %d\n",ss1);
//         break;
//     case 6:
//         cu=cube(a);
//         cu2=cube(b);
//         printf("The cube of a is: %d\n",cu);
//         printf("The cube of b is: %d\n",cu2);
//         break;
//     case 7:
//     ss=sq(a);
//     ss1=sq(b);
//     adsq=sum(ss,ss1);
//     printf("The addition of squares of a and b is: %d\n",adsq);
//     break;
//     case 8:
//     cu=cube(a);
//     cu2=cube(b);
//     adcu=sum(cu,cu2);
//     printf("The addition of cubes of a and b is: %d\n",adcu);
//     break;
//     case 9:
//     ss=sq(a);
//     ss1=sq(b);
//     dsq=diff(ss,ss1);
//     printf("The difference of squares of a and b is: %d\n",dsq);
//     break;
//     case 10:
//     cu=cube(a);
//     cu2=cube(b);
//     dcube=diff(cu,cu2);
//     printf("The difference of cubes of a and b is: %d\n",dcube);
//     break;
//     case 11:
//     ss=sq(a);
//     ss1=sq(b);
//     msq=mul(ss,ss1);
//     printf("The multiplication of squares of a and b is: %d\n",msq);
//     break;
//     case 12:
//     cu=cube(a);
//     cu2=cube(b);
//     mcube=mul(cu,cu2);
//     printf("The multiplication of cubes of a and b is: %d\n",mcube);
//     break;
//     case 13:
//     ss=sq(a);
//     ss1=sq(b);
//     divsq=div(ss,ss1);
//     printf("The division of squares of a and b is: %d\n",divsq);
//     break;
//     case 14:
//     cu=cube(a);
//     cu2=cube(b);
//     divcube=div(cu,cu2);
//     printf("The division of cubes of a and b is: %d\n",divcube);
//     break;
//     case 15:
//     ss=sq(a);
//     ss1=sq(b);
//     modsq=fmod(ss,ss1);
//     printf("The modulus of squares of a and b is: %d\n",modsq);
//     break;
//     case 16:
//     cu=cube(a);
//     cu2=cube(b);
//     modcube=fmod(cu,cu2);
//     printf("The modulus of cubes of a and b is: %d\n",modcube);
//     break;
//     default:
//         printf("Invalid choice");
//         break;
//     }

// }
// int sum(int x,int y){
//     return x+y;
// }
// int diff(int x,int y){
//     return x-y;
// }
// int mul(int x,int y){
//     return x*y;
// }
// int div(int x,int y){
//     if(y == 0) {
//         printf("Error: Division by zero\n");
//         return 0;
//     }
//     return x/y;
// }
// int sq(int x){
//     return x*x;
// }
// int cube(int x){
//     return x*x*x;
// }
// int mod(int x,int y){
//     return x%y;
// }


// //Harshad Nukmber
// #include <stdio.h>

// int sum_of_digits(int n) {
//     int sum = 0;
//     while (n != 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }

// int is_harshad(int n) {
//     int sum = sum_of_digits(n);
//     return n % sum == 0;
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (is_harshad(num)) {
//         printf("%d is a Harshad number.\n", num);
//     } else {
//         printf("%d is not a Harshad number.\n", num);
//     }

//     return 0;
// }





