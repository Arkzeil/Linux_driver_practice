/**************************************************************
 *          This code is from the book: LDD 3th edition      *
 *                                                          *
 * *********************************************************/

#include <linux/init.h>
#include <linux/module.h> //necessary for all linux modules
#include <linux/moduleparam.h> //for reading parameter at load time

MODULE_LICENSE("Dual BSD/GPL"); //free licence. kernel would complain without this line

static char *whom = "world";
static int amount = 1;

module_param(amount, int, S_IRUGO);
module_param(whom, charp, S_IRUGO);

static int hello_init(void){
    printk(KERN_ALERT "hello world! whom = %s, amount = %d", whom, amount); 
    //printk(KERN_ALERT, "whom = %s, amount = %d", whom, amount); //can't printk two lines? or is it because of KERN_ALERT?
    return 0;
}

static void hello_exit(void){
    printk(KERN_ALERT "Goodbye, cruel world\n");
}

module_init(hello_init); //loading module
module_exit(hello_exit); //removing module)