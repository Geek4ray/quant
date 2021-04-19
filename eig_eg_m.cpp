#include <iostream>
#include "Eigen/Dense"




int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    //Define 2 matrices, both 3X3:
    Eigen :: Matrix3d p;
	Eigen :: Matrix3d q;


	// Define two 3-dimensional vectors
	// The Constructor provides initialization

	Eigen :: Vector3d r(1,2,3);
	Eigen :: Vector3d s(4,5,6);


	//Use the << operator to fill the matrices
	p<<1,2,3,
	   4,5,6,
	   7,8,9;

	q<<10,11,12,
	   13,14,15,
	   16,17,18;


	// Output arthematic operations for matrices
	   std::cout << "p+q = \n"<<p+q<<std::endl;
	   std::cout << "p-q = \n"<<p-q<<std::endl;


	// Output arthematic operations for vectors
	   std::cout << "r+s = \n"<<r+s<<std::endl;
	   std::cout << "r-s = \n"<<r-s<<std::endl;






	// return 0;
}