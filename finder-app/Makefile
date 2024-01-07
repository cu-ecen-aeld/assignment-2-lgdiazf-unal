
CC = gcc

ifdef CROSS_COMPILE
    CC = $(CROSS_COMPILE)gcc
endif

TARGET = writer

all: $(TARGET)


$(TARGET): writer.c
	$(CC)  -o $@ $<	
clean:
	rm -f $(TARGET) *.o


