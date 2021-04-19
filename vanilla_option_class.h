#ifndef __VANILLA_OPTION_H
#define __VANILLA_OPTION_H




class VanillaOption{

private:
	void init();
	void copy(const VanillaOption& rhs);

	double K; //Strike Price
	double r; //Risk-Free Rate
	double T; //Maturity Time
	double S; //Underlying Asset Price
	double sigma //VOlatality of the Underlying Asset


public:
	VanillaOption(); //Default Constructor -- has no parameters
	VanillaOption(const double& _K, const double& _r, 
				  const double& _T, const double& _S,
				  const double& _sigma); //Parameter Constructor

	VanillaOption(const VanillaOption& rhs)  //Copy Constructor
	VanillaOption& operator=(const VanillaOption& rhs) //Assignment Operator
	virtual ~VanillaOption(); //Destructor is Virtual

	// Selector ("getter") methods for our option parameters
	double getK() const;
	double getr() const
;	double getT() const;
	double getS() const;
	double getsigma() const;

	//Option Price Calculation Methods
	double calc_call_price() const;
	double calc_put_price() const;




}




#endif