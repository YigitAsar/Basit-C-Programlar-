#include <stdio.h>
#include <conio.h>
int main(){
	int n,sayi,toplam=0;
	char devam='e';
	printf("----------MUKEMMEL SAYI HESAPLAYICI----------\n\n");
	printf("Kendisi haric butun pozitif tamsayi carpanlarinin toplami kendisine esit olan sayilara mukemmel sayi denir.\n\n");
	printf("Ornek: 28 sayisinin kendisi haric pozitif carpanlari toplami 1+2+4+7+14 = 28 oldugundan 28 sayisi mukemmel bir sayidir\n");
	
	
	while((devam=='e') || (devam=='E')){
		printf("\n\nLutfen sayi giriniz: ");
		scanf("%d", &sayi);
		
		for (n=1; n<sayi; n++){
		if (sayi % n == 0){
			toplam += n;	
		}
	} if(toplam == sayi){
		printf("\n%d Mukemmel sayidir!\n", sayi);
	} else{
		printf("\n%d Mukemmel sayi degildir!\n", sayi);
	} printf ("\nHesaplama islemine devam etmek istiyor musunuz?(E/H):");
	toplam=0;
	devam = getch();
	} 
		printf("\n\nHesaplama islemi bitmistir");
		 
}