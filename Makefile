# cs335 lab1
# to compile your project, type make and press enter
# updated to allow fonts and text

all: lab1

lab1: lab1.cpp
	g++ lab1.cpp log.cpp libggfonts.a -Wall -olab1 -lX11 -lGL -lGLU -lm

clean:
	rm -f lab1
	rm -f *.o

