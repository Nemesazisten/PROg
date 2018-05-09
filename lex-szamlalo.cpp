#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{

int szo=0, sor=0, betu=0, szam=0, spec=0, sum;

ifstream in("szoveg.txt");
char current;
while((current= getchar()) != EOF) {
if(current==' '||current=='\n'||current=='\t')
   szo++;
if(current=='\n')
   sor++;
if(isalpha(current))
   szo++;
if(isdigit(current))
   szam++;
if(ispunct(current))
   spec++;
}
sum=betu+szam,spec;
cout<<sor<<" sor\n" <<szo<<" szo\n" <<betu<<" betu\n" <<szam<<" szam\n" <<spec<<" speciális karakter\n";
} 
