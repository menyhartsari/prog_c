#include <stdio.h>
#include <math.h>

void generuj_kompozicie(char n){
	int i,pocet,cislo,zloziek;
    pocet=pow(2,(n-1))-1;
    for (i=0;i<pocet;i++){      
        cislo = 1;
        for (zloziek=n-2;zloziek>=0;zloziek--){
            if((i/(int)(pow(2,zloziek)))%2==1){
                cislo++;
            }else{
                printf("%d+",cislo);
                cislo=1;
            }
        	}
    	printf("%d\n",cislo);
    }
}
int main(){
    generuj_kompozicie(7);
    return 0;
}

