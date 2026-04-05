#include<stdio.h>
#include<limits.h>

int min(int a,int b){
 if(a<b){
    return a;
 }
 else{
    return b;
 }
}

 int main(){
 int coins[]={1,7,10,22};
 int amount=100;
 int n=4;

 int a[n+1][amount+1];

 for(int i=0;i<=n;i++)
    a[i][0]=0;
 for(int j=0;j<=amount;j++)
    a[0][j]=INT_MAX-1;

 for(int i=1;i<=n;i++){
    for(int j=1;j<=amount;j++){
        if(coins[i-1]<=j){
            a[i][j]=min(a[i-1][j],1+a[i][j-coins[i-1]]);
        }
        else{
            a[i][j]=a[i-1][j];
        }
    }
 }
 printf("Minimum number of coins:%d\n",a[n][amount]);
 return 0;
 }





