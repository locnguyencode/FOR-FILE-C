Nhập vào n nguyên dương không quá 1000 và tính tổng sau, kết quả in ra màn hình. S =1^3+2^3+3^3+4^3+……+n^3.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll n;
scanf("%lld",&n);
ll s=0;
for(int i=1;i<=n;i++){
s+=i*i*i;
}
printf("%lld",s);
return 0;
}






