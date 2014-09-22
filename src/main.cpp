#include <iostream>
#include "Point.h"
using namespace std;

int main(){
	cout << "Hi " << endl;
	Point *A = new Point(1.0, 3.0);
	Point *B = new Point(2.0, 3.0);

	cout << A->getX() << endl;


	return 0;
}
