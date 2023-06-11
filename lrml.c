#include <linux/module.h>
static int __init runtime(void)
{
  if (main())
  {
    main();
  } 
  else
  {
    printk("internal error: main() is not defined");
  }
}
static void __exit exittime(void)
{
  
}
module_init(runtime);
module_exit(exittime);
MOUDLE_LICENSE("GPL");
