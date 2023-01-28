#include<stdio.h>
int main()
{
	long long int dem=0,hople=1,m,n,sum=0;
	printf("nhap m:");
	scanf("%lld",&m);
	printf("nhap n:");
	scanf("%lld",&n);
		for(int i=m+1;hople<=n;i++){
			for(int j=2;j<i;j++) {
				if(i%j==0) dem++;
			} 
			if(dem==0) {sum+=i;
			printf("%lld ",i);
			hople++;
			}
			else dem=0;
		}
	printf("\ntong cua day tren la %lld",sum);
}
	

