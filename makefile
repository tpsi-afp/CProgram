default:
	gcc -Wall main.c input.c -o prog.exe

debug:
	gcc -Wall -g main.c input.c -o prog.exe

clean:
	del prog.exe