#include<stdio.h>
int main(){
    int sum=0;
    for(int i=1;i<=100;i++){               //用for循环调出1—100所有数
        if(i%2!=0){                        //判断i是否为奇数
            sum+=i;                        //让sum加上i算出来的结果作为sum新的值
        }
    }
    printf("1~100的奇数和为:%d\n",sum);
    return 0;
}