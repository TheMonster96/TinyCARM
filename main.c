#include <stdio.h>
#include <string.h>
#include "lib.h"

//LEXER 





int main(){


      
  char text[50];
  
  fgets(text, 50, stdin);;
                                             

  
  printf("CODE \n");
  printf("%s \n", text);
  


 //rimuovi newline
  remove_newline(text);


  //controllo se la stringa è vuota
  if(text[0]=='\0'){
    printf("token trovati 0 \n");
    return 0;
  }


  //conta parole (passiamo la stringa e il contatore)
  tokenizer(text);

  return 0;
}