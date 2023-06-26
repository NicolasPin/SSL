tablasdeconversion: conversion.o conversionTest.o
	gcc  conversion.o conversionTest.o tablasdeconversion.c -o tablasdeconversion

conversion.o: conversion.c
	gcc -c conversion.c

conversionTest.o: conversionTest.c
	gcc -c conversionTest.c

clean: 
	rm *.o tablasdeconversion