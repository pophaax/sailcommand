#######################################################
#
#    Aland Sailing Robot
#    ===========================================
#    sailcommand
#    -------------------------------------------
#
#######################################################

CC = g++
FLAGS = -Wall -pedantic -Werror -std=c++14
LIBS =

SOURCES = SailCommand.cpp
HEADERS = SailCommand.h
FILE = SailCommand.o



all : $(FILE)
$(FILE) : $(SOURCES) $(HEADERS)
	$(CC) $(SOURCES) $(FLAGS) $(LIBS) -c -o $(FILE)

example : $(SOURCES) $(HEADERS) example.cpp
	$(CC) $(SOURCES) example.cpp $(FLAGS) $(LIBS) -o example


test : $(SOURCES) $(HEADERS) ../catch.hpp testSailCommand.cpp
	$(CC) $(SOURCES) testSailCommand.cpp $(LIBS) -o test

clean :
	rm -f $(FILE)
	rm -f example
	rm -f test