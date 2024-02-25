#include <stdio.h>
#include <string.h>
void transfer(int x, char text[]) {
int length=strlen(text);
for(int i=0;i<length; i++){
if ((text[i]>='a' && text[i]<='z')||(text[i]>='A' && text[i]<='Z')) {
if (text[i] >='a'&& text[i]<='z') {
text[i]='a'+((text[i]-'a'+x)%26);
} else {
text[i]='A'+((text[i]-'A'+x)%26);
}}}}
void decode(int x, char text[]){
int length=strlen(text);
for (int i=0;i<length;i++) {
if ((text[i]>='a' && text[i] <='z')||(text[i]>='A' && text[i]<='Z')) {
if (text[i] >= 'a' && text[i] <='z') {
text[i] ='a'+((text[i]-'a'- x + 26) % 26);
} else {
text[i] ='A'+((text[i]-'A'- x + 26) % 26);
}}}}
int main() {
char texte[100];
int x;
printf("Enter the text: ");
scanf("%s", texte);
printf("Enter the number: ");
scanf("%d", &x);
transfer(x, texte);
printf("Modified text: %s\n", texte);
printf("Enter the text: ");
scanf("%s", texte);
printf("Enter the number: ");
scanf("%d", &x);
decode(x, texte);
printf("Modified text: %s\n", texte);
return 0;
}