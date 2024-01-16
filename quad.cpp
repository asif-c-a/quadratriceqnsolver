#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, d, root1, root2;

	cout << "Enter the coefficients of the quadriatic equation\na = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	if (a == 0)
	{
		cout << "Coefficient a cannot be zero.";
	}
	else
	{
		d = b*b-4*a*c;

		if (d > 0)
		{
			root1 = (-1*b + sqrt(d)) / (2*a);
			root2 = (-1*b - sqrt(d)) / (2*a);

			cout << "Roots are real and unique. The roots are "<< root1 << " & " << root2; 

		}
		else if(d == 0)
		{
			root1 = (-1*b + sqrt(d)) / (2*a);


			cout << "Roots are real but equal. The root is "<< root1;
		}
		else
		{
			double roota, rootb;
			d = d * -1;

			roota = (-1*b) / (2*a);
			rootb = sqrt(d) / (2*a);

			cout << "Roots are complex and imaginary. The roots are "<< roota <<" + "<< rootb <<"i & "<< roota <<" - "<< rootb <<"i";		
		}
	}

	return 0;
}