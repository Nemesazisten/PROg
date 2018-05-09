#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{

int szo=0;
int sor=0;
int betu=0;
int szam=0;
int spec=0;

ifstream in("szoveg.txt");
char current;
while(in.get(current))
}

if(current == ' ' ||current=='\n'||current=='\t')
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
cout<<sor<<" sor" <<szo<<" szo" <<betu<<" betu" <<szam<<" szam" <<spec<<" speciális karakter";
} 

