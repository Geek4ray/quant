#IFNDEF __SIMPLE_MATRIX_H
#DEFINE __SIMPLE_MATRIX_H

#include <vector>

template <typename Type = double> class SimpleMatrix {
	
	private:
		vector<vector<Type>> > mat;// use a vector of vectors to store values

	public:
		SimpleMatrix();  //Default Constructor

		//Constructor specfying #rows, #columns and a default type value
		SimpleMatrix(const int& rows, const int& cols, const Type& val); //Parameter Constructor

		//copy constructor
		SimpleMatrix(const SimpleMatrix<Type>& _rhs);

		//Assignment operator overloaded
		SimpleMatrix<Type>& operator= (const SimpleMatrix<Type>& _rhs);

		virtual ~SimpleMatrix(); //Destructor


		//Access to the matrix values directly, via row and colum indices 
		vector<vector<Type> > get_mat() const;
		Type& value(const int&row, const int&col); 

};


#ENDIF	