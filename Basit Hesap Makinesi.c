#include<stdio.h>

int main(){
    printf("Basit Hesap Makinesi\n\n");

    float sayi1,sayi2,sonuc;
    int islem;

    printf("Birinci Sayıyı Giriniz:\n");
    scanf("%f",&sayi1);

    printf("İkinci Sayiyi Giriniz:\n");
    scanf("%f",&sayi2);

    printf("Yapmak İstediğiniz İşlemi Giriniz (1)Toplama,(2)Çıkarma,(3)Çarpma,(4)Bölme):\n ");
    scanf("%d",&islem);

    if(islem ==1)
      sonuc = sayi1 + sayi2;
    else if(islem==2)
      sonuc = sayi1 - sayi2;
    else if(islem==3)
      sonuc = sayi1 * sayi2;
    else if(islem==4)
      sonuc = sayi1/sayi2;

    printf("İşlemin Sonucu: %.2f",sonuc);
    return 0;
}