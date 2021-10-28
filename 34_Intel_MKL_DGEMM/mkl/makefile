#Simple makefile to complie MKL degemm example 
# By: clay liu

COMPLIER_FLAGS = -fopenmp -lmkl_intel_lp64 -lmkl_inter_core -lmkl_gnu_thread -pthread -lm -ldl
degemm: degemm.cpp
	g++ -L$(MKL_LIB_DIR) -I$(MKL_INCLUDE_DIR) degemm.cpp -o degemm $(COMPLIER_FLAGS)
.PHONY : clean

clean:
	rm degemm
