panmultiples: panmultiples.o
	gcc -o panmultiples -g panmultiples.o
panmultiples.o: panmultiples.c
	gcc -g -c -Wall panmultiples.c
clean:
	rm -f *.o panmultiples  
