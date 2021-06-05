/* sinh example */
#include <stdio.h>      /* printf */
#include <math.h>       /* sinh, log */
#include <conio.h>	/* _getch() */

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double param, result;
	
	param = log(2.0);
	result = sinh(param);
	
	printf("The hyperbolic sine of %f is %f.\n", param, result);

	_getch();
	return 0;
}