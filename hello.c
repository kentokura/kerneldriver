#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{

}

static void hello_exit(void)
{

}

module_init(hello_init);
module_exit(hello_exit);

