/**************************************************************
 *          This code is from the book: LDD 3th edition      *
 *                                                          *
 * *********************************************************/

#include <linux/init.h>
#include <linux/module.h> //necessary for all linux modules
MODULE_LICENSE("Dual BSD/GPL"); //free licence. kernel would complain without this line

static int hello_init(void){
    //using printk since the kernel need its own printing function(can't rely on C library)
    //KERN_ALERT means high prority message in this module
    printk(KERN_ALERT "hello world\n"); 
    return 0;
}

static void hello_exit(void){
    printk(KERN_ALERT "Goodbye, cruel world\n");
}

module_init(hello_init); //loading module
module_exit(hello_exit); //removing module)