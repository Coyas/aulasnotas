TARGET_EXEC = projecto2
CC = gcc
BUILD_DIR = ./builds
SRC_DIRS = ./src
CFLAGS  = -g -Wall

$(TARGET_EXEC): $(SRC_DIRS)/$(TARGET_EXEC).c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$(TARGET_EXEC) $(SRC_DIRS)/$(TARGET_EXEC).c