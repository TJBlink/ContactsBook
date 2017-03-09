CPP = g++
CFLAGS = -std=c++0x
DEPS = Student.h

main: main.cpp Student.cpp
	@$(CPP) $(CFLAGS) -o ./Release/Student_db main.cpp Student.cpp

clean:
	@rm -f ./Release/Student_db

dirs:
	@tree

run:
	@./Release/Student_db
