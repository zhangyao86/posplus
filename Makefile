
POSPLUS_OBJS = 8583.o

posplus: ${POSPLUS_OBJS}
	g++ -o posplus ${POSPLUS_OBJS}

clean:
	rm -rf *.o posplus
