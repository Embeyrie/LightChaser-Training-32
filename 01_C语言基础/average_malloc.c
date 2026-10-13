#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("请输入数组长度(总共多少个数):");
    scanf("%d",&n);
    int*arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("内存分配失败\n");
        return 1;
    }
    printf("请输入%d个整数(每个数间用空格隔开)",n);
    double sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    if(n>0){
        printf("平均值为:%f\n",sum/n);
    }
    free(arr);
    arr=NULL;
    return 0;
}