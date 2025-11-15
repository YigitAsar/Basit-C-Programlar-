#include <stdio.h>
int main(){
	int sayi,n=0,toplam=0;
	float ortalama;
	char devam;
	
	printf("----------ORTALAMA HESAPLAMA----------\n");
	do{
		printf("Sayi giriniz: ");
		scanf("%d",&sayi);
		n++;
		toplam+=sayi;
		printf("Yeni sayi girmek icin (e): ");
		scanf(" %c",&devam);
	} while(devam=='e');
	ortalama= (float) toplam/n; 
	printf("Ortalama= %.2f", ortalama);
	
	return 0;
}