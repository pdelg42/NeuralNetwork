NAME=NNetwork

# COLORS
OK="\033[1;32m"
FAIL="\033[1;31m"
WARNING="\033[1;33m"
RESET="\033[0m"
# END COLORS #

# DEB
LOGS_DIR=logs/
# END DEB #

# COMPILE
CPPDIR=srcs/cpp/

SRCS=$(CPPDIR){\
	Brain.cpp,\
	Gene.cpp,\
	InnerNode.cpp,\
	InputNode.cpp,\
	OutputNode.cpp,\
	Node.cpp,\
	Logs.cpp,\
	main.cpp\
}

SRCS_LIST=$(shell echo $(SRCS) | sed 's/ //g')
# END COMPILE #

all: init $(NAME)

$(NAME):
#	da sostituire con script python
	@echo $(SRCS_LIST)
#
	@c++ -o $(NAME) $(SRCS_LIST) 2>> logs/compile.logs
	@echo $(OK)Compiled$(RESET);

deb: init
#	da sostituire possibilmente  con script python
	@echo $(WARNING)
	@echo compile.logs

	@if [ -e $(LOGS_DIR)compile.logs ]; then\
		cat $(LOGS_DIR)compile.logs;\
	else\
		echo $(FAIL)"no compile.logs";\
	fi

	@echo $(RESET)
#

init: $(LOGS_DIR)

$(LOGS_DIR):
	@mkdir logs
	@echo $(WARNING) > logs/compile.logs

re: clean init $(NAME)

clean:
	@rm -rf $(LOGS_DIR)
	@rm -f $(NAME)
