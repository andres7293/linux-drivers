#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>
 
static int __init driver_init(void)
{
    printk(KERN_INFO "Linux driver registered");
    return 0;
}
 
static void __exit driver_exit(void)
{
    printk(KERN_INFO "Linux driver unregistered");
}
 
module_init(driver_init);
module_exit(driver_exit);
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Andres7293");
MODULE_DESCRIPTION("First linux device driver");
