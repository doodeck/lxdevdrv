/* https://www.oreilly.com/library/view/linux-device-drivers/9781785280009/f1bd9275-70aa-4e94-89c4-a31dc7d5b60d.xhtml */

#include <linux/init.h> 
#include <linux/module.h> 
#include <linux/kernel.h> 
 
static int __init helloworld_init(void) { 
    pr_info("Hello world!\n"); 
    return 0; 
} 
 
static void __exit helloworld_exit(void) { 
    pr_info("End of the world\n"); 
} 
 
module_init(helloworld_init); 
module_exit(helloworld_exit); 
MODULE_AUTHOR("John Madieu <john.madieu@gmail.com>"); 
MODULE_LICENSE("GPL"); 
