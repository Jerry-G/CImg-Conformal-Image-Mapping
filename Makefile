CXX=g++
CFLAGS=-O2 -L/usr/X11R6/lib -lm -lpthread -lX11
OBJS=conformal.o CImg.o

all: CImg.o conformal.o Conformal

CImg.o: CImg.cpp
	$(CXX) -o $@ -c $^

conformal.o: conformal.cpp
	$(CXX) -o $@ -c conformal.cpp

Conformal: conformal.cpp
	$(CXX) -o $@ $(OBJS) $(CFLAGS)

clean:
	rm -f $(OBJS) Conformal

