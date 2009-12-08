# Very simple Makefile
#
#
#

CC=gcc 
CFLAGS=-Werror -Wall -I/usr/include/elementary -I/usr/include/eina-0 -I/usr/include/eina-0/eina -I/usr/include/dbus-1.0 -I/usr/lib/dbus-1.0/include  -L/lib -lelementary -lehal -ledje -lecore_file -lecore_evas -ledbus -ldbus-1 -lecore_imf_evas -lembryo -lecore_job -leet -lecore_imf -lcurl -lecore_x -lecore_input -lecore_txt -levas -lecore -leina 
main: bin/ecauldron 

clean:
	rm -f bin/ecauldron 
	rm -f *~ 

re: clean main
