TARGET := test
CC := cc
INCLUDE_PATH = ./

OBJ := $(wildcard ./*.c)

$(TARGET) : $(OBJ)
	@$(CC) $^ -o $@ -I$(INCLUDE_PATH)


.PHONY : clean
clean:
	@rm -rf $(TARGET)
