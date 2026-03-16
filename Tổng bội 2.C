Nhập vào n nguyên dương không quá 10^6, tính và in tổng sau ra màn hình S =2+4+6+8+.....+2*n
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
s+=i*2;
}
printf("%lld",s);
return 0;
}






