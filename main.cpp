#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
 
int main ()
{
srand(time(NULL));
const int size = 20000;
   int a[size];
   int start_time;
   int search_time;
 
 cout<< "\n" <<endl;
   
   for (int i=0; i<size; ++i)
{
  a[i] = rand();
    cout<< a[i] << "\t";
}
   start_time = clock();
 
int key;
cout<< "\n" << "Enterkey --> ";
cin>>key;
 
bool temp = false;
for (int i=0; i<size; ++i)
{
if (key == a[i]){
cout<< "Resultis - " << i <<endl;
temp = true;
break;
}
}
 
if (!temp)
cout<< "Notfound :( " <<endl;
search_time = clock() - start_time;

	std::cout << search_time << "\n";
 
 
_getch();
return 0;
}
