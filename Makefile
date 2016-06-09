CPP_FILES := $(wildcard src/*.cpp)
OBJ_FILES := $(addprefix out/,$(notdir $(CPP_FILES:.cpp=.o)))
LD_FLAGS :=
CC_FLAGS := -I inc
INCLUDE_DIR := inc
SRC_DIR := src

out/8051-sim: $(OBJ_FILES)
	g++ $(LD_FLAGS) -o $@ $^

out/%.o: $(SRC_DIR)/%.cpp
	-mkdir -p out
	g++ $(CC_FLAGS) -c -o $@ $<

CC_FLAGS += -MMD -MP
-include $(OBJFILES:.o=.d)
