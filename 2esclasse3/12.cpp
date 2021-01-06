
#include <iostream>

using namespace std;




int main(int argc , const char * argv[]) {
const char * s=argv[1];
if(argc!=2)
{   cout<< "errore: un argomento deve essere dato"<<endl;

return -1;
}
int x=  atoi(argv[1]);
int n= argc-2;
int *a= new int [argc-2];
for (int i = 0; i < argc-2; i++)
{
  a[i]=atoi(argv[i+2]);
}
for (int i = 0; i < n  ; i++)
{
    if (a[1]=x)
{    cout<<true;
    return 0;
}
}
cout<<false;

delete[] a;
return 0;
}
