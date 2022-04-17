//positive or negative
#include <stdio.h>

int main() {

signed int x;

printf("enter a number: ");
scanf("%d",&x);

if (x < 0){
    printf("negative");
}else {
    printf("positive");
}



    return 0;
}