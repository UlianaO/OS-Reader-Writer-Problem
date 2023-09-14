
# Reader and Writer Problem
The program implements a readers/writers problem using semaphores that do not starve readers or writers.
This problem is a classic concurrency problem in OS with multiple processes that need to be able to access a shared resource.
_______

To compile the program: <br/>
using this command:  $ gcc -o readerwriter  readerwriter.c  -lpthread <br/>
<br/>
To run the program: <br/>
- Include scenarios.txt to run an scenario for the program. <br/>
- Include "thread.h" header file. <br/>
- On student cluster, run $ make readerwriter <br/>
- run ./readerwriter to see the result. <br/>
<br/>
To work with the program:<br/>
- scenarios.txt can be modified and include multiple scenarios, 1 scenario per line.<br/>
- the original <br/>
<br/>
$ gcc     -o      readerwriter  weaderwriter.c  -lpthread <br/>
 ./readerwriter <br/>
<br/>
<br/>
Scenario starts rrwwrrwrwwrrrr<br/>
<br/>
Created reader <br/>
Created writer <br/>
Readers in... reading... <br/>
Created reader <br/>
Created writer <br/>
Created reader <br/>
Created reader <br/>
Created reader <br/>
Created writer <br/>
Created writer <br/>
Created reader<br/>
Created reader<br/>
Created reader<br/>
Created reader<br/>
Created writer<br/>
Created writer<br/>
Finished reading... shared = 0<br/>
Writer`s in... writing...<br/>
Finished writing... shared = 1<br/>
Reader`s in... reading...<br/>
Finished reading... shared = 1<br/>
Writer`s in... writing...<br/>
Finished writing... shared = 2<br/>
Reader`s in... reading...<br/>
Reader`s in... reading...<br/>
Finished reading... shared = 2<br/>
Finished reading... shared = 2<br/>
Finished reading... shared = 2<br/>
Writer`s in... writing...<br/>
Finished writing... shared = 3<br/>
Writer`s in... writing...<br/>
Finished writing... shared = 4<br/>
Reader`s in... reading...<br/>
Reader`s in... reading...<br/>
Reader`s in... reading...<br/>
Finished reading... shared = 4<br/>
Reader`s in... reading...<br/>
Finished reading... shared = 4 <br/>
Finished reading... shared = 4<br/>
Finished reading... shared = 4<br/>
Writer`s in... writing...<br/>
Finished writing... shared = 5<br/>
<br/>

