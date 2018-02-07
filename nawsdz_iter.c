#include <stdio.h>
#include <stdlib.h>

int nwd(int a, int b) 
{
	int c;
    while (b != 0)
    {
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}

void pokaz_nwd(int a, int b)
{
	if(a||b)	// jeśli jedna lub obie cyfry są różne od zera...
		printf("%d\n",nwd(abs(a),abs(b)));
	else		// .. jeśli obie cyfry są równe 0
		printf("nie mozna wyznaczyc wspolnego dzielnika\n");
}

int main()
{
    int a, b;

	printf("Obliczanie NWD \n");

	printf("Pierwsza: ");
	scanf("%d", &a);
	printf("%t Druga: ");
	scanf("%d", &b);
	printf("najwiekszy wspolny dzielni (%d %t,%d) = ", a, b);
	pokaz_nwd(a,b);
	
    return 0;
}
