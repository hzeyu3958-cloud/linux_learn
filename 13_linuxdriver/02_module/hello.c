#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
// 模块初始化函数
MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("yangyang");
MODULE_DESCRIPTION("hello world module");
MODULE_VERSION("1.0");
int __init hello_init(void)
{
    printk(KERN_INFO"hello world\n");
    return 0;
}
// 模块卸载函数
void __exit hello_exit(void)
{
    printk(KERN_INFO"goodbye world\n");
}


module_init(init_module);
module_exit(cleanup_module);


