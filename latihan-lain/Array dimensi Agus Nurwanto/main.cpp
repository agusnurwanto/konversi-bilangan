#include<stdio.h>
#include<conio.h>

int i, n;

main(){
    char h=64, nama[5][4][22] = {
        "AC Milan", "Barcelona", "Porto", "Monaco", "Liverpool", "Real Madrid", "CSK Moskow", "PSG", "Inter Milan", "Arsenal", "Atletico Madrid", "Ajax",
        "AS Roma", "Manchester United", "Dortmun", "Valencia", "Manchester City", "Bayer Munich", "Napoli", "Vilareal"
    };
    printf("Liga Champions : \n\n");
    for(i=0; i<5; i++){
        ++h;
        printf("Group %c \n", h);
        for(n=0; n<4; n++){
            printf("     %d. %s\n", n+1, nama[i][n]);
        }
        printf("\n");
    }
    getch();
}
