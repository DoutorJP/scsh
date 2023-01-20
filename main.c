#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "src/history.h"



int main(int argc, char** argv){
  char* command = (char*)malloc(10*sizeof(char*));
  while(1){
	printf("$ ");
	fflush(stdin);
	fgets(command, (10*sizeof(char*)), stdin);
	fflush(stdin);
	
	if((strncmp(command, "exit", 4))==0)
	  return 0;
	else{
	  send_to_history(command);
	  if(strncmp(command, "history", 7)==0)
		list_history();
	  else{
	  system(command);
	  }
	  
	}
 
  }		
}

