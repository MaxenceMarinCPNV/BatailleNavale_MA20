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

void jeux(){

}



int main() {
    SetConsoleOutputCP(CP_UTF8);
    int menuValue;
    int aideValue;
    SetConsoleTitle("Battre bateaux avec un super programme");
    printf("                    ____        _        _ _ _                               _      \n"
           "                   |  _ \\      | |      (_) | |                             | |     \n"
           "                   | |_) | __ _| |_ __ _ _| | | ___   _ __   __ ___   ____ _| | ___ \n"
           "                   |  _ < / _` | __/ _` | | | |/ _ \\ | '_ \\ / _` \\ \\ / / _` | |/ _ \\\n"
           "                   | |_) | (_| | || (_| | | | |  __/ | | | | (_| |\\ V / (_| | |  __/\n"
           "                   |____/ \\__,_|\\__\\__,_|_|_|_|\\___| |_| |_|\\__,_| \\_/ \\__,_|_|\\___|\n\n");
    printf("                        ()\n"
           "                        ||q',,'\n"
           "                        ||d,~\n"
           "             (,---------------------,)\n"
           "              ',       q888p       ,'\n"
           "                \\       986       /\n"
           "                 \\  8p, d8b ,q8  /\n"
           "                  ) 888a888a888 (\n"
           "                 /  8b` q8p `d8  \\              O\n"
           "                /       689       \\             |','\n"
           "               /       d888b       \\      (,---------,)\n"
           "             ,'_____________________',     \\   ,8,   /\n"
           "             (`__________L|_________`)      ) a888a (    _,_\n"
           "             [___________|___________]     /___`8`___\\   }*{\n"
           "               }:::|:::::}::|::::::{      (,=========,)  -=-\n"
           "                '|::::}::|:::::{:|'  .,.    \\:::|:::/    ~`~=\n"
           "                 '|}:::::|::{:::|'          ~\".,.\"~`~\n"
           "                   '|:}::|::::|'~`~\".,.\"\n"
           "               ~`~\".,.\"~`~\".,                 \"~`~\".,.\"~\n"
           "                              \".,.\"~`~                                                    Samwise");
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
    printf("\n5: Shrek.");
    printf("\n\n\n\n\n\n\n\n\n\nDISCLAIMER :\n Attention, ce programme est deconseille aux epileptiques ainsi qu'aux personnes presentant des troubles cardiaques");

    scanf("%d", &menuValue);


    if(menuValue == 5) {
        system("cls");
        system("color 25");
        printf(" .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n"
               "| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n"
               "| |    _______   | || |  ____  ____  | || |  _______     | || |  _________   | || |  ___  ____   | || |  _________   | || |  ________    | |\n"
               "| |   /  ___  |  | || | |_   ||   _| | || | |_   __ \\    | || | |_   ___  |  | || | |_  ||_  _|  | || | |_   ___  |  | || | |_   ___ `.  | |\n"
               "| |  |  (__ \\_|  | || |   | |__| |   | || |   | |__) |   | || |   | |_  \\_|  | || |   | |_/ /    | || |   | |_  \\_|  | || |   | |   `. \\ | |\n"
               "| |   '.___`-.   | || |   |  __  |   | || |   |  __ /    | || |   |  _|  _   | || |   |  __'.    | || |   |  _|  _   | || |   | |    | | | |\n"
               "| |  |`\\____) |  | || |  _| |  | |_  | || |  _| |  \\ \\_  | || |  _| |___/ |  | || |  _| |  \\ \\_  | || |  _| |___/ |  | || |  _| |___.' / | |\n"
               "| |  |_______.'  | || | |____||____| | || | |____| |___| | || | |_________|  | || | |____||____| | || | |_________|  | || | |________.'  | |\n"
               "| |              | || |              | || |              | || |              | || |              | || |              | || |              | |\n"
               "| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n"
               " '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n\n");
        printf("                                __...----..\n"
               "                             .-'           `-.\n"
               "                            /        .---.._  \\\n"
               "                            |        |   \\  \\ |\n"
               "                             `.      |    | | |        _____\n"
               "                               `     '    | | /    _.-`      `.\n"
               "                                \\    |  .'| //'''.'            \\\n"
               "                                 `---'_(`.||.`.`.'    _.`.'''-. \\\n"
               "                                    _(`'.    `.`.`'.-'  \\\\     \\ \\\n"
               "                                   (' .'   `-._.- /      \\\\     \\ |\n"
               "                                  ('./   `-._   .-|       \\\\     ||\n"
               "                                  ('.\\ | | 0') ('0 __.--.  \\`----'/\n"
               "                             _.--('..|   `--    .'  .-.  `. `--..'\n"
               "               _..--..._ _.-'    ('.:|      .  /   ` 0 `   \\\n"
               "            .'         .-'        `..'  |  / .^.           |\n"
               "           /         .'                 \\ '  .             `._\n"
               "        .'|                              `.  \\`...____.----._.'\n"
               "      .'.'|         .                      \\ |    |_||_||__|\n"
               "     //   \\         |                  _.-'| |_ `.   \\\n"
               "     ||   |         |                     /\\ \\_| _  _ |\n"
               "     ||   |         /.     .              ' `.`.| || ||\n"
               "     ||   /        ' '     |        .     |   `.`---'/\n"
               "   .' `.  |       .' .'`.   \\     .'     /      `...'\n"
               " .'     \\  \\    .'.'     `---\\    '.-'   |\n"
               ")/\\ / /)/ .|    \\             `.   `.\\   \\\n"
               " )/ \\(   /  \\   |               \\   | `.  `-.\n"
               "  )/     )   |  |             __ \\   \\.-`    \\\n"
               "         |  /|  )  .-.      //' `-|   \\  _   /\n"
               "        / _| |  `-'.-.\\     ||    `.   )_.--'\n"
               "        )  \\ '-.  /  '|     ''.__.-`\\  | \n"
               "       /  `-\\  '._|--'               \\  `.\n"
               "       \\    _\\                       /    `---.\n"
               "  LGB  /.--`  \\                      \\    .''''\\\n"
               "       `._..._|                       `-.'  .-. |\n"
               "                                        '_.'-./.'");
        int a;
        a=0;
        for (; a < 20; a++) {
            printf("");
            if((a%2) == 0){
                system("color 01");
            }else{
                system("color 25");
            }
            Sleep(20);
        }
        system("explorer https://media0.giphy.com/media/MDXomrcGshGso/giphy.gif");
        system("cls");

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