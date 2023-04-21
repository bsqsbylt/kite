CFLAGS=-g -Wall

LUAINC?=-I/usr/local/include

UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
	SO=so
	SHARED=--shared -fPIC
else ifeq ($(UNAME), Darwin)
	SO=so
	SHARED=-fPIC -dynamiclib
	LUALIB?=-L/usr/local/lib -llua
else ifeq ($(UNAME), Windows_NT)
	SO=dll
	SHARED=--shared
	LUALIB?=-L/usr/local/lib -llua
endif

all : lapp.$(SO)

SRCS=\
	lapp.c \


lapp.$(SO) : $(SRCS)
	$(CC) $(CFLAGS) $(SHARED) $(LUAINC) -o $@ $^ $(LUALIB)


clean :
	rm -rf *.$(SO)
