#include <stdio.h>
#include <stdlib.h>

float diger_ders(),diger_ortalama(),bizim_sinif(),not_cevirme(),notlar,alinan_not;
int bizim_ort_hesap(),diger_hesap(),bizim_sinif_son();


int main(){
	char kontrol;
	printf("Bil muh 1. sinif ogrencisi misiniz ?(E/H)");
   scanf("%c",&kontrol);
    fflush(stdin);
	if (kontrol == 'E'){
   bizim_sinif();
  }
  else if (kontrol =='H'){
  diger_hesap();
}
  
  else {
  printf("Hatali tuslama yaptiniz lutfen tekrar deneyiniz.");
  system("PAUSE");
  }

}

int diger_hesap(){
	char kontrol_diger;
	printf("Genel ortalama hesaplamak iCin (O). Ders notu ortalamasi hesaplamak icin (D) (O / D)");
    scanf("%c",&kontrol_diger);
  
  if(kontrol_diger == 'O'){
     diger_ortalama();
  
  
  }
  else if(kontrol_diger == 'D'){
	 diger_ders();
  }
  else {
  	 printf("Yanlis tuslama yaptiniz");
  	 system("pause");
  }


}

float diger_ortalama(){
	float kredi_degeri,toplam_kredi=0,ortalama;
	int j;
	char ders_adi[100];
	do{
  
  printf("Notunuzu giriniz : ");
  scanf("%f",&notlar);
  not_cevirme();
  printf("Dersin kredisini giriniz : ");
  scanf("%f",&kredi_degeri);
  ortalama += kredi_degeri*notlar;
  toplam_kredi += kredi_degeri;
  printf("Durmak icin Dur yaziniz (Devam etmek icin herhangi bir sey yazsaniz olur)");
  scanf("%s",&ders_adi); // burada sýkýntý var mesela ilkinde d yazýyor ikincisinde sur yazýyor d ve ur birleþiyor dur algýlýyor buna bakýlacak
  
  }while ((ders_adi[0] != 'd' && ders_adi[1] != 'u' && ders_adi[2] != 'r') || 
  (ders_adi[0] != 'D' && ders_adi[1] != 'u' && ders_adi[2] != 'r')   );
  printf("Ortalamaniz : %f\n ",(ortalama/toplam_kredi));
} 




float diger_ders(){
float vize_not,vize_yuzde,final_not,final_yuzde;
	char ders_adi[100];
	do{
	printf("vize notunuzu giriniz : ");
 	scanf("%f",&vize_not);
	printf("Final notunu giriniz : ");
	scanf("%f",&final_not);
	printf("Vizenizin etki ettigi yuzdelik degeri yaziniz : ");
  	scanf("%f",&vize_yuzde);
    printf("Finalinizin etki ettigi yuzdelik degeri yaziniz : ");
    scanf("%f",&final_yuzde);
    
    final_not = (vize_not*vize_yuzde / 100) + (final_not*final_yuzde/100);
    printf("Aldiginiz not : %0.2f\nDurmak icin Dur yaziniz(Devam etmek icin herhangi bir sey yazsaniz olur) : ",final_not);
    scanf("%s",ders_adi);
	}while((ders_adi[0] != 'd' && ders_adi[1] != 'u' && ders_adi[2] != 'r') || 
  (ders_adi[0] != 'D' && ders_adi[1] != 'u' && ders_adi[2] != 'r')   );
  		
}


float bizim_sinif(){
char ort_kontrol;
printf("Ortalamanizi biliyor musunuz hesaplamamizi ister misiniz (Biliyor iseniz H hesaplamak icin E (E/H))");
scanf( "%c", &ort_kontrol);

if (ort_kontrol =='H'){
 bizim_ort_hesap();
}
else if (ort_kontrol == 'E'){
	printf("Programin bu kismi vize ve final yuzdeleri bilinmedigi icin sonraya birakilmistir");
}
else {
printf("Tanýmlanmayan bir iþlem yaptýnýz");
system("PAUSE");
}

}

int bizim_sinif_son(){
// okuldan öðrenilecek 

}

float not_cevirme(){

if (notlar>=90 && notlar<=100)
	{
	notlar=4.00;
}

else if(notlar>=85 && notlar<90)
	{
	notlar=3.50;
}
else if(notlar>=80 && notlar<85)
	{
	notlar=3.00;
}
else if(notlar>=75 && notlar<80)
	{
	notlar=2.50;
}
else if(notlar>=65 && notlar<75)
	{
	notlar=2.00;
}
else if (notlar>=60 && notlar<65)
	{
	notlar=1.50;
}
else if (notlar>=55 && notlar<60)
	{
	notlar=1.00;
}
else if(notlar >=50 && notlar <55)
	{
	notlar=0.50;
}
else if(notlar >= 0 && notlar <50)
	{
	notlar=0.00;
}
else{
	system("pause");
	
}

return notlar;
}

int bizim_ort_hesap(){

printf ("Lutfen notlarinizi giriniz\nBilgisayar muhendisligine giris : ");
scanf("%f",&notlar);
not_cevirme();
alinan_not += notlar * 4.0;

printf ("Programla : ");
scanf("%f",&notlar);
not_cevirme();
alinan_not += notlar * 8;

printf("Fizik:");
scanf("%f",&notlar);
not_cevirme();
alinan_not += notlar*4;

printf("Fizik lab:");
scanf("%f",&notlar);
not_cevirme();
alinan_not += notlar*3;

printf("Turk dili:");
scanf("%f",&notlar);
not_cevirme();
alinan_not += notlar*2;

printf("Ingilizce:");
scanf("%f",&notlar);
not_cevirme();
alinan_not += notlar*2;

printf("Matematik:");
scanf("%f",&notlar);
not_cevirme();
alinan_not += notlar*7;

 alinan_not = (alinan_not/30);
 
 printf("Ortalamaniz %0.2f",alinan_not); return 0;
}

