# Use "make readerwriter" or "mingw32-make readerwriter" in the terminal to use the makefile
# If on Windows, run "nmake"

# If running on the student cluster (uncomment this)
readerwriter: readerwriter.c thread.h
	gcc -o readerwriter readerwriter.c -lpthread

# Use "./readerwriter