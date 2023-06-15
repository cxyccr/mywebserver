# mywebserver
本项目非原创借鉴陈硕大佬muduo库和https://github.com/qinguoyi 大佬感谢大佬对项目中每一个细节都有详细的解释

运行环境 Ubuntu

浏览器测试环境 chrome

使用线程池+非阻塞socket+io多路复用（epoll）+事件处理的并发模型

使用状态机解析http请求 get post 请求均实现

使用日志（同步/异步）记录运行状态

使用定时器处理非连接活动
