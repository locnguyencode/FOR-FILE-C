Tính tổng S(n) = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2
Input 01
Copy
3
Output 01
Copy
14

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
long long s=0;
for(int i=1;i<=n;i++){
s+=1ll*i*i;
}
printf("%lld",s);
return 0;
}






