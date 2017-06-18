target	:=test1
test1:test1.c
	gcc -I /usr/local/include/libxml2 -L/usr/local/lib -lxml2 -lz -lm -o test test1.c
clean:
	-rm -rf $(target) *.o
.PHONY:
	clean
