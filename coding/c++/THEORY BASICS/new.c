#include <stdio.h>
#include <math.h>
int main(){
char ch;
ch = getchar();
ch = (ch>='A')&&(ch<='Z')?ch:'A'+ch-'a';
printf("%c",ch);
}