#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<math.h>
int main(){
    int number;
    scanf("%d",&number);
   int candidate=number;
    if(candidate<9){
        return true;
    }else{
        int numberOfDigits =log10(candidate)+1;
        
        int sum = 0;
    
    for (int i = candidate; i != 0; i /= 10)
    {
        
	    int num = i % 10;
        
	    sum +=pow(num,numberOfDigits);
        i-=num;
        printf("%d\n",sum);
        printf("%d\n",i);
    }
    return 0;
    }
    
}