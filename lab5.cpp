#include <iostream>
using namespace std;

int funkcja1(int a)
{
  if (a==0) return 0;
  else return a + funkcja1(a - 1);

}

int main()
{

cout << funkcja1(4);

}

#include <iostream>
using namespace std;

void zamiana(int liczba)
{
 if (liczba > 0)
  zamiana(liczba/2);
 cout<< liczba % 2;

}

int main(){


for(int i = 0; i <10; i++)
{
    cout<< i << " >>> " ; zamiana(i); cout << endl;
}

}


#include <iostream>
using namespace std;

int nwd(int a,int b){
     
     if(b!=0)
     return nwd(b, a % b);

     return a;

}
int main () {
   
   cout<< nwd(12,6);
   cout<< endl;

}




#include <iostream>
using namespace std;

int ciag(int n){
     
  if (n==0)
  return 0;
  if (n<3)
  return 1;
  return ciag(n-2) + ciag(n-1);
}
int main () {
   
   for(int i=0;i<10;i++)
   {
       cout << i << "  " << ciag(i);
   }
}




#include <iostream>
using namespace std;


int main()
{
int n; 
cin >> a;
 int* ptr;
 ptr = &a;

 cout<<"Adres : " << ptr;
 cout << endl << "wartosc = " << *ptr << endl;


 (*ptr)++;
 
  cout<<"Adres : " << ptr;
 cout << endl << "wartosc = " << *ptr << endl;


}