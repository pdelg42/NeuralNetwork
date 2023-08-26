#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Gene {
	private:
		uint rawGenomeData;
	public:
	//	Constructors
		Gene();
		~Gene();
		Gene( Gene &cpy);
		Gene( unsigned int value );
	
	//	END Constructors

	//	Obj Methods
	//	END Obj Methods
	
	//	Static Methods
	//	END Static Methods

	//	Operators
		void operator=( Gene &cpy ); 
	
	//	END Operators
};

class Brain {
	private:
		Gene	**genome;
	public:
	//	Constructors
		Brain();
		~Brain();
		Brain( Brain &cpy);
		Brain( int n_genomes );
	
	//	END Constructors

	//	Obj Methods
	//	END Obj Methods
	
	//	Static Methods
	//	END Static Methods

	//	Operators
		void operator=( Brain &cpy ); 
	
	//	END Operators
};

#endif /* BRAIN_HPP */