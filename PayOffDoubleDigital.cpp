//Constructor with 2 strike parameters, upper and lower barrier

PayOffDoubleDigital :: PayOffDoubleDigital(const double _U, const double _D){

	U=_U;
	D=_D;


}

// overridden operator() method, which turns
// PayOffDoubleDigital into a function object

double PayOffDoubleDigital :: operator() (const double S) const{

	if(S>=D && S<=U){
		return 1.0;
	}
	else{
		return 0.0;
	}
}