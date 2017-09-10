#include <stdio.h>


#define TRUE 1
#define FALSE 0
char *find_char (char const *source, char const *chars);
int main(){ 
  printf("%s\n", find_char("This is cool, huhQ?", ""));

}

char *find_char(char const *source, char const *chars){
  if(source ==NULL || chars == NULL){
    return NULL;
  }
  static char returned;
  char const *pos;
  char const *chars_pos;
  for(pos = source; *pos != '\0'; pos++){
    for(chars_pos = chars; *chars_pos !='\0'; chars_pos++){
      if(*chars_pos == *pos){
	returned = *pos;
	return &returned;
      }
    }
  }
  
  
    return NULL;
}

