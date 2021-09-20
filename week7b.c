#include<stdio.h>
int isPrime(int) ;
int main() {
 int n ;
 scanf("%d", &n) ;
 if(isPrime(n)==1)
 printf("Prime number")   ;
 else
 printf("Not prime number");
 return 0 ;
}
int isPrime(int a) 
{
    if(a != 1)
    {
        for(int b=2;b<a;b++){
            if(a%b == 0) {
                return 0 ;
            }
        }
     return 1 ;
    }
 else  {
    return 0 ;
}
}