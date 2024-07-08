playground: playground.c
	clear
	gcc -o playground playground.c
	./playground

clean:
	rm -f playground
	clear
