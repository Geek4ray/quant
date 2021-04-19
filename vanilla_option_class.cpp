#ifndef __VANILLA_OPTION_CPP
#define __VANILLA_OPTION_CPP
#include "vanilla_option_class.h"
#inlcude <cmath>


class VanillaOption{

//Initializes the member data
	void VanillaOption::init() {  //implementation of the init method which is a helper method used by the 
								 // default constructor.
		K=100.0; //Strike is 100
		r = 0.05; //5% interest rate
		T=1.0; //One Tear until maturity
		S=100.0 //OPtion is at-the-monet as spot equals the strike
		sigma=0.2 //Volatality is 20%
	}


//Copies the member data
	void VanillaOption:: copy(const VanillaOption& rhs){  // copy method implementation

		K=rhs.getK();
		r=rhs.getr();
		T=rhs.getT();
		S=rhs.getS();
		sigma=rhs.getsigma();
	}


	VanillaOption :: VanillaOption() {init();}   //default constructor


	VanillaOption :: VanillaOption(const double& _K, const double& _r,  //parameter constructor
				  				   const double& _T, const double& _S,
				  				   const double& _sigma){
		K=_K; // _ is inserted to avoid copy of same variable name 
		r=_r; 
		T=_T;
		S=_S;
		sigma=_sigma;
	}

//Copy Constructor
	VanillaOption :: VanillaOption (const VanillaOption& rhs){

		copy(rhs);
	}

//Assignment Operator
	VanillaOption& VanillaOption :: operator=(const VanillaOption& rhs){

		if(this == &rhs) return *this;
		copy(rhs);
		return *this;
	}


//Destructor
VanillaOption :: ~VanillaOption() {
	//Empty, as the compiler does the work of cleaning up the simple types for us
}

};
 
 // Public access for the stirke price K, rate r.....etc.
double VanillaOption :: getK() const ( return K; )
double VanillaOption :: getr() const ( return r; )
double VanillaOption :: getT() const ( return T; )
double VanillaOption :: getS() const ( return S; )
double VanillaOption :: getsigma() const ( return sigma; )



double VanillaOption :: calc_call_price() const {
	double sigma_sqrt_t = sigma* sqrt(T);
	double d_1 = (log(S/K)+ T*(r+sigma*sigma*0.5))/sigma_sqrt_t;
	double d2 = d_1 - sigma_sqrt_t;
	return S*N(d_1) - K*exp(-r*T)*N(d_2); 
}


double VanillaOption :: calc_put_price() const {
	double sigma_sqrt_t = sigma* sqrt(T);
	double d_1 = (log(S/K)+ T*(r+sigma*sigma*0.5))/sigma_sqrt_t;
	double d2 = d_1 - sigma_sqrt_t;
	return K*exp(-r*T)*N(-d_2) - S*N(-d_1) ;

}





#endif	