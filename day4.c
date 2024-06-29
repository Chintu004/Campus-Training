// //Password Matching
// #include <stdio.h>

// int main() {
//     int i;
//     char user1[50],paswd1[50];
//     char user2[50],paswd[50];
//     printf("Confirm the username:");
//     scanf("%d",user1);
//     printf("Confirm the password:");
//     scanf("%d",paswd1);
//     printf("Enter the username:");
//     scanf("%d",user2);
//     printf("Enter the password:");
//     scanf("%d",paswd);
//     if(paswd1==paswd)
//     {
//         printf("Password Matched");
//     }
//     else
//     {
//         printf("Wrong attempt");
//     }
//     for(i=0;i<3;i++)
//     {
//         if(paswd1!=paswd)
//         {
//             printf("Enter Again:");
//             scanf("%d",paswd);
//         }
//         else if(paswd1==paswd)
//         {
//             printf("Correct Password");
//         }
//         else
//         {
//             printf("Three attempts failed");
//         }
//     }
    
    

//     return 0;
// }

// //Password Matching
// #include <stdio.h>

// int main() {
//     int i;
//     char user1[50], paswd1[50];
//     char user2[50], paswd[50];
//     printf("Confirm the username:");
//     scanf("%d", user1);  
//     printf("Confirm the password:");
//     scanf("%d", paswd1);  
//     printf("Enter the username:");
//     scanf("%d", user2);  
//     printf("Enter the password:");
//     scanf("%d", paswd);  

//     if (strcmp(paswd1, paswd) == 0) {
//         printf("Password Matched");
//     } else {
//         printf("Wrong attempt");
//     }

//     for (i = 0; i < 3; i++) {
//         if (strcmp(paswd1, paswd)!= 0) {
//             printf("Enter Again:");
//             scanf("%d", paswd);
//         } else if (strcmp(paswd1, paswd) == 0) {
//             printf("Correct Password");
//             break; 
//         }
//     }

//     if (i == 3) {
//         printf("Three attempts failed");
//     }

//     return 0;
// }


//1335
// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         int n;
//         scanf("%d\n",&n);
//         if(n==1 || n==2){
//             printf(0);
//         }
//         else if(n%2==0){
//             printf("%d\n",(n/2)-1);
            
//         }
//         else{
//             printf("%d\n",n/2);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//      int t;
//      scanf("%d",&t);
//      while(t--){
//          int k;
//          scanf("%d",&k);
//          int count=0;
//          int i=1;
         
        
//          while(1){
//              if(i%3!=0 && i%10!=3){
//                  count++;
                 
//                  if(count==k){
//                      printf("%d\n",i);
//                      break;
//                  }
//              }
//              i++
//          }
//      }
//     return 0;
// }



// #include<stdio.h>
// void main(){
//     int x;
//     x=printf("Kalki was amazing!");
//     printf("\n%d",x);
// }


// #include<stdio.h>
// void main(){
//     int a=0;
//     for (;a;)
//     a++;
//     printf("%d",a)
    
// }



// #include<stdio.h>
// void main(){
//    printf("%d",'B'<'A')
    
// }

// #include<stdio.h>
// void main(){
//    int i=50;
//    printf("\n %c%d",i,i);
// }


// #include<stdio.h>
// void main(){
//    int c=2,d=5,e=10,a;
//    a=c>1?d>1 ||e>1?100:200:300;
//    printf("a=%d",a);
// }