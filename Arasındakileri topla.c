#include <stdio.h>
int main(){
	int baslangic,bitis,toplam=0,n;
	printf("----------TOPLA----------\n");
	
	printf("Baslangic degeri gir: ");
	scanf("%d",&baslangic);
	printf("Bitis degeri gir: ");
	scanf(" %d", &bitis);
	
	for(n=baslangic; n<=bitis; n++){
		toplam+=n;
	} printf("%d ile %d arasindaki sayilarin toplami(%d ile %d dahil)= %d",baslangic,bitis,baslangic,bitis,toplam);
}