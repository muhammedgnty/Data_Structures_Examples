hepsi: derle bagla calistir

derle:
	g++ -I "./include" -c ./src/test.cpp -o ./lib/test.o
	g++ -I "./include" -c ./src/Kisiler.cpp -o ./lib/Kisiler.o

bagla:
	g++ ./lib/Kisiler.o ./lib/test.o -o ./bin/test

calistir:
	./bin/test