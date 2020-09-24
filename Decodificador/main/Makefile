
# Author: Julio Conchas
# Email:  conchasjimenez@gmail.com
# Path:   main/
# File:   MakeFile

OBJETOS=main.o \
	     menu.o \


CFLAGS=-I../libs
COMPILER=c++ -c -g

decodificador: $(OBJETOS)
	c++  $(OBJETOS) -o decodificador

menu.o: ../libs/menu.cpp
	$(COMPILER) ../libs/menu.cpp -o menu.o

main.o: main.o ../libs/menu.h
	$(COMPILER)  $(CFLAGS) main.cpp -o main.o

#utility targets
run:
	make clean
	./decodificador
clean:
	rm -Rf *.o
