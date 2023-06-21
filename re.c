#include<stdio.h>
#include<math.h>

// float temp(float celsius);

// int main()
// {
//     float celsius,far;
//     printf("Enter your ℃  value\n");
//     scanf("%f",&celsius);
//     far = temp(celsius);
//     printf("The far value is %0.2f ℉\n ",far);
//     return 0;
// }

// float temp(float celsius){
//     float far = celsius * (9.0/5.0) + 32;
//     return far;

// }

// int x=0,y=1,n,i=3,z;

// int main(){
//     scanf("%d",&n);
//     printf("%d\n%d\n",x,y);
//     while(i<=n){
//         z = x+y;
//         printf("%d\n",z);
//         x = y;
//         y = z;
//         i++;
//     }
    
//     return 0;
// }

// int x,y;
// int z,r,i,n,a;

// int main(){
//     scanf("%d",&n);
//     scanf("%d",&r);
//     z = n;
//     a = r;
//     for(int i=1;i<r;i++){
//         y = n-i;
//         z = z*y;
//         a = i*a;
//     }
//     printf("%d\n",z);
//     printf("%d\n",a);
//     printf("%d\n",z/a);


    
// }

int x,y=20,z=1;

int bin(int y);

int main(){
    printf("%d",bin(10));
    return 0;
}
int bin(int  y){
    while (y!=0)
    {
        x = y % 2;
        y = y/2;
    }
    return x;
}


// int x,y = 1;

// int main(){
//     while(y == 0 ){
//         x = y % 2;
//         printf("%d",x);
//         y++;
//     }

// }

// char ch;
// int a,b=654321,c;
// int main(){
//     // for(ch = 'a';ch<='z',ch++){
//     //     printf("%c",ch);
//     // }
//    while(b != 0){
//     a = b%10;
//     printf("%f",a);
//     b = b/10;

//    }
//    return 0;
// }

// int a,b,c,d;
// long long convert(int a);
// int main(){
//     printf("%lld",debi(6));
//     return 0;
// }

// long long convert(int a){
//     while(a != 0){
//         long long d = 0,
//         c = 1;
//         b  = a % 2;
//         a  = a/2;
//         d = d+c*b;
//         c = c*10;
//         return d;
//     }
// }

// convert decimal to binary
