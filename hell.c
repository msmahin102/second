#include<stdio.h>
//this for one line comment
/*
This for multiline coding
*/
int main()
{
    
    int a,b,gcd,t,lcm,x;
    

    scanf("%d %d",&a, &b);
    x = a*b;
    if(a == 0) gcd = a;
    else if(b == 0) gcd = b;
    else{
        while(b != 0){
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }
    lcm = x/gcd;
    printf("gcs is %d\n",gcd);
    printf("lcm is %d",lcm);
    
    return 0;
}