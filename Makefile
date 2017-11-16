default: proj3
	
clean:
	rm -rf proj3

all: clean proj3

proj3:
	gcc main.cpp -lstdc++ -o proj3

