# Created by: WestleyR
# Email: westleyr@nym.hush.com
# Url: https://github.com/WestleyR/logger
# Last modified date: 2020-04-26
#
# This file is licensed under the terms of
#
# The Clear BSD License
#
# Copyright (c) 2019-2020 WestleyR
# All rights reserved.
#
# This software is licensed under a Clear BSD License.
#

# your c compiler
CC = gcc

CFLAG = -Wall

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
