#ifndef BRAIN_LOGS_HPP
# define BRAIN_LOGS_HPP

# include <iostream>

using namespace std;

class LogsManager {
	private:
		FILE	*data;
	public:
	//	Constructors
		LogsManager();
		~LogsManager();
		LogsManager( LogsManager &cpy);
		LogsManager( FILE *file );

	//	Obj Methods
	
	//	Static Methods

	//	Operators
		void	operator=( LogsManager &cpy ); 
	
};

#endif /* BRAIN_LOGS_HPP */