#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream temperaturos("temperaturos.txt");
	ofstream vidutines("vidutines.txt");

	float suma; float laikinas; int miestai;
	temperaturos >> miestai;
	for(int i = 0; i < miestai; i++)
	{
    	suma = 0;
    	for(int g = 0; g < 7; g++)
    	{
        	temperaturos >> laikinas;
        	suma += laikinas;
    	}
    	vidutines << i << " " << fixed << setprecision(3) << suma / 7 << endl;
	}
	return 0;
}
