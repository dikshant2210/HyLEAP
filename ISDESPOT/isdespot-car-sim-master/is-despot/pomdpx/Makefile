# -----------------------
# Compiler/linker options
# -----------------------

CXX = g++
LDFLAGS = -pthread -O3 -Wall -Wno-sign-compare $(GPROF)

# -----------
# Directories
# -----------

DESPOTHOME = ..
SRCDIR = src
INCDIR = $(DESPOTHOME)/include
LIBDIR = $(DESPOTHOME)/build

# -----
# Files
# -----

SOURCES = $(shell find -L $(SRCDIR) -name '*.cpp')
BIN = $(DESPOTHOME)/bin/pomdpx 

# -------
# Targets
# -------

.PHONY: all clean 

all:
	mkdir -p $(DESPOTHOME)/bin/
	$(CXX) $(LDFLAGS) $(SOURCES) -I $(INCDIR) $(LIBDIR)/*.o -o $(BIN)

light:
	@cd $(DESPOTHOME) && make
	$(CXX) $(LDFLAGS) $(SOURCES) -I $(INCDIR) -L $(LIBDIR) -ldespot -o $(BIN)

clean:
	rm -f -r $(DESPOTHOME)/bin
