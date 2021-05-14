#include <cmath>

int reversed(int a){
    int i=a;
    int num=0,count=0;
    while( i!= 0)
    {   
        i = i/10;
        ++count;                        //Finding no. of digits in a number
    }
    for(i=1;i<=count;++i){
        int remain=a%10;
        num+=(remain * pow(10,count-i));
        a=a/10;    
    }                                  //Reversing a no. the traditional way
    return num;
}


int Solution::isPalindrome(int a) {
    if(a==reversed(a) && a>=0){
        return 1;
    }
    return 0;
}
