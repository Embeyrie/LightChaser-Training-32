#include<stdio.h>
int main(){
    int n,m;
    char o;
    printf("请输入表达式(例如:1+1):");         //示意用户输入表达式
    scanf("%d %c %d",&n,&o,&m);              //读取用户输入的表达式
    if(o=='+'){                              //用if循环来判断运算规则
        printf("%d+%d=%d\n",n,m,n+m);        //运算并输出
    }
    else if(o=='-'){
        printf("%d-%d=%d\n",n,m,n-m);
    }
    else if(o=='*'){
        printf("%d*%d=%d\n",n,m,n*m);
    }
    else if(o=='/'){
        if(m==0){                            //判断除数是否为0
            printf("除数不能为0\n");          //除数为0便提示
        }else{
        printf("%d/%d=%d\n",n,m,n/m);
    }
    }
    else{
        printf("输入的表达式无效\n");          //若用户写的表达式不符格式便提示
    }
    return 0;
}