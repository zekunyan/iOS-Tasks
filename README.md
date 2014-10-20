iOS Tasks
=========

    ITEC学习iOS的同学的Github聚集地 =。=

	iOS开发的学习是个漫长而有趣的过程，加油吧~
	
### 提交说明
1. 自己建个Github的账号，fork一份到你自己本地。
2. 以自己的名字拼音全称创建文件夹，来存放你的Task代码。

熟悉熟悉Git怎么用，有个概念了以后可以用SourceTree客户端。
注意代码规范。
每次提交的时候记着Push一份到我这。

### 学习
#### 编程语言
开发iOS的主要编程语言是Object-C（cocoa框架），当然还有C语言，C++等等。（最新的Swift暂时不考虑，不够成熟）C++大部分用来开发图像、音视频等性能敏感的库，一般的应用只会涉及到Object-C。

目前Object-C的开发、维护基本上也就是Apple在做，所以学习Object-C最好最权威的地方就是Apple developer官网->https://developer.apple.com/devcenter/ios/index.action

这里是几个比较好的教程：
* [Object-C基本教程。](https://developer.apple.com/library/mac/documentation/cocoa/conceptual/ProgrammingWithObjectiveC/Introduction/Introduction.html)
* [面向对象编程：Object-Oriented Programming with Objective-C](https://developer.apple.com/library/ios/documentation/Cocoa/Conceptual/OOP_ObjC/Introduction/Introduction.html#//apple_ref/doc/uid/TP40005149)。
* [Block专题教程。这个非常强大！](https://developer.apple.com/library/ios/documentation/Cocoa/Conceptual/Blocks/Articles/00_Introduction.html#//apple_ref/doc/uid/TP40007502)
* [线程: Threading Programming Guide。](https://developer.apple.com/library/ios/documentation/Cocoa/Conceptual/Multithreading/Introduction/Introduction.html#//apple_ref/doc/uid/10000057i)
* [字符串：String Programming Guide。](https://developer.apple.com/library/ios/documentation/Cocoa/Conceptual/Strings/introStrings.html#//apple_ref/doc/uid/10000035i)
* [异常处理：Exception Programming Topics。](https://developer.apple.com/library/ios/documentation/Cocoa/Conceptual/Exceptions/Exceptions.html#//apple_ref/doc/uid/10000012i)
* [并发编程：Concurrency Programming Guide。](https://developer.apple.com/library/ios/documentation/General/Conceptual/ConcurrencyProgrammingGuide/Introduction/Introduction.html#//apple_ref/doc/uid/TP40008091)
* [集合类：Collections Programming Topics。](https://developer.apple.com/library/ios/documentation/Cocoa/Conceptual/Collections/Collections.html#//apple_ref/doc/uid/10000034i)

当然，还有许多非常好的第三方教程，如：[tutorialspoint的](http://www.tutorialspoint.com/objective_c/index.htm)
**基础很重要**

#### iOS开发
有了一定的OC基础以后，就可以着手做几个小东西玩玩，练练手。iOS的体系很庞大，所以一开始最好先按照简单的教程来做一些Demo。当然，[官方的教程](https://developer.apple.com/library/ios/navigation/#)是非常全面的，但是未免有些吓人=。=，太多了。。。所以在此推荐一个非常好的网站：[www.raywenderlich.com](http://www.raywenderlich.com/)，新手可以按照里面的教程，做些Demo应用，攒点成就感~~

当然，大神们的博客是要多多阅读的：[中文 iOS/Mac 开发博客列表](https://github.com/tangqiaoboy/iOSBlogCN).

**遇到问题多Google（不许用Baidu =。= ），stackoverflow是你最好的伙伴**

### 任务
1. Task1: 按照教程[iOS Tutorial: How To Create A Simple iPhone App](http://www.raywenderlich.com/1797/ios-tutorial-how-to-create-a-simple-iphone-app-part-1)，完成教程中的Demo应用。
2. Task2: 按照教程[iOS 7 Best Practices; A Weather App Case Study: Part 1](http://www.raywenderlich.com/55384/ios-7-best-practices-part-1)，完成一个静态数据的天气应用。
3. Task3: 做一个简单的笔记应用。
要求：1). 只用记录文字，有标题、正文、创建时间等基本信息。2). 一共两个页面，首页是所有笔记的列表，点击一条笔记进入笔记的详细内容页面，可以编辑笔记。3). 笔记可以创建、修改、删除、加星标记等。4). 用SQLite数据库保存笔记数据（可以用FMDB第三方库）。5). 发挥你的创造力！
4. Task4: 仿照青桔音乐的iOS客户端，实现歌曲榜、歌手帮的功能（不要求实现播放器，以本地歌曲代替，重点是AFNetworking库的使用，Json，异步更新UI，动画等等）。。。待续。。。
