SRC=$(wildcard *.cpp)
BIN=$(SRC:%.cpp=%)

CXX=g++
CXXFLAGS=-std=c++11 -I ./includes

*:$(findstring *,$(SRC))
	$(CXX) $@ $(CXXFLAGS) -o $^

all:
	make $(foreach file,$(BIN),$(file))

run:
	$(foreach file,$(BIN),./$(file);)


.PHONY:clean
clean:
	rm -rf $(BIN)
