# Name of the project
PROJECT_NAME = manage.exe

# Output directory

# All source code files

# All test source files
SRC = src/medical.c\
test/testing.c\
unity/unity.c


# All include folders with header files
INC	= -Iinc\
-Iunity
$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}



# Project Output name



# Default target built


