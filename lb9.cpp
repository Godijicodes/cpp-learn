#include<iostream>
#include<cmath>
#include<algorithm>
typedef double num_t; 
int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	num_t x, y, z, w, u, v, a, b, m, n;
	cout<<"value of first number "<<endl;
	cin>>x;
	cout<<"value of seond number"<<'\n';
	cin>>y;
	z = std::max(x,y);
	w = std::min(x,y);
	u = pow(x,y);
	v = sqrt(x*y);
	a = round(x/y);
	b = ceil(x/y);
	m = floor(x/y);
    n = abs(x-y);
	cout<<"value after all the operations are as follows "<<z<<"_"<<w<<"_"<<u<<"_"<<v<<"_"<<a<<"_"<<b<<"_"<<m<<"_"<<n;
	return 0;
}			
