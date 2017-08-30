.PHONY:fork
fork:fork.o
	gcc -o $@ $^
	rm -rf $^
fork.o:fork.c
	gcc -c $^ -o $@

.PHONY:io
io:io.o
	gcc -o $@ $^
	rm -rf $^
io.o:io.c
	gcc -c $^ -o $@

.PHONY:sh
sh:sh.o
	gcc -o $@ $^
	rm -rf $^
sh.o:sh.c
	gcc -c $^ -o $@

.PHONY:clean
clean:
	rm -rf fork io
