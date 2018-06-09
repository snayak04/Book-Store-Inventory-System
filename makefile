all: compile

compile: main.o processBook.o readBooks.o insert.o model.o controller.o userOption.o totalRevenue.o totalWholesale.o totalInvestments.o totalProfit.o totalBooksSold.o averageProfit.o booksInStock.o booksOutOfStock.o addBook.o deleteBook.o quit.o 
	gcc main.o processBook.o readBooks.o insert.o model.o controller.o userOption.o totalRevenue.o totalWholesale.o totalInvestments.o totalProfit.o totalBooksSold.o averageProfit.o booksInStock.o booksOutOfStock.o addBook.o deleteBook.o quit.o -o main

main.o: main.c header.h
	gcc -ansi -pedantic -c main.c

processBook.o: processBook.c header.h
	gcc -ansi -pedantic -c processBook.c

readBooks.o: readBooks.c header.h
	gcc -ansi -pedantic -c readBooks.c

insert.o: insert.c header.h
	gcc -ansi -pedantic -c insert.c

model.o: model.c header.h
	gcc -ansi -pedantic -c model.c

controller.o: controller.c header.h
	gcc -ansi -pedantic -c controller.c

userOption.o: userOption.c header.h
	gcc -ansi -pedantic -c userOption.c

totalRevenue.o: totalRevenue.c header.h
	gcc -ansi -pedantic -c totalRevenue.c

totalWholesale.o: totalWholesale.c header.h
	gcc -ansi -pedantic -c totalWholesale.c

totalInvestments.o: totalInvestments.c header.h
	gcc -ansi -pedantic -c totalInvestments.c

totalProfit.o: totalProfit.c header.h
	gcc -ansi -pedantic -c totalProfit.c

totalBooksSold.o: totalBooksSold.c header.h
	gcc -ansi -pedantic -c totalBooksSold.c

averageProfit.o: averageProfit.c header.h
	gcc -ansi -pedantic -c averageProfit.c

booksInStock.o: booksInStock.c header.h
	gcc -ansi -pedantic -c booksInStock.c

booksOutOfStock.o: booksOutOfStock.c header.h
	gcc -ansi -pedantic -c booksOutOfStock.c

addBook.o: addBook.c header.h
	gcc -ansi -pedantic -c addBook.c

deleteBook.o: deleteBook.c header.h
	gcc -ansi -pedantic -c deleteBook.c

quit.o: quit.c header.h
	gcc -ansi -pedantic -c quit.c

clean:
	rm -rf *.o main


