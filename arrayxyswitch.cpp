
#include <iostream>

using namespace std;




int main(int argc , const char * argv[]) {


int x=atoi(argv[1]);
int y= atoi(argv[2]);
int a[16]= {3,9,1,2,10,8,4,5,2,3,7,4,6,5,9,8};

for (int i = 0; i < 16; i++)
{
if (a[i]==x)
{
    a[i]=y;
}
cout<<a[i]<<" ";
}


return 0;
}