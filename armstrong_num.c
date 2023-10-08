#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool is_armstrong(int test_num);

bool is_armstrong(int test_num){
    int num1=1;
    int pow_num=0;
    int sum=0;

    int length=log10(test_num)+1;
    
    for(int i=test_num;i=0;i/10){
            num1=test_num%10;
            if(num1==0){
                num1=test_num/10;
            }
            pow_num=pow(num1,length);
            sum+=pow_num;
            test_num-=num1;

    }if(sum==test_num)
    {return true;}
}