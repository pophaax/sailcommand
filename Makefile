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

metatest : $(SOURCES) $(HEADERS) $(SAILINGROBOTS_HOME)/tests/catch.hpp $(SAILINGROBOTS_HOME)/tests/testsuite/testSailCommand.cpp
	$(CC) $(SOURCES) $(SAILINGROBOTS_HOME)/tests/testsuite/testSailCommand.cpp -fprofile-arcs -ftest-coverage $(LIBS) -o metatest 


clean :
	rm -f $(FILE)
	rm -f example
	rm -f metatest
	rm -f *.gcda
	rm -f *.gcno

metalog :
	make metatest
	./metatest
	gcov -r SailCommand.cpp
	grep -wE "(#####)" SailCommand.cpp.gcov > metatestlog.txt
	rm -f *.gcov
	make clean
	sed -i '1s/^/Codelines below not tested by test*.cpp\n/' metatestlog.txt