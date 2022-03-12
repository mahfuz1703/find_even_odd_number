#include <stdio.h>

int main(){
    int x;

    while(1){
        printf("Enter your number: ");
        scanf("%d", &x);

        if(x%2==0){
        printf("This number is even\n");
        }
        else{
        printf("This number is ODD\n");
        }
    }
    return 0;
}
