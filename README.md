# -Motorola-6809-Flex-Cross-Assembler

Project to bring Motorola 8609 Assembler up to current ISO/IEC 9899:2018 C Standard
At the time of this project, the current standard is C17
This project is written and compiled using GCC version 10.2.0
in Ubuntu 20.10 running in Oracle VM VirtualBox on a Windows Version 10.0.19042.746 host machine.
This project focuses solely on the cross assembler.

In order to enforce standards, I wrote the specs into a BASH compile script

Awesome resources and folks (not exhaustive):
https://lennartb.home.xs4all.nl/m6809.html
http://www.flexusergroup.com/flexusergroup/default.htm
Original version of The C Programming Language written by Brian W. Kernighan and Dennis M. Ritchie
ISBN 0-13-110163-3, Copyright 1978. 
https://www.amazon.com/Programming-Language-Brian-W-Kernighan/dp/0131101633

I located the original source code for this project on the 6809 Emulation Page: http://atjs.mbnet.fi/mc6809/

References, definitions and further reading:

https://en.wikipedia.org/wiki/FLEX_(operating_system) - because Wikipedia knows all

https://en.wikipedia.org/wiki/ANSI_C

--------------------------------------------------------------------------------
UPDATE: I picked this project up after a long haitus and a much-needed pc ugrade. 
I found a source file written in C after the ANSI standard was started here: http://atjs.mbnet.fi/mc6809/Assembler/A09.c 
I re-installed GCC and ran version 6.3.0 (in error - it's older).
