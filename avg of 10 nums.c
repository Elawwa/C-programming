//avg of 10 nums
#include <stdio.h>

int main() {

int n,sum=0;
float avg;
for(int i=0;i<10;i++){
   
 scanf("%d",&n);
 sum+=n;
      
}


avg= sum/10.0;
printf("the average is:%f",avg);


    return 0;
}