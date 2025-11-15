#include <stdio.h>
int main(){
	int sayi,toplam=0;
	char devam;
	do{
		printf("Sayi giriniz: ");
		scanf("%d",&sayi);
		toplam+=sayi;
		printf("Toplam= %d\n",toplam);
		printf("Devam etmek icin (c) sonlandirmak icin herhangi bir tusa basiniz: ");
		scanf(" %c",&devam);
	} while(devam=='c');
}