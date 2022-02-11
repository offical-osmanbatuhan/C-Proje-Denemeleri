/*
 * Karenin Alanını Hesaplama
 *
 *  Created on: 11 Şub 2022
 *      Author: osmanbatuhankalkan
 */

#include<stdio.h>

int main(){
	printf("Karenin Alanını Hesaplayan Program\n\n");
	
	int kareninKenari;
	int alan,cevre;
	
	printf("Karenin Bir Kenarının Olcusunu Giriniz:\n\n");
	scanf("%d",&kareninKenari);
	
	alan = kareninKenari*kareninKenari;
	cevre = kareninKenari*4;
	printf("Karenin Çevresi:%d\n\n",cevre);
	printf("Karenin Alanı:%d\n\n",alan);
	
	return 0;
}
