//andrew KEOGH 15309051
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
	int pos, neg;
	cout<< "Please enter a positive and a negative number: " << endl;
	cin >> pos >> neg;
	for(int i=pos; i>=neg; i--)
	{
		cout<< i << endl;
	}
}
