// "..the chief characteristic of the religion of science,(is) that it works.."
                                                      -Issac Asimov, Foundation(1951)
//Rollin Tschirgi
//CSC311
//23/Nov/2016

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//mean-service-time
#define MST 2.0
//mean-inter-arrival-time
#define MIAT 3.0

typedef struct process ProcessRecord, *ProcessRecordPointer;

//define a node in a linked list defining a process
//it will contain:
//time needed to complete a process
//time until next process starts
struct process{
  int id;
  double timeToService
  double timeUntilNextService
  ProcessRecordPointer np;
}; //struct

int main(int argc, char** argv){

//time is measured in seconds
//t is 64-bit
time_t t = time(NULL);
//seed with random number generator
srand(t);

ProcessRecordPointer rootPointer = NULL;
ProcessRecordPointer pp = NULL;
ProcessRecordPointer cp = NULL;

int i;
for(i = 0; i < 12; i++){
    
    cp = 
    (ProcessRecordPointer) //cast as PRP
    malloc( //allocates a certain amount of memory and returns a pointer to the memory specified
    sizeof(ProcessRecord)) //returns the size needed to store the process record
    cp -> id = i;
    
    double r = ((double) rand())/RAND_MAX;
    
    cp -> 
    
  }//for

}//main
