#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Buffer tipologia token
char* type[] = {"int", "=", ";"};






//funzione rimozione newline
void remove_newline(char text[]){
  int len = strlen(text);
  if(len>0 && text[len-1]=='\n'){
    text[len-1] = '\0';
  }
}



//la funzione recognization, individua la tipologia del token esaminato.
//il parametro da passare sarà token.
void recognization(char* str){
  char* endptr;

  if(str != NULL){
    if(strcmp(str, "int") == 0){
      printf("INT \n");
    }

    else if(strcmp(str, "=") == 0){
      printf("EQUALS \n");
    }

    else if(strcmp(str, ";") == 0){
      printf("SEMICOLON \n");
    }

    /*else if(strtol(str, &endptr, 10) == 0){
      printf("INTVAL \n");
    }*/

    else{
      strtol(str, &endptr, 10);
      if(*endptr == '\0'){
        printf("INTVAL \n");
      }
      else{
      printf("ID \n");
      }
    }
  }
}



//funzione conta token
//attraverso la funzione strtok(), a cui prima del ciclo passiamo il text(ovvero il codice da cui prendere i token) e successivamente
//dentro il ciclo passiamo NULL(modo per continuare a splittare le sottostringhe continuando dall'ultima), andiamo a individuare
//i vari token. Gestione degli spazi inclusa.
void tokenizer(char text[]){
  char* token;
  int count = 1;
  
  token = strtok(text, " ");
  recognization(token);



  while(token != NULL){
  
    
    token = strtok(NULL, " "); 
    recognization(token);
  }

}