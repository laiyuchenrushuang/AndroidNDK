# AndroidNDK
* Android-NDK
* android-NDK环境搭建
# 配置
*      NDK目录配置
*      gradle校验
*      生成jni头文件
				
# 编写流程
*      编写native方法
*      生成头文件
*      加载so
				
# 运行测试
*      遇到的错误
*      gradle运行出错
*      加载so遇到的错误，cpu匹配，java层static loadLibrary

# 目录结构
*      so文件目录
*      android.mk文件目录

# 什么是ABI
*    Android 系统支持的cpu架构有哪些
        ARMv5
        ARMv7
        x86
        MIPS
        ARMv8,MIPS64和x86_64,ARM64_v8a
# 拓展知识

# jni交互的第二部分
* 调用思想
* 	找到对应的类jclass
*	找到对应的方法jmethodID
* 	调用相关的方法CallVoidMethod
*	释放相关的资源
# 方法的签名
* 	为什么要有方法签名，解决重载问题
* 	签名的规则
* 	基本类型(boolean z，long j...)
* 	如果是类
* 	如果是数组
* 	命令javap -s
# 如何添加log
* 	修改build.gradle文件
* 	在配置文件ndk选项中添加idLibs("")
* 	在cpp/c文件中添加打印log的方法，注意定义宏
# c调用java的静态方法
* 	调用静态方法
* 	修改静态字段
* 	问题
* 查找类的时候文件路径问题
* 	静态和非静态的调用方式
* 	方法用完数据的clean
* 	似乎用的是反射原理？
# c调用java的实例方法
* 调用实例的方法
* 找到对应的class，
* 然后调用其构造方法
* 创建其对象NewObject
* 调用其方法
* 修改实例字段
* 如何创建实例的对象
      
# ndk调试
* 	ndk崩溃的显现
* 	崩溃日志的查看
 	错误信号
 	寄存器信息
 	方法调用栈
# 常见的ndk异常有哪些
 	野指针
 	空指针
 	数组越界
 	内存溢出
 	堆栈溢出
# 什么是符号表
* 解决方案
 	addr2line工具
	ndk-stack命令
 	-sym
 	-dump
# NDK异常
* 	异常产生的原因
 	编译的时候
 	运行的时候
* 	jni层调用java层异常，跟java异常有什么不一样的地方呢
* 	处理方式
	ExceptionCheck
	ExcptionOccurred
* 出现异常后我们的操作是什么呢？
