Nhập vào 1 dãy số có không quá 10000 số nguyên. Hãy xác định trong quá trình nhập có xuất hiện số 2022 hay không?

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
typedef float f;
typedef double d;
int main(){
ll n;
scanf("%lld",&n);
int s=0;
for(int i=1;i<=n;i++){
int tam;
scanf("%d",&tam);
if(tam==2022){
s=1;//da gap,ko dung break
}
}
if(s==1){
printf("YES\n");
}
else{
printf("NO\n");
}
return 0;
}






