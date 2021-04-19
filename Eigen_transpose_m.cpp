#include <iostream>
#include "Eigen/Dense"

int main()
{

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	// Declare a 3X3 matrix with random entries

	Eigen :: Matrix3d  p = Eigen :: Matrix3d :: Random(3,3);

	//Output the transpose of p
	std::cout<< "p^T = "<<p.transpose() << std::endl;

	p.transposeInPlace();

	//Output InPlace Transpostion of p
	std::cout << "p^T = "<< p <<std::endl;



	return 0;
}