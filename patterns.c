#include<stdio.h>
#include<cs50.h>


int main(void)
{
  int p= get_int("Enter type of pattern (1 or 2)");
  if(p==1){
    int n= get_int("enter no:");
  for(int i=n; i>=1; i--){
    for(int j=1; j<=i; j++){
       printf("#");
     }
    
   printf("\n");
  }
  
 }
  else if(p==2){
  int n= get_int("enter no:");
  for(int i=0; i<=n; i++){
    for(int j=1; j<=n-i; j++){
       printf(" ");
     }
    for(int k=1; k<=i;k++){
     printf("#");
    }
   printf("\n");
  }
 }
