SRC=$(wildcard *.cpp)
BIN=$(SRC:%.cpp=%)

CXX=g++
CXXFLAGS=-std=c++11 -I ./includes

*:$(findstring *,$(SRC))
	@$(CXX) $@ $(CXXFLAGS) -o $^

all:
	@make $(BIN)

test:
	@$(foreach file,$(BIN),./$(file);if [ $$? -eq 0 ];then echo $(file) False;exit;fi;) echo "All ok"

.PHONY:clean
clean:
	@rm -rf $(BIN)
