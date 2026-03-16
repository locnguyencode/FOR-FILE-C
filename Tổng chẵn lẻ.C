Tính tổng : S(n) = -1 + 2 - 3 + 4 - 5 + ...... + (-1)^n*n

Gợi ý : Duyệt i từ 1 tới n, nếu i chẵn thì cộng vào tổng, i lẻ thì trừ khỏi tổng
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
if(i%2==0){
s+=i;
}
else{
s-=i;
}
}
printf("%lld",s);
return 0;
}






