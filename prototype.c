#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<math.h>
int main(){
    int number;
    int sum=0;
    scanf("%d",&number);
   int candidate=number;
    if(candidate<9){
        return true;
    }else{
        int numberOfDigitss =log10(candidate)+1;
        int numberofDigits=numberOfDigitss-1;
    while(numberOfDigitss!=1){
        int po=number%10;
        printf("%d\n",po);
        int required=pow(po,numberOfDigitss);
        printf("%d\n",required);
        sum+=required; 
        printf("%d\n",sum);
        
        number-=po;
        number=number/10;
        printf("%d\n",number);
        numberOfDigits--;
        
        }
    }
    }