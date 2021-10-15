# Name of the project
PROJECT_NAME=ex27

# .cpp Files
CPP_SOURCE=$(wildcard ./c++/*.cpp)

# .h Files
H_SOURCE=$(wildcard ./c++/*.h)

# Object Files
OBJ=$(subst .cpp,.o,$(subst c++,obj,$(CPP_SOURCE)))

# Compiler
CC=g++

# Flags for Compiler
CC_FLAGS=-c


# Linker Flags
LINKER_FLAGS=-Wall


# Compilation and linking
all: objFolder $(PROJECT_NAME)

$(PROJECT_NAME):	$(OBJ)
				@ echo 'Bulding binary using G++ linker: $@'
				$(CC) -o $@ $^ $(LINKER_FLAGS)
				@ echo 'Finished buiding binary: $@'
				@ echo ' '

./obj/%.o: ./c++/%.cpp ./c++/%.h
				@ echo 'Building target using G++ compiler: $<'
				$(CC) -o $@ $< $(CC_FLAGS)
				@ echo ' '

./obj/main.o: ./c++/main.cpp $(H_SOURCE)
		    @ echo 'Building target using G++ compiler: $<'
		    $(CC) -o $@ $< $(CC_FLAGS)
		    @ echo ' '

objFolder:
				@ mkdir -p obj

clean:
		    @ $(RM) ./obj/*.o $(PROJECT_NAME) *~
		    @ rmdir obj
		    
rebuild: clean all