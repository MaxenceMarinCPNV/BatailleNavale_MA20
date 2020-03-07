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


int main() {
    int menuValue;
    printf("                    ____        _        _ _ _                               _      \n"
           "                   |  _ \\      | |      (_) | |                             | |     \n"
           "                   | |_) | __ _| |_ __ _ _| | | ___   _ __   __ ___   ____ _| | ___ \n"
           "                   |  _ < / _` | __/ _` | | | |/ _ \\ | '_ \\ / _` \\ \\ / / _` | |/ _ \\\n"
           "                   | |_) | (_| | || (_| | | | |  __/ | | | | (_| |\\ V / (_| | |  __/\n"
           "                   |____/ \\__,_|\\__\\__,_|_|_|_|\\___| |_| |_|\\__,_| \\_/ \\__,_|_|\\___|\n");
    printf("            .\n"
           "            |\\\n"
           "            | \\\n"
           "            |  \\\n"
           "            |   \\\n"
           "            |    \\\n"
           "            |     \\\n"
           "            |      \\\n"
           "            |       \\       ____O\n"
           "            |        \\     .' ./\n"
           "            |   _.,-~\"\\  .',/~'\n"
           "            <-~\"   _.,-~\" ~ |\n"
           "^\"~-,._.,-~\"^\"~-,._\\       /,._.,-~\"^\"~-,._.,-~\"^\"~-,._\n"
           "~\"^\"~-,._.,-~\"^\"~-,._.,-~\"^\"~-,._.,-~\"^\"~-,._.,-~\"^\"~-,._\n"
           "^\"~-,._.,-~\"^\"~-,._.,-~\"^\"~-,._.,-~\"^\"~-,._.,-~\"^\"~-,._\n"
           "~-,._.,-~\"^\"~-,._.,-~\"^\"~-,._.,-~\"^\"~-,._.,-~\"^\"~-,._");
    printf("\n");
    printf("\n");
    system("pause");


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

    scanf("%d", &menuValue);


    if (menuValue == 1) {
        system("cls");
        printf("Vous accedez au menu de jeu..");
        int i = 0;

        puts("\nChargement des ressources en cours...\n");

        for (; i < 20; i++) {
            printf("#");
            Sleep(200);
        }
        system("cls");
        puts("\n\nBienvenue !\n");

        getchar();
    }
    if (menuValue == 2) {
        system("cls");
        printf("Vous accédez au menu d'aide...");
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
               "\\_| |_/\\__,_|_|  \\___| \\_/ \\___/|_|_| ");
        system("\n\nexit");
    }

    if (menuValue > 4) {
        printf("Le nombre que vous venez d'inserer n'est pas le bon, veuillez reessayer.");
    }
}while(menuValue>4);

/*   do {
       scanf("%d", &menuValue);

        switch (menuValue) {
            case 1:
                system("cls");
                printf("Jouer");
                break;

            case 2:
                system("cls");
                printf("menu d'aide");
                break;

            case 3:
                system("cls");
                printf("Meilleurs scores");
                break;

            case 4:
                system("cls");
                printf("Aurevoir");
                break;

            default:
                printf("\nLe nombre selectionner n'est pas le bon, veuillez en rentrer un autre !");
                break;
        }
    } while (menuValue < 4);
*/


    system("pause");
    return 0;

}