CC=gcc
TARGET:=bin/ox
MODULES:=$(addprefix build/,$(shell find src/* -type d -printf '%f\n'))
SOURCES:=$(shell find src -type f -name *.c)
OBJECTS:=$(patsubst src/%,build/%,$(SOURCES:.c=.o))
CFLAGS:=$(ARGS)
LIB:=

build/%.o: src/%.c
	@echo "Compiling:"
	@mkdir -p $(MODULES)
	@echo " 	$(CC) $(CFLAGS) -I include -c -o $@ $<"; $(CC) $(CFLAGS) -I include -c -o $@ $<
$(TARGET): $(OBJECTS)
	@echo "Linking:"
	@echo " 	$(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $^ -o $(TARGET) $(LIB)
win89:
	@make -s ARGS="-m32 -DOX_WIN -DOX32 -std=c89 -Wall -Wextra -pedantic -Wno-format"
win99:
	@make -s ARGS="-w -DOX_WIN -std=c99"
lin89:
	@make -s ARGS="-m32 -DOX32 -std=gnu89 -Wall -Wextra -pedantic -Wno-format"
lin99:
	@make -s ARGS="-w -std=gnu99"
clean:
	@echo "Cleaning:"
	@echo " 	$(RM) -r build $(TARGET)"; $(RM) -r build $(TARGET)
run:
	./$(TARGET)
.PHONY: win89 win99 lin89 lin99 clean run