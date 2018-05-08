//tutor Kalmar patrik
#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

int main(){

	ifstream fin;
	fin.open("üzenet");
	
	char ch;

	int betu = 0;
	int sor = 0;
	int szam = 0;
	int space = 0;
	int spec = 0;
int szo = 0;

	while ((ch = getchar()) != EOF) {
 		if(ch == ' ' || ch == '\t'){
			space++;
		}	
		if(isalpha(ch)){
			betu++;
		}
		if(isdigit(ch)){
			szam++;
		}
		if(ch == '\n'){
			sor++;
		}
		if(ispunct(ch)){
			spec++;
}
if (ch == ' ' || ch == '\t' || ch == '\n') {
szo++;
	}
    }

    if (ch != '\n') {
        sor++;
    }

    printf("Sor, Szó, Betű, Szóköz, Szám, Egyéb írásjel\n");
    printf(" %2d %4d %5d %5d %5d %9d\n", sor, szo, betu, space, szam, spec);
}
