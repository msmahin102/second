#include<stdio.h>

void hello();
void hi();

int main(){
    printf("enter b for bengali and p for pakisthan\n");
    char ch;
    scanf("%c",&ch);
    if(ch == 'b'){
        hi();
    }else{
        hello();
    }

    return 0;

}
void hello(){
    printf("hello\n");
}

void hi(){
    printf("hi\n");
}