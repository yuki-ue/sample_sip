TARGET = sample

CXXFLAGS = `pkg-config --clags opencv4`
LDLIBS = `pkg-config --libs opencv4`

all:	$(TARGETS)

clean:	$(RM) *~ *.o $(TARGETS)

rebuild:	clean all
