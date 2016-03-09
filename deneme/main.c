#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int n=10;
void kabarcikSirala(int dizi[], int n){
    int i, j, yedek;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(dizi[j]>dizi[j+1]){
                yedek=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=yedek;

            }
        }

    }
}
int binary_ara(int dizi[], int n, int aranan){
    int bas=0;
    int son=n-1;
    int orta;

    kabarcikSirala(dizi,n);
    while(bas<=son){
        orta=(bas+son)/2;
        if(dizi[orta]==aranan){
            return orta;
        }else if(dizi[orta]>aranan){
            son=orta-1;
        }else{
            bas=orta+1;
        }
    }
    return 0;
}
int main() {
    int i,indis;
    int dizi[10];
    srand(time(NULL));
    for(i=0;i<n;i++){
        dizi[i]=1+ rand()%10;
        printf("dizi[%d]= %d\n",i,dizi[i]);
    }
    indis=binary_ara(dizi,n,3);
    if(indis==0){
       printf("aranan eleman yok");
    }else{
        printf("aranan %d nolu yerde",indis);
    }
}
