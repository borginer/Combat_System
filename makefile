CXX = g++
CXXFLAGS = -std=c++17 -Wall -O3 -pedantic -fPIC -Wextra

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))
TARGET = $(BINDIR)/system

all: $(TARGET)

$(TARGET): $(OBJECTS) | $(BINDIR)
	$(CXX) $(CXXFLAGS) $(OBJDIR)/*.o -o $(TARGET)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(BINDIR): 
	@mkdir -p $(BINDIR)

$(OBJDIR): 
	@mkdir -p $(OBJDIR)

run: all
	./$(TARGET)

crun: clean all
	./$(TARGET)

clean:
	rm -rf $(OBJDIR) $(BINDIR)