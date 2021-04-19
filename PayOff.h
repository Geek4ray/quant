#include <algorithm>

class PayOff{

public:
	Payoff() {}; //Default (no parameter) constructor
	virtual ~Payoff() {}; //Virtual Destructor

	//Overloaded Operator(), turns the payoff into an abstract function object
	virtual double operator() (const double S) const = 0; //Pure Virtual Method
};



class PayOffCall : public PayOff {
// The first type of option we wish to create is a European Vanilla Call Option. 
//PayOffCall is an inherited subclass of PayOff. It requires greater detail than provided in the
//abstract base class. In particular we need to implement the pay-off function for a vanilla European
//call option.

private:
	double K; //Strike Price

public:
	PayOffCall(const double K_) {};  //No default constructor
	virtual ~PayOffCall() {}; //Destructor Virtual for further inheritance

	//Virtual functio is now overidden (not pure-virtual anymore)
	virtual double operator() (const double S) const;   //Payoff is max(S-K,0)



};

class PayoffDoubleDigital : public Payoff{

private:
	double U; //upper strike price
	double D; //lower strike price

public:
	//two strike parameters
	PayoffDoubleDigital(const double _U, const double _D);
	virtual ~PayoffDoubleDigital();

	//Payoff is 1 if spot within strike bariesr, 0 otherwise
	virtual double operator () (const double S) const;
};

// Please note that PayOFf is an abstrace base class 
//and hence does not need and implementation in the source file
//as it is never actually instantiated. However, the remaining payoff subclasses
// do require implementation.
