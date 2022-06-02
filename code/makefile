SRC=$(wildcard *.cpp)
BIN=$(SRC:%.cpp=%)

CXX=g++
CXXFLAGS=-std=c++11 -I ./includes

*:$(findstring *,$(SRC))
	@$(CXX) $@ $(CXXFLAGS) -o $^

all:
	@make $(BIN)

test:
	@$(foreach file,$(BIN),./$(file);if [ $$? -eq 1 ];then echo $(file) OK;else echo $(file) False;fi;)


.PHONY:clean
clean:
	@rm -rf $(BIN)
