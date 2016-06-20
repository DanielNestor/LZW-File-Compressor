#include <stdio.h>

//add function prototypes here

int main(){

char input[20];
int bin_char;

printf("enter the name of the file you want to compress:\n");
scanf("%s",input);
FILE * fp;
fp = fopen(input,"r+");



while(1){
bin_char = fgetc(fp);
printf("The binary char is %c\n",bin_char);

}





//return 0;
}