#include <cstring>
#include <iostream>
#include <cctype>
#include<iomanip>
#include <stdlib.h>     
using namespace std;




int main() {

char *origin ;
cin>> origin;
int l = strlen(origin+1);
char *inverse = new(l * sizeof(char));
char *end_origin = origin;
char *inv_ptr = inverse;
while( *(end_origin + 1) != '\0' )
{
end_origin++;
}
for( ; end_origin >= origin; end_origin--, inverse++)
{
*inverse = *end_origin;
Operazioni sulle stringhe 2011/2012 Pagina 35
Unità 8
}
*inverse = '\0';
printf("%s\n", inv_ptr);
return EXIT_SUCCESS;
}