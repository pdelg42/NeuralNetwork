#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>

using namespace std;

class MapParser {
	private:
		string	none;
	public:
	//	Constructors
		MapParser();
		~MapParser();
		MapParser( MapParser &cpy);
		MapParser( unsigned int value );

	//	Obj Methods
	
	//	Static Methods
		static int	*parse( filebuf file );

	//	Operators
		void	operator=( MapParser &cpy ); 	
};

#endif /* UTILS_HPP */