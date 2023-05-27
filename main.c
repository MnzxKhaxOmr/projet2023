#include "bibliotheque.h"
#include "nomfct.h"

int main(){
  int role = 0;
  int choixmenu;
  

printf("$$$$$$  |$$ | /$$/|$$ |      $$       /$$|      /$$$$$$  |$$ |  $$ |/$$$$$$  |$$$$$$$ |\n");
printf("$$ |  $$ |$$ |/$$/ |$$ |      $$$     /$$ |      $$  __$$/|$$ |__$$ |$$ |  $$ |$$ |__$$ |\n");
printf("$$ |  $$ |$$ $$<   |$$ |      $$$$  /$$$$ |      $$       |$$    $$ |$$ |  $$ |$$    $$/ \n");
printf("$$ |  $$ |$$ $$    |$$ |      $$ $$ $$/$$ |       $$$$$$  |$$$$$$$$ |$$ |  $$ |$$$$$$$/ \n");
printf("$$ <__$$ |$$ |$$   |$$ |_____ $$ |$$$/ $$ |      /   ___$$|$$ |  $$ |$$ ___$$ |$$ |  \n");   
printf("$$    $$/ $$ | $$  |$$       |$$ | $/  $$ |      $$    $$/ $$ |  $$ |$$    $$/ $$ |\n");      
printf(" $$$$$$/  $$/   $$/ $$$$$$$$/ $$/      $$_/       $$$$$$/  $$/  $$/ | $$$$$$/  $$/ \n");     
 printf("\n");
  printf("\n");
  printf("                     .........𝑺𝒐𝒚𝒆𝒛 𝒗𝒐𝒖𝒔-𝒎ê𝒎𝒆𝒔 !..............\n");
  
  
 role = login();

    if (role == 1) {
        do {
            printf("Bonjour, à quel menu voulez-vous accéder ? 1. Menu client ou 2. Menu gestion\n");
            scanf("%d", &choixmenu);
          void cleanBuffer();
        } while (choixmenu != 1 && choixmenu != 2);
        
        switch (choixmenu) {
            case 1:
                menu1(); 
                break;
            case 2:
                menu2(); 
                break;
        }
    } else if (role == 2) {
        menu1(); 
    }      
    return 0;
}
