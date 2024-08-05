LDFLAGS = -lglfw -lOpenGL

engine: *.cpp *.hpp
	g++ -O3 -o engine *.cpp $(LDFLAGS)

.PHONY: test clean

test: engine 
	./engine

clean:
	rm -f engine 

