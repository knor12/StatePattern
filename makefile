#Path to the compiler
CC := g++.exe
#name and  want to place the executable 
EXECUTABLE :=main.exe
#object files compilation flags
CFLAGS := -Wall -Werror -std=gnu++0x --save-temps -Os
#linking flags 
#LDFLAGS :=-std=gnu++0x -static-libgcc  -static-libstdc++
LDFLAGS := -static-libgcc -static-libstdc++ -Os
#all directories that contain header files
INCS   :=-I"."
#list all the source files to be comilers
PATH_SOURCE=
#SRCS := main.cpp \
#		context.cpp \
#		StateA.cpp
SRCS:=$(wildcard $(PATH_SOURCE)*.cpp)
#generate the names of all object files to be created from the source files
OBJS := ${SRCS:.cpp=.o}
#generate the name for preprocessor output
PP_TEMP := ${SRCS:.cpp=.ii}
#generate the name for assembly files for each source file
ASM_TEMP := ${SRCS:.cpp=.s}


all:${EXECUTABLE}
	@echo "***************************************"
	@echo "              Done                     "
	@echo "***************************************"
	

${EXECUTABLE}: ${OBJS}	
	@echo "***************************************"
	@echo "       Building executable             "
	@echo "***************************************"
	${CC} ${OBJS} -o ${EXECUTABLE} ${LDFLAGS}
##	${CC}  ${CFLAGS} ${INCS} -c $< -o $@

	
	
clean:
	@echo "***************************************"
	@echo "           Cleaning up                 "
	@echo "***************************************"
	del ${EXECUTABLE} ${OBJS} ${PP_TEMP} ${ASM_TEMP}
	
run:
	@echo "***************************************"
	@echo "           Running                     "
	@echo "***************************************"
	${EXECUTABLE}

	
.cpp.o:
	@echo "***************************************"
	@echo         Building object ${@} from ${<}
	@echo "***************************************"
	${CC}  ${CFLAGS} ${INCS} -c $< -o $@