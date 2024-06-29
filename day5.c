// #include<stdio.h>
// int main(){
//     int x,grade;
//     scanf("%d",&x);
//     grade=x/10;
//     switch (grade)
//     {
//     case 10:
//     case 9:
//     printf("Grade:A");
//     break;
//     case 8:
//     printf("Grade:B");
//     break;
//     case 7:
//     printf("Grade:C");
//     break;
//     case 6:
//     printf("Grade:D");
//     break;
//     default:
//     printf("Fail");
//     }
// }



// #include<stdio.h>
// int main(){
//     int x,y,z,q,options,balance=1000;
//     printf("1.Check Balance\n2.Deposite Money\n3.Withdraw Money\n4.Exit\n");
//     printf("Enter the options:");
//     scanf("%d",&options);
//     switch (options)
//     {
//     case 0:
//     case 1:
//     printf("Your Balance is %d",balance);
//     break;
//     case 2:
//     printf("Enter the amount to deposit:");
//     scanf("%d",&x);
//     y=balance+x;
//     printf("your balance is:%d",y);
//     break;
//     case 3:
//     printf("Enter the amount to withdraw:");
//     scanf("%d",&z);
//     q=balance-z;
//     printf("your balance is:%d\n",q);
//     if (z>balance)
//     {
//         printf("Insufficient Balance");
//     }
//     break;
//     case 4:
//     printf("Thank you");
//     break;
//     default:
//     printf("Invalid option");
//         break;
//     }
// }

//Cheap Codeforces
// #include<stdio.h>
// int main(){
//     int n,m,a,b;
//     scanf("%d %d %d %d",&n,&m,&a,&b);
//     if(m*a<b){
//         printf("%d",n*a);

//     }
//     else{
//         printf("%d",(n/m)*b+((n%m)*a<b?(n%m)*a:b));
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int x,y;
//     for(x=5;x>=1;x--){
//         for(y=1;y<=x;y++){
//             printf("%d\n",y);
//         }
//     }
// }



// #include<stdio.h>
// int main(){
//     float f=0.1;
//     if (f=0.1)
//     {
//         printf("true\n");
//     }
//     else{
//         printf("false\n");
//     }
    
//     return 0;
// }



