#include <iostream>
using namespace std;

int compareValueAndPointer(int value, int* pointer);
void switchIntPointor(int* ptr0, int* ptr1);

void print(const int ia[10])
{
	for(size_t i = 0; i != 10; ++i)
	{
		cout<<ia[i]<<endl;
	}
}

int main()
{
	int a[] = {1,2,5,6,7,4,56,7,2,5};
	print(a);
}

int compareValueAndPointer(int value, int* pointer)
{

	if(value >= (*pointer)) return value;
	else return (*pointer);

}

void switchIntPointor(int* ptr0, int* ptr1)
{
	int tmp = *ptr0;
	*ptr0 = *ptr1;
	*ptr1 = tmp;
	cout<<"in  ptr0="<< ptr0 << "  ptr1=" << ptr1 << endl;
}