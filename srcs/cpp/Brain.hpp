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
	
	//	Obj Methods
		virtual string	getType() const = 0;
	
	//	Static Methods

	//	Operators
		virtual void	operator=( Node &cpy ) = 0; 
	
};

class InputNode : public Node {
	public:
	//	Constructors
		InputNode();
		~InputNode();

	//	Obj Methods
		string	getType() const;
	
	//	Static Methods

	//	Operators	
};

class OutputNode : public Node {
	public:
	//	Constructors
		OutputNode();
		~OutputNode();

	//	Obj Methods
		string	getType() const;
	
	//	Static Methods

	//	Operators	
};

class InnerNode : public Node {
	public:
	//	Constructors
		InnerNode();
		~InnerNode();

	//	Obj Methods
		string	getType() const;
	
	//	Static Methods

	//	Operators	
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

	//	Obj Methods
		uint	getData();
	
	//	Static Methods
		static uint	create( uint value );
		static uint	createRandom();

	//	Operators
		void	operator=( Gene &cpy ); 
	
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

	//	Obj Methods
		void	printGenome();
		Gene	**getGenome();
	
	//	Static Methods

	//	Operators
		void	operator=( Brain &cpy ); 
	
};

#endif /* BRAIN_HPP */