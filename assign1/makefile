INCLUDE_DIRS	:= /home/evan/Desktop/csc310/assign1
CC				:= g++
CFLAGS			:= -I$(INCLUDE_DIRS)

OBJS			:= sorting.o customErrorClass.o
DEPS			:= $(INCLUDE_DIRS)

.PHONY: clean all

all: sorting.o customErrorClass.o slominski_CodeChallengeOne

clean:
	rm $(OBJS) slominski_CodeChallengeOne

slominski_CodeChallengeOne: $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

sorting.o: sorting.cpp $(DEPS)
	$(CC) -c -o $@ $(CFLAGS) $<

customErrorClass.o: customErrorClass.cpp $(DEPS)
	$(CC) -c -o $@ $(CFLAGS) $<

