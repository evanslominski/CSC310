#Now we have more dynamic arguments, and only files that have changed are rebuild.
INCLUDE_DIRS := /home/evan/Desktop/csc310/Makefiles/Version2
CC 			 := g++
CFLAGS 		 := -I$(INCLUDE_DIRS)

#Anything that does't have a rule must be compiled.
errorTutorial: customErrorHandling.o customErrorClass.o
	$(CC) -o errorTutorial customErrorHandling.o customErrorClass.o $(CFLAGS)