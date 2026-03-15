Liệt kê các số chính phương dương và không vượt quá N

Gợi ý : Số chính phương là số có dạng i^2 với i là số nguyên => i^2 <= N => Duyệt các số nguyên từ 1 tới căn N và in ra i^2 ta sẽ có các số chính phương không vượt quá N.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll n;
scanf("%lld",&n);
for(int i=1;i<=sqrt(n);i++){//liệt kê ước
printf("%lld ",1ll*i*i);
}
return 0;
}






