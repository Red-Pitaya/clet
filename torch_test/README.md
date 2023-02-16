Pytorch中为什么会调用C++呢？目前猜测有两点:
1. 提高运算速度，C++偏向于底层，运算速度更快（相对于Python至少提升10倍）；
2. Pytorch中的内置函数不能满足自己想要实现的算法，不得不自己写code实现（我就是这种，好惨啊）。而且更重要的是，Pytorch的底层是C++（逐渐从c向C++转）。


个人的一点小体会，如果你刚开始上手学习深度学习，不管是Pytorch还是Tensorflow，在windows下学习运行就可以。但是，一旦你上复杂的项目或者实战，那必须到 Linux 系统。为什么呢？
1. Linux对深度学习环境更加友好，某些命令在windows下根本无法编译；
2. 作为一个学习人员，Github上的code大多是在Linux下编译和运行的。

https://blog.csdn.net/juluwangriyue/article/details/108463026
