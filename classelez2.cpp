
#include <iostream>

using namespace std;




int main(int argc , const char * argv[]) {
const char * s=argv[1];
if(argc!=2)
{   cout<< "errore: un argomento deve essere dato"<<endl;

return -1;
}
int i=0;

while (s[i]!='\0')
{
char c=s[i];    count==0;

while (s[i+count]==c)
{
    count++;

}
if (s[i+1]==c)
{
    count++
}
cout<<c<<count;



return 0;
}