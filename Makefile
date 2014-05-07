#######################################################
#
#    Aland Sailing Robot
#    ===========================================
#    sailcommand
#    -------------------------------------------
#
#######################################################

CC = g++
FLAGS = -Wall -pedantic -Werror
LIBS =

SOURCES = SailCommand.cpp
HEADERS = SailCommand.h
FILE = SailCommand.o



all : $(FILE)
$(FILE) : $(SOURCES) $(HEADERS)
	$(CC) $(SOURCES) $(FLAGS) $(LIBS) -c -o $(FILE)

example : $(SOURCES) $(HEADERS)
	$(CC) $(SOURCES) example.cpp $(FLAGS) $(LIBS) -o example

