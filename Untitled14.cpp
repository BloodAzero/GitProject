#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
const float e = 0.001;
float x,a, S = 0; 
int i=16, k = 1, fact = 1;
cout << "Vvedit x:"; 
cin>> x; 
a=sin(abs(k))/0.1+9.4*sin(3*k-2.5);
while (fabs(a) > e)	
{
a=pow((-1),k)*((sin(abs(k))/0.1+9.4*sin(3*k-2.5))*pow(x,k)/fact);
S+= a;
k++;
fact*= k;
}
cout.precision(2);
cout << "S = " << S << "\n";
cout << "number of terms = " << k;
getch();
}
