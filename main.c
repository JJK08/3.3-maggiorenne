#include<stdio.h>

int main() {
    int eta;
    char nome;
    printf("inserisci il iniziale: ");
    scanf("%c",&nome);
    printf("inserisci eta: ");
    scanf("%d",&eta);
    if(eta>=18) {
        printf("%c e' maggiorenne\n: ",nome);
    }else {
        printf("%c e' minorenne\n: ",nome);
    }
    return 0;
}
