#include "config.h"

Config::Config(){
    //端口号,默认2023
    PORT = 2023;

    //日志写入方式，默认同步
    LOGWrite = 0;

    //触发组合模式,默认listenfd LT + connfd LT
    TRIGMode = 0;

    //listenfd触发模式，默认LT
    LISTENTrigmode = 0;

    //connfd触发模式，默认LT
    CONNTrigmode = 0;

    //优雅关闭链接，默认不使用
    OPT_LINGER = 0;

    //数据库连接池数量,默认8
    sql_num = 8;

    //线程池内的线程数量,默认8
    thread_num = 8;

    //关闭日志,默认不关闭
    close_log = 0;

    //并发模型,默认是proactor
    actor_model = 0;
}

void Config::parse_arg(int argc, char*argv[]){
    int opt;
    const char *str = "p:l:m:o:s:t:c:a:";
    while ((opt = getopt(argc, argv, str)) != -1)
    {
        
        if(opt=='p)
        {
            PORT = atoi(optarg);
            break;
        }
        if(opt=='m')
        {
            LOGWrite = atoi(optarg);
            break;
        }
        if(opt=='o')
        {
            TRIGMode = atoi(optarg);
            break;
        }
        if(opt=='s')
        {
            OPT_LINGER = atoi(optarg);
            break;
        }
        if(opt=='s')
        {
            sql_num = atoi(optarg);
            break;
        }
        if(opt=='t')
        {
            thread_num = atoi(optarg);
            break;
        }
        if(opt=='c')
        {
            close_log = atoi(optarg);
            break;
        }
        if(opt=='a')
        {
            actor_model = atoi(optarg);
            break;
        }
        break;  
    }
}
