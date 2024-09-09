#include<stdio.h>

int i,j,n;

void Echange(int *x, int *y){
    int Chng = *x;
    *x=*y;
    *y=Chng;
}

void TriParSelection(int T[] , int n){
    for(i=0;i<n-1;i++){
        int ptt_indx = i;
        for (j=i+1;j<n;j++){
            if(T[j]<T[ptt_indx])
            ptt_indx = j;
        }
    Echange(&T[i],&T[ptt_indx]);
    }

}
void EntrerLesElements(int T[],int n){
    for(i=0;i<n;i++){
        printf("Entrer la valeur de l'element num %d : ", i+1);
        scanf("%d",&T[i]);

    }
}

int main(){
    
    printf("Veuillez entrer le nombre des elements du tableaux :");
    scanf("%d",&n);
    int T[n];
    EntrerLesElements(T,n);
    TriParSelection(T,n);
    printf("Les elements du tableaux en ordre croissant :\n");
    for(i=0;i<n;i++)
    printf("\t %d  \n", T[i]);



    return 0;
}

