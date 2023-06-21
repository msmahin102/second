#include<stdio.h>
int main()
{   
    int gcd,a,b,c;
    scanf("%d %d", &a, &b);
    while(b != 0){
            c = b;
            b = a % b;
            a = c;
            
            
            
        }
      printf("gcd is %d\n",a);
      printf("gcd is %d\n",b);
      printf("gcd is %d\n",c); 
    

       return 0;
    }
    
    
