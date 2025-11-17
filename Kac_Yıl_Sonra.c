#include <stdio.h>
#include <conio.h>
int main(){
	double new_york=19000000, istanbul=14000000;
	int yil=0;
	printf("New York metropolitaninda nufus 19 milyon, Istanbul'da ise 14 milyon olarak belirleniyor. Istanbul nufusunun yilda %%3, New York nufusunun ise %%2 artis gosterecegi tahmin ediliyor. Buna gore kac yil sonra Istanbul'un New York'tan kalabalik olur.");
	char cevap;
	
	while(new_york>=istanbul){
		new_york*=1.02;
		istanbul*=1.03;
		yil++;
	} printf("\n\nCevabi gormek icin (c): ");
	cevap=getch();
	if(cevap=='c'){
	printf("\nCEVAP= %d", yil);
	}
}