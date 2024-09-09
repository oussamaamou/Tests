#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char Nom[15];
    char Prenom[15];
    int *Note;
}Etudiants;

int main(){
    
    Etudiants Etudiant ;
    int i;
    printf("Entrer le nom de l'etudiant:");
    scanf(" %[^\n]%*c",&Etudiant.Nom);
    printf("Entrer le prenom de l'etudiant:");
    scanf(" %[^\n]%*c",&Etudiant.Prenom);

    int n;
    printf("Entrer le nombre des notes de l'etudiant:");
    scanf("%d",&n);


    Etudiant.Note = (int*) malloc(n * sizeof(int));

    for(i=0;i<n;i++){
        printf("Entrer la note %d de l'etudiant:",i+1);
        scanf(" %d",&Etudiant.Note[i]);
    }

    printf("Le Nom de l'etudiant est : %s\n",Etudiant.Nom);
    printf("Le Prenom de l'etudiant est : %s\n",Etudiant.Prenom);
    for(i=0;i<n;i++)     
        printf("La note %d de l'etudiant est : %d\n",i+1,Etudiant.Note[i]);



    return 0;
}
