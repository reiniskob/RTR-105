
# RTR-105

Datormācība (pamatkurss) 1. repository
[Tests ar link](https://ortus.rtu.lv)  
Saturs:
1. [Piemēri](#piemēri)
2. [Ubuntu HotKeys](#ubuntu)
3. [Terminal commands](#terminal)



# Piemēri
Piemērs ar 1. list
-  Tests ar list 1
-  Tests ar list 2

Piemērs ar 2. list
1. Tests ar list 
2. Tests ar list 

List ar chekbox
- [x] jauztaisa satura raditajs
- [ ] jāuztaisa vairak piemēru
- [x] jāievieto attēls
- [ ] jāuztaisa saturs
- [x] Instalēt virtualbox un ubuntu

> Blockquote
>> Nested blockquote

**Bold**
*Italic*
# Ļoti liels
## Liels
### Vidējs
#### Mazs
##### Ļoti mazs

![RTU LOGO](https://upload.wikimedia.org/wikipedia/lv/thumb/f/fd/RTU_logo_2017.svg/1232px-RTU_logo_2017.svg.png)

## Ubuntu
[Shortcuts for ubuntu](https://www.geeksforgeeks.org/keyboard-shortcuts-for-ubuntu-set-1/) 
1. Ctrl+Alt+T new terminal tab
2. Ctrl + Shift + N > New terminal window 
3. Ctrl + Shift + F > Find
4. Ctrl + C or Ctrl + Z > Kill the current process 
5. Ctrl + L > Clear console 
6. Ctrl + Shift + C > Copy
7. Ctrl + Shift + V > Paste
8. Ctrl + t > new tab in firefox
9. Ctrl + w > close terminal
10. Ctrl + tab > switch between tabs
11. Ctrl + k > cuts out a line saves in buffer
12. Ctrl + u > pastes line from buffer


## Terminal commands

1. cd > change directory
    1. cd / > root directory
    2. cd .. > To navigate up one directory level, use 
    3. cd - > To navigate to the previous directory or back
2. pwd > Print work directory
3. ls > list computer files and directories
    1. -l > use a long listing format, all details
    2. -a > list all enteries
    3. -t > sort by modification time
    4. -S > sort by file size, largest first
    5. -r > reverse order while sorting
    6. -h > with file size
4. nano filename > opening a file in nano text editor
5. cat > open a txt file
6. lshw > hardware configuration 
7. mkdir > make a directory 
8. rm filename > remove file or directory
9. rmdir direcory name > remove directory
10. git clone URL > cloning a git directory to linux
11. mv filename ~/Desktop  > move the file to your Desktop directory
12. mv filename filename2 > renames filename to filename2
13. To upload a file to github from terminal
	1. git add .
	2. git config --global user.email "reiniskob@gmail.com"
	3. git config --global user.name "reiniskob"
	4. git commit -m "README.md"
	5. git push origin main
	6. enter username and token
14. chmod 764 > for changing which users can do what (read/write/execute)
	1. chmod rwx rw- r--
	2. chmod 111 110 100
	3. chmod 764
15. ./git-upload committ_variable > to upload a file to github.com
16. history > filename.txt > to upload history to a txt file 
17. echo > to display text strings or command results as messages
18. echo $? > displays the return from the previous command
19. gcc filename -0 newfilename > compiles code and changes the name
	1. -save-temps > saves all the compiling files
20. ./filename > executes file without path

## Unix
https://www.tutorialspoint.com/unix/unix-special-variables.htm

variables lieto kad nepieciešams no command line mainīt kaut ko scriptā bez teksta editor lietošanas

1. $0 > The filename of the current script.
2. $n > Here n is a positive decimal number corresponding to the position of an argument (the first argument is $1, the second argument is $2, and so on).
3. $# > The number of arguments supplied to a script.
4. $* > All the arguments are double quoted. 
5. $@ > All the arguments are individually double quoted. 
6. $? > The exit status of the last command executed.
7. $$ > The process number of the current shell. This is the process ID under which they are executing.
8. $! > The process number of the last background command.


## C valoda

1. main() > funkcija
2. int > answer will be an intiger
3. return skaitls ; > if the command fails it will show where the command failed
4. \n > moves cursor to next line
5. printf (); > for displaying format outputs
	1. %[flags][width][.precision][length]specifier
	2. https://cplusplus.com/reference/cstdio/printf/
6. scanf (); > for reading inputs and storing them in allocated arguments
	1.%[*][width][length]specifier
	2.https://cplusplus.com/reference/cstdio/scanf/
