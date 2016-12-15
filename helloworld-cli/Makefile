# Makefile to cross compile Windows binaries on Linux

SHELL = /bin/bash

CCWIN32 = /usr/bin/i686-w64-mingw32-gcc
CCWIN64 = /usr/bin/x86_64-w64-mingw32-gcc

SOURCES = helloworld.c
EXEWIN32 = helloworld32.exe
EXEWIN64 = helloworld64.exe

all: $(EXEWIN32) $(EXEWIN64)

$(EXEWIN32): $(SOURCES)
	$(CCWIN32) -o $@ $<

$(EXEWIN64): $(SOURCES)
	$(CCWIN64) -o $@ $<

clean:
	rm -f $(EXEWIN32) $(EXEWIN64)
