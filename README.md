To compile the program:
using this command:  $ gcc -o readerwriter  readerwriter.c  -lpthread

To run the program:
- Include scenarios.txt to run an scenario for the program.
- Include "thread.h" header file.
- On student cluster, run $ make readerwriter
- run ./readerwriter to see the result.

To work with the program:
- scenarios.txt can be modified and include multiple scenarios, 1 scenario per line.
- the origina

$ gcc     -o      readerwriter  weaderwriter.c  -lpthread
 ./readerwriter

__________Scenario starts rrwwrrwrwwrrrr

Created reader
Created writer
Reader`s in... reading...
Created reader
Created writer
Created reader
Created reader
Created reader
Created writer
Created writer
Created reader
Created reader
Created reader
Created reader
Created writer
Finished reading... shared = 0
Writer`s in... writing...
Finished writing... shared = 1
Reader`s in... reading...
Finished reading... shared = 1
Writer`s in... writing...
Finished writing... shared = 2
Reader`s in... reading...
Reader`s in... reading...
Reader`s in... reading...
Finished reading... shared = 2
Finished reading... shared = 2
Finished reading... shared = 2
Writer`s in... writing...
Finished writing... shared = 3
Writer`s in... writing...
Finished writing... shared = 4
Reader`s in... reading...
Reader`s in... reading...
Reader`s in... reading...
Finished reading... shared = 4
Reader`s in... reading...
Finished reading... shared = 4
Finished reading... shared = 4
Finished reading... shared = 4
Writer`s in... writing...
Finished writing... shared = 5


__________Scenario starts rwrwrw
Created reader
Reader`s in... reading...
Created writer
Created writer
Created reader
Created writer
Created reader
Finished reading... shared = 0
Writer`s in... writing...
Finished writing... shared = 1
Writer`s in... writing...
Finished writing... shared = 2
Reader`s in... reading...
Finished reading... shared = 2
Writer`s in... writing...
Finished writing... shared = 3
Reader`s in... reading...
Finished reading... shared = 3

