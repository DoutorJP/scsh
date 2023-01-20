#ifndef HISTORY
#define HISTORY
void send_to_history(char* cmd){
  FILE* history = fopen(".history", "a+");
  fprintf(history, "%s", cmd);
  fclose(history);
}

void list_history(){
  FILE* history = fopen(".history", "a+");
  char* buffer = (char*)malloc(10*sizeof(char));
  int i = 0;
  while(fscanf(history, "%[^\n] ", buffer) != EOF){
	printf("%d %s\n", i, buffer);
	i++;
  }
}


#endif 
