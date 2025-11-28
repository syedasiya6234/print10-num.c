#include<stdio.h>
#include<conio.h>
int main()
 {
 int a,b;
 printf("Enter two numbers");
 scanf("%d%d",&a,&b);
 if(a > b)
 {
 printf("Big number = %d\n",a);
 }
 else 
 if(b>a)
 {
 printf("Big number = %d\n",b);
 }
 else
 printf("Both are equal\n");
 return 0;
}