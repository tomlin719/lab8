main: tetris.o genMino.o Mino.o MinoI.o MinoS.o MinoZ.o MinoJ.o
	g++ -o main tetris.o genMino.o Mino.o MinoI.o MinoS.o MinoZ.o MinoJ.o
tetris.o: tetris.cpp genMino.h
	g++ -c tetris.cpp
genMino.o: genMino.cpp genMino.h Mino.h MinoI.h MinoS.h
	g++ -c genMino.cpp
MinoI.o: MinoI.cpp MinoI.h Mino.h
	g++ -c MinoI.cpp
MinoS.o: MinoS.cpp MinoS.h Mino.h
	g++ -c MinoS.cpp
MinoZ.o: MinoZ.cpp MinoZ.h Mino.h
	g++ -c MinoZ.cpp
MinoJ.o: MinoJ.cpp MinoJ.h Mino.h
	g++ -c MinoJ.cpp
Mino.o: Mino.cpp Mino.h
	g++ -c Mino.cpp

clean:
	rm Mino.o MinoS.o MinoI.o MinoZ.o MinoJ.o genMino.o tetris.o
