#include <stdio.h>
int main(){
	int para;
	printf("----------BANKAMATIK----------");
	printf("\nCekmek istediginiz para miktarini giriniz: ");
	scanf("%d",&para);
	
	if(para%10!=0){
		printf("En kucuk 10 TL'lik banknot mevcut..!");
	} else{
		printf("%d adet 100 TL",para/100);
		para%=100;
		
		printf("\n%d adet 50 TL",para/50);
		para%=50;
		
		printf("\n%d adet 20 TL", para/20);
		para%=20;
		
		printf("\n%d adet 10 TL", para/10);
		
	}
}