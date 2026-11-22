Tính tổng ước của số nguyên dương N. Độ phức tạp mong đợi O(sqrt(N))
Input 01
28
Output 01
56
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
long long tonguoc(ll n){
ll s=0;
for(int i=1;i<=sqrt(n);i++){
if(n%i==0){//i là ước số của n(n%i==0)
s+=i;
if(i!=n/i)
s+=n/i;
}
}
return s;
}
int main(){
long long n;
scanf("%lld",&n);
printf("%lld",tonguoc(n));
return 0;
}







