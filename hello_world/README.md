# hello_world    
This is a basic linux driver that would show "hello world" and "*Goodbye, cruel world*" when loading and removing driver.      
Enter "*make*" to compile, "*make clean*" to clean.    
After using make, you should see serveral additional files including "*hello_world.ko*", which linux would use to load as a module(module is the superset of driver)  
Then enter "*sudo insmod hello_world.ko*" to load our module into kernel.  
By using "*lsmod | grep 'hello*'*", our module should showed up.  
Our message would not show on the terminal, instead it would be located in the driver message, which we could inspect by "*sudo dmesg | tail*"    
Lastly, type "*sudo rmmod hello_world*" to remove our module.

