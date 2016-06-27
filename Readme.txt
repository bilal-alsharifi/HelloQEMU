---------------------------------Compile the program---------------------------------
$ make DEBUG=1

---------------------------------Run the program---------------------------------
$ make debug

or

$ xterm -e /home/seed/Desktop/test/sdk/objs20/emulator -verbose -show-kernel -netfast -avd hd2 -shell -qemu -s -S -kernel gcc/hello_qemu.axf
$ ddd --debugger arm-none-eabi-gdb gcc/hello_qemu.axf 
