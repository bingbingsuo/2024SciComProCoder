
/*mopi_hello.c
the first mpi program

jgao 2023.09
*/
#include <stdio.h>
#include "mpi.h"

int main( int argc, char *argv[] )
{
   int  myid, numprocs;
   
   MPI_Init( &argc, &argv );
   MPI_Comm_rank( MPI_COMM_WORLD, &myid );
   MPI_Comm_size( MPI_COMM_WORLD, &numprocs );
   printf("I am %d of %d\n", myid, numprocs );
   MPI_Finalize();
   return 0;
}