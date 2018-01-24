#include <iostream>
#include <cmath>
using namespace std;

double findKineticEnergy(double m, double v )
{
	double E = (0.5)*m*(pow(v,2));
	return E;
}

int main()
{
	double m, v;
	cout << "m = ";
	cin >> m;
	cout << "v = ";
	cin >> v;
	cout << "findKineticEnergy = " << findKineticEnergy(m, v);
}
