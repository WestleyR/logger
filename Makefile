# Created by: WestleyR
# email: westleyr@nym.hush.com
# Date: Apr 1, 2019
# https://github.com/WestleyR/tabspaces
# version-1.0.0
#
# The Clear BSD License
#
# Copyright (c) 2019 WestleyR
# All rights reserved.
#
# This software is licensed under a Clear BSD License.
#

# your c compiler
CC = gcc

CFLAG = -Wall
LDFLAGS =

TARGET = example

SRC = src/logger.c main.c
OBJ = main.o logger.o

.PHONY:
all: $(TARGET)

.PHONY:
$(TARGET): $(OBJ)
	$(CC) $(CFLAG) -o $(TARGET) $(OBJ) $(LDFLAGS)

.PHONY:
$(OBJ): $(SRC)
	$(CC) $(CFLAG) -c $(SRC)

.PHONY:
clean:
	rm -f test logger.o main.o

.PHONY:
test: $(TARGET)
	./tests

#
# End Makefile
#
