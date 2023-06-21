#include<stdio.h>
int main()
{
   // int i,y,x;
   // printf("enter the the value of x ");
   // scanf("%d",&x);
   
   // for(i = 1,y = 0;i<=10;i++){
   //    y = y+x;
   //    printf("%d X %d= %d\n",x,i,y);
   // }
   // printf("%d",y);
//  int a,b=1,c = 1;
//  printf("enter the value of a ");
//  scanf("%d",&a);
//  while(b<=10){
//    printf("%d X %d = %d\n",a,b,a*b);
//    b++;
//  }
int x,y,z=1,i;

scanf("%d",&x);
for(y=1;y<=x;y++){
z=z*y;
}
    
printf("%d\n",z);

for(x;x>=1;x-- ){
   printf("%d\n",x);
}

for(i=1;i<=x;i++){
   printf("%d\n",i);
}
   
   return 0; 
}
