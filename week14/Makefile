CC = gcc

CFLAGS = -std=c89

TARGET = main

OBJECT = main.o

SRCS = main.c

DEPS = $(SRCS:.c=.h)

.PHONY: all clean analyze debug

all: $(TARGET) $(OBJECT) main.i

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

$(OBJECT): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) -o $(OBJECT)

main.i: $(SRCS)
	$(CC) $(CFLAGS) -E $(SRCS) -o main.i

clean:
	rm -rf $(TARGET) *.o *.i

analyze:
	cppcheck $(SRCS)

debug: CFLAGS += -g
debug: all
