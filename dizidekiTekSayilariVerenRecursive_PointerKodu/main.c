#include <stdio.h>
#include <stdlib.h>

int tekBul(int *Array, int boyut){
	if(boyut>=0){
		if((Array[boyut]%2)==0)
			return tekBul(Array, boyut-1);
		else
			return 1+tekBul(Array, boyut-1);
	}
	else{
		return 0;
	}
}

int main(){
	int dizi[]={25,64,55,32,43,62,87,99,105,1};
	int b=9;
	printf(" %d adet tek sayi vardir ", tekBul(dizi,b));


}
