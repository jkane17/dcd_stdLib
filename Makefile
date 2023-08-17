
SRCDIR := src
INCDIR := include
SRCFILES := $(shell find $(SRCDIR) -type f -name "*.c")
HDRFILES := $(shell find $(INCDIR) -type f -name "*.h")
OBJFILES := $(patsubst %.c,%.o,$(SRCFILES))
DEPFILES := $(patsubst %.c,%.d,$(SRCFILES))

CC := gcc
CFLAGS := -g -Wall

TARGET := lib_dcd_stdLib.a

.PHONY: all clean

all: $(TARGET)

lib_dcd_stdLib.a: $(OBJFILES)
	@ar rcs $(TARGET) $?

%.o: %.c Makefile
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

clean:
	-@$(RM) $(wildcard $(OBJFILES) $(DEPFILES)) $(TARGET)
