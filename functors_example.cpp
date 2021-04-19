#include <iostream>

//Abstract base calss (it cannot be instantiated as it its abstract class)
class BinaryFunction{
public:
	BinaryFunction(){};
	virtual double operator() (double left, double right) = 0;


};


//Add two doubles 
class Add : public BinaryFunction{
public:
	Add(){};
	virtual double operator() (double left, double right) {
		return left+right;
	}

};


class Multiply : public BinaryFunction{
public:
	Multiply(){};
	virtual double operator() (double left, double right) {
		return left*right;
	}

};


//Now we define a custom function
double binary_op(double left, double right, BinaryFunction* bin_func)
{
	return (*bin_func)(left,right);
}




int main()
{
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif


	double a= 5.0;
	double b = 10.0;


	BinaryFunction *pAdd = new Add();
	BinaryFunction *pMultiply = new Multiply();
	std::cout<<"Add: "<<binary_op(a,b,pAdd)<<std::endl;
	std::cout<<"Add: "<<binary_op(a,b,pMultiply)<<std::endl;

	
	
	return 0;
}
