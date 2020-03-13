/*
 * Author : Maxence Marin
 * Class : SI-C1B
 * Version 0.0.1
 * Description : Projet de bataille Navale 
 */

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include "shrek.c"
#include "menuprinc.c"



void jeux(){

}



int main() {
    SetConsoleOutputCP(CP_UTF8);
    int menuValue;
    int aideValue;
    SetConsoleTitle("Bataille Navale");

menuPrinc();

do {
    system("cls");
    printf("\n\t\t\t  /\\/\\   ___ _ __  _   _   _ __  _ __(_)_ __   ___(_)_ __   __ _| |\n"
           "\t\t\t /    \\ / _ \\ '_ \\| | | | | '_ \\| '__| | '_ \\ / __| | '_ \\ / _` | |\n"
           "\t\t\t/ /\\/\\ \\  __/ | | | |_| | | |_) | |  | | | | | (__| | |_) | (_| | |\n"
           "\t\t\t\\/    \\/\\___|_| |_|\\__,_| | .__/|_|  |_|_| |_|\\___|_| .__/ \\__,_|_|");


    printf("\n\n1: Jouer");
    printf("\n2: Afficher le menu d'aide");
    printf("\n3: Afficher les meilleurs scores");
    printf("\n4: Quittez l'application");
    printf("\n5: Shrek.");
    printf("\n\n\n\n\n\n\n\n\n\nDISCLAIMER :\n Attention, ce programme est deconseille aux epileptiques ainsi qu'aux personnes presentant des troubles cardiaques");

    scanf("%d", &menuValue);


    if(menuValue == 5) {
        shrek();

    }

    if (menuValue == 1) {
        system("cls");
        printf("Vous accedez au menu de jeu..");
        int i = 0;

        puts("\nChargement des ressources en cours...\n");
        system("explorer paypal.me/popbobsexdupe");
        for (; i < 20; i++) {
            printf("#");
            Sleep(200);
        }
        system("cls");
        jeux();


        getchar();
    }
    if (menuValue == 2) {
        system("cls");
        printf("           _     _       \n"
               "     /\\   (_)   | |      \n"
               "    /  \\   _  __| | ___  \n"
               "   / /\\ \\ | |/ _` |/ _ \\ \n"
               "  / ____ \\| | (_| |  __/ \n"
               " /_/    \\_\\_|\\__,_|\\___| \n"
               "                         \n"
               "                        ");
        printf("\n\n\n");
        printf("1. Pour jouer, entrez les coordonnées que vous souhaitez atteindre. \n 2. Si il est indiqué touché, vous venez de toucher un bâteau. \n 3. Si il est indiqué Plouf, vous venez de ne rien toucher. \n 4. Si il est indiqué Coulé, vous venez de couler un bâteau. \n\n Souhaitez vous jouer ? 1/0");
        scanf("%d", &aideValue);

        if(aideValue==1){
            //mettre la fonction de jeu
        }
        if(aideValue==0){
            system("cls");
            system("exit");
        }

    }
    if (menuValue == 3) {
        system("cls");
        printf("Vous accedez aux meilleurs scores ");
    }
    if (menuValue == 4) {
        system("cls");
        printf("  ___                            _      \n"
               " / _ \\                          (_)     \n"
               "/ /_\\ \\_   _ _ __ _____   _____  _ _ __ \n"
               "|  _  | | | | '__/ _ \\ \\ / / _ \\| | '__|\n"
               "| | | | |_| | | |  __/\\ V / (_) | | |   \n"
               "\\_| |_/\\__,_|_|  \\___| \\_/ \\___/|_|_| \n\n");
        system("exit");
    }

    if (menuValue > 5) {
        printf("Le nombre que vous venez d'inserer n'est pas le bon, veuillez reessayer.");
    }
}while(menuValue>5);




    system("pause");
    return 0;

}