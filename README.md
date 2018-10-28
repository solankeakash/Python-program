# Python-program

# Windows
Create a folder on your computer to use for your Python programs, such as C:\pythonpractice, and save your hello.py program in that folder.
In the Start menu, select "Run...", and type in cmd. This will cause the Windows terminal to open.
Type cd \pythonpractice to change directory to your pythonpractice folder, and hit Enter.
Type hello.py to run your program!
If it didn't work, make sure your PATH contains the python directory. See Getting Python.

# Mac
Create a folder on your computer to use for your Python programs. A good suggestion would be to name it pythonpractice and place it in your Home folder (the one that contains folders for Documents, Movies, Music, Pictures, etc). Save your hello.py program into this folder.
Open the Applications folder, go into the Utilities folder, and open the Terminal program.
Type cd pythonpractice to change directory to your pythonpractice folder, and hit Enter.
Type python ./hello.py to run your program!
Note:
If you have both Python 2 and Python 3 installed (Your machine comes with a version of Python 2 but you can install Python 3 as well), you should run python3 hello.py

# Linux
Create a folder on your computer to use for your Python programs, such as ~/pythonpractice, and save your hello.py program in that folder.
Open up the terminal program. In KDE, open the main menu and select "Run Command..." to open Konsole. In GNOME, open the main menu, open the Applications folder, open the Accessories folder, and select Terminal.
Type cd ~/pythonpractice to change directory to your pythonpractice folder, and hit Enter.
Don't forget to make the script executable by chmod +x.
Type python ./hello.py to run your program!
Note:
If you have both Python version 2.6.1 and Python 3.0 installed (Very possible if you are using Ubuntu, and ran sudo apt-get install python3 to have python3 installed), you should run python3 hello.py

# Linux (advanced)
Create a folder on your computer to use for your Python programs, such as ~/pythonpractice.
Open up your favorite text editor and create a new file called hello.py containing just the following 2 lines (you can copy-paste if you want):[2]
#! /usr/bin/python
print('Hello, world!')
Note:
If you have both python version 2.6.1 and version 3.0 installed (Very possible if you are using a debian or debian-based(*buntu, Mint, …) distro, and ran sudo apt-get install python3 to have python3 installed), use

#! /usr/bin/python3
print('Hello, world!')
save your hello.py program in the ~/pythonpractice folder.
Open up the terminal program. In KDE, open the main menu and select "Run Command..." to open Konsole. In GNOME, open the main menu, open the Applications folder, open the Accessories folder, and select Terminal.
Type cd ~/pythonpractice to change directory to your pythonpractice folder, and hit Enter.
Type chmod a+x hello.py to tell Linux that it is an executable program.
Type ./hello.py to run your program!
In addition, you can also use ln -s hello.py /usr/bin/hello to make a symbolic link hello.py to /usr/bin under the name hello, then run it by simply executing hello.
Note that this mainly should be done for complete, compiled programs, if you have a script that you made and use frequently, then it might be a good idea to put it somewhere in your home directory and put a link to it in /usr/bin. If you want a playground, a good idea is to invoke mkdir ~/.local/bin and then put scripts in there. To make ~/.local/bin content executable the same way /usr/bin does type $PATH = $PATH:~/local/bin (you can add this line to your shell rc file, for example ~/.bashrc).

Note:
File extensions aren't necessary in UNIX-like file-systems. To linux, hello.py means the exact same thing as hello.txt, hello.mp3, or just hello. Linux mostly uses the contents of the file to determine what type it is.
