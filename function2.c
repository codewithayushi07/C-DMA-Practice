#include<stdio.h>
void printNamaste();
void printBonjour();
int main(){
  char user;
    printf("Enter the user nationality\n",user);
  scanf("%c",&user); 
  if (user == 'f'){
    printf("Bonjour");
}
else {
  printf("Namaste");
  }
  return 0;
  }
void printNamaste(){
printf("Namaste");
}
void printBonjour(){
  printf("Bonjour");
}
