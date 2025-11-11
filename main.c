#include <stdio.h>
#include <string.h>
#include "lib.h"

//LEXER 

enum token_type {
  ID,
  ASSIGN,
  NOT_ASSIGN,
  SEMICOLON,
  INTVAL
};


struct token {
  enum token_type type;
};



int main(){


  int num_token = 0;          //variabile contatore token
  char text[50];
  
  fgets(text, 50, stdin);;
                                            //ci siamo 

  
  printf("CODE \n");
  printf("%s", text);



 //rimuovi newline
  remove_newline(text);


  //controllo se la stringa è vuota
  if(text[0]=='\0'){
    printf("token trovati 0 \n");
    return 0;
  }


  //conta parole (passiamo la stringa e il contatore)
  token_count(text, num_token);

  return 0;
}
