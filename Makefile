
C_COMPILER = gcc -std=c99
C_COMPILER_FLAGS = -g -Wall
C_COMPILER_LIBRY = -lncurses -lm

HEADER_FILES = $(wildcard *.h)
SOURCE_FILES = $(wildcard *.c)
OBJECT_FILES = $(SOURCE_FILES:.c=.o)

.PHONY: all
all: main 
	
main: $(OBJECT_FILES)
	$(C_COMPILER) $^ -o $@ $(C_COMPILER_LIBRY) 
	
$(OBJECT_FILES): %.o: %.c $(HEADER_FILES)
	$(C_COMPILER) $(C_COMPILER_FLAGS) -c $<
	
.PHONY: clean
clean: 
	rm -f $(OBJECT_FILES)
