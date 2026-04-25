
#include <iostream>
#include "Comp.h"
using namespace std;
int main()
{
	Comp comp1("Comp1", 3.5, 16, true, 1200);
	Comp comp2("Comp2", 2.8, 8, false, 800);
	Comp comp3("Comp3", 4.0, 32, true, 2000);
	Comp comp4("Comp4", 3.0, 16, false, 1000);
	Comp comp5("Comp5", 3.2, 8, true, 900);
	vector <Comp> arr = { comp1, comp2, comp3, comp4, comp5 };
	for (Comp a : arr) a.print();
	cout << endl;
	string userName = "Comp1";
	//vector<Comp>::iterator it;
	auto it = find_if(arr.begin(), arr.end(), [userName](Comp a) {return a.getName() == userName; });
	if (it != arr.end()) {
		cout << "Компьютер найден: " <<endl;
		it->print();
	}
	auto min =min_element (arr.begin(), arr.end(), [](Comp a, Comp b) {return a.getChastota() < b.getChastota(); });
	cout << "Min Comp: " << endl;; min->print(); cout << endl;
	arr.erase(min); cout << "Delete" << endl;;
	for (Comp a : arr) a.print();

    
    return 0;
}

