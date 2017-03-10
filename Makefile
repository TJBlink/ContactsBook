CPP = g++
CFLAGS = -std=c++0x
DEPS =  Student.h

main: ./src/main.cpp ./src/Student.cpp
	@$(CPP) $(CFLAGS) -o ./Release/Student_db ./src/main.cpp ./src/Student.cpp

clean:
	@rm -f ./Release/Student_db

dirs:
	@tree

run:
	@./Release/Student_db
