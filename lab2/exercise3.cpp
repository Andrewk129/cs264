#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::vector;
using std::sort;
using std::streamsize;
using std::string;
int main() {
	cout << "Please enter strings seperated by a space: ";
	int min, max, mincount, maxcount;
	min = 100;
	string input, mintest, maxtest, smax, smin;
	cin >> input;
	for(int i=0;i<input.length();i++)
	{
		if(input[i]=' ')
		{	
			cout<< "Test1";
			if(mincount < min)
			{
				cout<<"Test2";
				min = mincount;
				smin = mintest;
			}
			else if(maxcount > max)
			{
				cout<<"Test3";
				max = maxcount;
				smax = maxtest;
			}
			cout << "Test4";
			mintest.clear();
			maxtest.clear();
			mincount = 0;
			maxcount = 0;
		}
		else
		{
			cout<<"Test5";
			maxtest = maxtest + input[i];
			mintest = mintest + input[i];
			mincount ++;
			maxcount ++;
		}
	}
	cout<<"Test6";
	cout << endl << "Smallest word is: " + smin + " of size: ";
	cout << min << endl;
	cout << endl<< "largest word is: " + smax + " of size: ";
	cout << max << endl;
	
	

}
