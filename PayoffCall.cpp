// Please note that PayOFf is an abstract base class 
//and hence does not need and implementation in the source file
//as it is never actually instantiated. However, the remaining payoff subclasses
// do require implementation. 

// We will begin with PayOffCall


//Constructor with single strike parameter
PayoffCall :: PayOffCall(const double _K) {K=_K;}

//Destructor (no need to use "virtual" keyword in the source file)
PayOffCall :: ~PayoffCall() {}

//Over-ridden operator() method , which turns PayOffCall into a function object
double PayOffCall :: operator() (const double S) const {
	return std :: max(S-K,0.0); //Standard European Call PayOff
}