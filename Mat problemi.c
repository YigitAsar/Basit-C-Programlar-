#include <stdio.h>
int main(){
	int o_sayfa=10,to_sayfa=0,gun=0;
	char cevap;
	printf("Furkan, bir romanin her gun bir onceki gun okudugu sayfadan 5 sayfa fazlasini okumaktadir. Ilk gun 10 sayfa okuyarak baslayan Furkan'in 1.000 sayfalik bir romani kac gunde bitirir?");
	
	while(to_sayfa<1000){
		to_sayfa += o_sayfa;
		o_sayfa+=5;
		gun++;
	} printf("\n\nCevabi gormek icin (c):  ");
	scanf("%c",&cevap);
	if((cevap=='c') || (cevap=='C')){
	
	printf("\nCEVAP: %d Gunde bitirir",gun);
	}
}