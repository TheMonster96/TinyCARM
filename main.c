#include <stdio.h>
#include <string.h>

//LEXER 

enum token_type {
  ID,
  ASSIGN_INTVAL,
  SEMICOLON
};


struct token {
  enum token_type type;
};



int main(){

  
  
  char text[50];
  
  fgets(text, 50, stdin);;
  

  
  printf("CODE \n");
  printf("%s", text);
  
  


}
