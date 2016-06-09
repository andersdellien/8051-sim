SRC_DIR := src
OBJ_DIR := out
INCLUDE_DIR := inc

CPP_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(addprefix $(OBJ_DIR)/,$(notdir $(CPP_FILES:.cpp=.o)))

LD_FLAGS :=
CC_FLAGS := -I $(INCLUDE_DIR)

.PHONY: all clean
all: $(OBJ_DIR)/8051-sim

clean:
	rm -rf $(OBJ_DIR)

out/8051-sim: $(OBJ_FILES)
	@echo "Linking $@"
	@g++ $(LD_FLAGS) -o $@ $^

out/%.o: $(SRC_DIR)/%.cpp
	@echo "Compiling $<"
	@mkdir -p $(OBJ_DIR)
	@g++ $(CC_FLAGS) -c -o $@ $<

CC_FLAGS += -MMD -MP
-include $(OBJ_FILES:.o=.d)
