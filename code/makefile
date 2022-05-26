SRC=$(wildcard *.cpp)
BIN=$(SRC:%.cpp=%)

CXX=g++
CXXFLAGS=-std=c++11 -I ./includes

*:$(findstring *,$(SRC))
	$(CXX) $@ $(CXXFLAGS) -o $^


clean:
	rm -rf `ls | grep [^cpp]$$
