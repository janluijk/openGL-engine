engine: main.cpp
	g++ -O3 -o engine main.cpp

.PHONY: test clean

test: engine 
	./engine

clean:
	rm -f engine 

