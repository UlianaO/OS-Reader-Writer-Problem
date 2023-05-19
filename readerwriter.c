/* Starting code is taken from OS Slides done by Professor Wanwan Li, COP4600 USF*/
/* NEEDS A thread.h FILE PROVIDED BY THE PROFESSOR IN FILES FOLDER*/

#include "thread.h"
#include <string.h>
#define MAX_LINE_LENGTH 1000

Semaphore writerlock;
Semaphore readerlock;
Semaphore turnstil;
int readingCount = 0;
int shared = 0;


void reading_writing() {
	int x=0, T = rand() % 10000;
	for(int i =0; i < T; i++) 
		for (int j=0; j < T; j++) x=i+j;

}
void* writer(void* args)
{

	printf("Created writer\n");

	wait(turnstil);
	wait(writerlock);
        
/**********************CRITICAL SECTION*************************/
	shared++;
	printf("Writer`s in... writing... \n");
	reading_writing();
/***************************************************************/
	
	signal(writerlock);
	signal(turnstil);
	
	printf("Finished writing... shared = %d\n", shared);

	return NULL;
}

void* reader(void* args)
{
	
        printf("Created reader\n");

	wait(turnstil);
	wait(readerlock);
	
	readingCount++;
	
	if(readingCount==1)
		wait(writerlock);

	signal(readerlock);
	signal(turnstil);

/**********************CRITICAL SECTION*************************/

	printf("Reader`s in... reading... \n");
	reading_writing();
/***************************************************************/
	
	wait(readerlock);

	readingCount--; // reader wants to leave
        if (readingCount==0) //no reader is left in critical section
		signal(writerlock); //writers can enter
	
	signal(readerlock); // reader leaves

	printf("Finished reading... shared = %d\n", shared);

	return NULL;
}

int main()
{
	Thread threads[2000]; 
	int i = 0;
	char line[MAX_LINE_LENGTH];
	int readerID=0;
	int writerID=0;
	
	char rw;

	//initialize all semaphores to 1
	init(writerlock, 1); 
	init(turnstil, 1); 
	init(readerlock, 1); 
	
	//open file for reading, no actual writing needed per instruction
	FILE *file=fopen("scenarios.txt", "r");
        

  	if(file) //if successfull
	{
		while(fgets(line, MAX_LINE_LENGTH, file))
	{
		shared = 0;
		i=0;
		//remove new line characters from line

		printf("\n\n__________Scenario starts %s \n", line);
		
		for(int j=0; j < strlen(line); j++) {
			rw = line[j];
			if(rw== 'r') {
				int* id=createArgs(readerID++);
				threads[i++]=createThread(reader, id);
			   } //if

			else if(rw== 'w') {
				int* id=createArgs(writerID++);
				threads[i++]=createThread(writer, id);
		           } //else if
		}


			// join threads to block the calling thread intil the previos is completed 
                joinThreads(threads, i);
	}
		fclose(file); 
		
	}
	else printf("No scenario file found \n");

	return 0;
}
