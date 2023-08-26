#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

using namespace std;

class Node {
	protected:
		string	type;
	public:
	//	Constructors
		Node();
		~Node();
		// Node( Node &cpy);
		// Node( unsigned int value );
	
	//	END Constructors

	//	Obj Methods
		virtual string	getType() const = 0;

	//	END Obj Methods
	
	//	Static Methods
	//	END Static Methods

	//	Operators
		virtual void	operator=( Node &cpy ) = 0; 
	
	//	END Operators
};

class InputNode : public Node {
	public:
	//	Constructors
		InputNode();
		~InputNode();

	//	END Constructors

	//	Obj Methods
		string	getType() const;

	//	END Obj Methods
	
	//	Static Methods
	//	END Static Methods

	//	Operators	
	//	END Operators
};

class OutputNode : public Node {
	public:
	//	Constructors
		OutputNode();
		~OutputNode();

	//	END Constructors

	//	Obj Methods
		string	getType() const;

	//	END Obj Methods
	
	//	Static Methods
	//	END Static Methods

	//	Operators	
	//	END Operators
};

class InnerNode : public Node {
	public:
	//	Constructors
		InnerNode();
		~InnerNode();

	//	END Constructors

	//	Obj Methods
		string	getType() const;

	//	END Obj Methods
	
	//	Static Methods
	//	END Static Methods

	//	Operators	
	//	END Operators
};


class Gene {
	private:
		uint	rawGenomeData;
	public:
	//	Constructors
		Gene();
		~Gene();
		Gene( Gene &cpy);
		Gene( unsigned int value );
	
	//	END Constructors

	//	Obj Methods
		uint	getData();

	//	END Obj Methods
	
	//	Static Methods
		static uint	create( uint value );
		static uint	createRandom();

	//	END Static Methods

	//	Operators
		void	operator=( Gene &cpy ); 
	
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
		void	printGenome();
		Gene	**getGenome();

	//	END Obj Methods
	
	//	Static Methods
	//	END Static Methods

	//	Operators
		void	operator=( Brain &cpy ); 
	
	//	END Operators
};

#endif /* BRAIN_HPP */