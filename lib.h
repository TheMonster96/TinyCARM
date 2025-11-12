#include <stdio.h>
#include <string.h>

//funzione rimozione newline
void remove_newline(char text[]){
  int len = strlen(text);
  if(len>0 && text[len-1]=='\n'){
    text[len-1] = '\0';
  }
}



//funzione conta token
void token_count(char text[], int contatore){
  unsigned short in_word = 0;   //0 = fuori parola; 1 = dentro la parola


    for(int i=0; text[i]!='\0'; i++){
    if(text[i] != ' '){     //caso in cui siamo in una parola, dunque switchiamo in_word a 1
      if(in_word == 0){
        contatore ++;
        in_word = 1;
      }
    }
      else{                 //caso in cui siamo in uno spazio(fuori parola), e switchiamo in_word a 0
        in_word = 0;
      }
    
  }
 printf("numero token: %d", contatore);
}
