#include<stdio.h>
char* funct(int n);
void main(){
int input;
    printf("enter the number \n");
    scanf("%d",&input);
    printf("%s",funct(input));

}


char* funct(int n ){
    int flag = 0; // n is not editable only on this function

    for(int i =2; i<=n-1; i++){ // <= n/2
        flag = 1;
    }

    if (flag ==1 )
    {
        return "This is not a prime number";
    }

    else{
        return "this is a prime number";
    }
    
}