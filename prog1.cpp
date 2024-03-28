#include <iostream>
#include "mpi.h" 

using namespace std;
int main(int argc,char *argv[])
{
	if (MPI_Init(NULL,NULL) != MPI_SUCCESS) {
		MPI_Finalize();
		exit(0);
	}
	int procid;
	MPI_Comm_rank(MPI_COMM_WORLD,&procid);
	int size;
	MPI_Comm_size(MPI_COMM_WORLD,&size);
	cout << endl << "Ola!" << endl << endl
		<< "procid = " << procid << endl
		<< "# processos MPI = " << size << endl;
	MPI_Finalize();
	return 0;
}
