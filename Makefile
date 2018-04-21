CPP := g++
INCLUDE := /usr/include/eigen3/unsupported
CFLAGS := `pkg-config --cflags eigen3`

one-exec:
	$(CPP) one/general.cpp one/quantum.cpp one/main.cpp -o one-exec $(CFLAGS) -I $(INCLUDE)
