#include <stdio.h>
#include <stdlib.h>

struct Arac{
	char plaka[10];
	char model[10];
	char renk[10];
	
};

struct Giris{
	char saat[10];
};

int giriskapasite[10];
int kapasite[1000];

void AracEkle(struct Arac kapasite[1000],struct Giris giriskapasite[10]){
	int i;
	for(i=1;i<=5;i++){
	
		printf("Lutfen aracinizin giris yaptigi saati belirtin:");
		scanf("%s",giriskapasite[i].saat);
		printf("Lutfen aracinizin plakasini girin:");
		scanf("%s",kapasite[i].plaka);
		printf("Lutfen aracinizin modelini girin:");
		scanf("%s",kapasite[i].model);
		printf("Lutfen aracinizin rengini girin:");
		scanf("%s",kapasite[i].renk);
	
		printf("\n<---------------------->\n\n");
	}
}
void AracListele(struct Arac kapasite[1000],struct Giris giriskapasite[10]){
	int i;
	for(i=1;i<=5;i++){
		
		printf("\n");
		printf("Otoparka giris yaptiginiz saat:%s\n",giriskapasite[i].saat);
		printf("Plaka:%s\n",kapasite[i].plaka);
		printf("Model:%s\n",kapasite[i].model);
		printf("Renk:%s\n\n",kapasite[i].renk);
	}
}

int main(){
	
	system ("color 80");
	struct Arac arac_test[1000];
	struct Giris saat[10];
	AracEkle(arac_test,saat);
	AracListele(arac_test,saat);
	
	return 0;
	
}
