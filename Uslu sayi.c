#include <stdio.h>
int main(){
	int taban,us,n,sayi=1;
	printf("----------USLU SAYI HESAPLA----------\n");
	
	printf("Tabani girin: ");
	scanf("%d",&taban);
	printf("Ussu girin: ");
	scanf(" %d", &us);
	
	for(n=us; n>=1; n--){
		sayi*=taban;
	} printf("Uslu sayi(%d^%d)= %d", taban,us,sayi);
}