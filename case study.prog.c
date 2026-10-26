/*To write a C program regarding ATM transaction*/
#include<stdio.h>
int main()
{
 int ch;
 float cab,wda,dp,rb;//cab=current account balance 
 printf("Enter current account balance:");
 scanf("%f",&cab);
 printf("     CHOICE MENU");
 printf("\n     ===========     ");
 printf("\n 1 for balance inquiry");
 printf("\n 2 for cash withdrawal");
 printf("\n 3 for cash diposit");
 printf("\n Enter your choice:");
 scanf("%d",&ch);
 if(ch==1)
  printf("\n balance=%f",cab);
 else if(ch==2)
 {
  printf("\n Enter withdrawal amount:");
  scanf("%f",&wda);
  if(wda<=cab)
  { 
    rb=cab-wda;
    printf("\n Transaction successful \n remaining balance=%f",rb);
  } 
  else
   printf("\n Insufficient balance");
 }   
 else if(ch==3)
 {
  printf("\n Enter Deposit amount:");
  scanf("%f",&dp);
  cab=cab+dp;
  printf("\n Deposit successful \n Updated balance=%f",cab);
 } 
 else
  printf("\n Invalid option"); 
 return 0;
}  