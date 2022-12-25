#include <iostream>
using namespace std;
main() { 

int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
int sum;
int subtract;
int multiplies;
int total;

cout << " Enter first number ";
cin >> a;
cout << " Enter second number ";
cin >> b;
cout << " Enter third number ";
cin >> c;
cout << " Enter fourth number ";
cin >> d;
cout << " Enter fifth number ";
cin >> e;
cout << " Enter sixth number ";
cin >> f;
cout << " Enter seventh number ";
cin >> g;
cout << " Enter eightht number ";
cin >> h;
cout << " Enter nineth number ";
cin >> i;
cout << " Enter tenth number ";
cin >> j;
cout << " Enter eleventh number ";
cin >> k;
cout << " Enter Tweleveth number ";
cin >> l;
cout << " Enter thirteen number ";
cin >> m;
cout << " Enter fourteen number ";
cin >> n;
cout << " Enter fifteen number ";
cin >> o;

sum = a+b+c+d+e;
multiplies = f*g*h*i*j;
subtract = k-l-m-n-o;
total = (sum + multiplies)- subtract;
cout << "total " << total;
}