# nebula-test 使用文档

- 安装pytest以及相关工具
  - pip3 install -r requirements.txt
- 设置环境变量
  - 设置结果输出目录
    - export NEBULA_TEST_LOGS_DIR=xxx
- 运行测试程序
  - 进入Nebula编译目录下的 tests 目录
  - ./ntr  query/stateless/
- 测试如何编写
  - 例子：query/stateless/test_simple_query.py
  - 其中每一个功能 test case 都是一个类，而这个类必须继承 NebulaTestSuite.
  - 这里每一个 test_xxx 都是一个 case.
  - 这里特殊的两个方法则是 prepare 和 cleanup，分别是 case 的启动和退出的时候被调用.
  - 框架提供的函数
    - execute(ngql)
      - 用来执行非查询的一些语句，比如insert/show等等
    - execute_query(ngql)
      - 用来执行查询语句
    - check_resp_succeeded(resp)
      - 用来检测返回的值是否成功
    - check_resp_failed(resp)
      - 和check_resp_succeeded相反
    - search_result(col, rows, expect)
      - 用来检测返回的行是否和期望一致，这里行可以是乱序，并且列值支持正则
    - check_result(rows, expect)
      - 用来检测返回的行和期望一致，这里是行是按照严格顺序，并且列值支持正则
    - check_out_of_order_result
      - 用来检测返回的行是否和期望一致，行可以是乱序，不支持正则
    - check_empty_result
      - 用来检测结果是否为空
    - check_path_result(rows, expect)
      - 用来检测路径查询结果是否正确
  - 框架提供的变量
    - 这几个变量都是为了防止我们做查询或者插入时 schema 没有同步导致出错.
    - graph_delay
      - graphd和meta同步的时间间隔
    - storage_delay
      - storaged和meta同步的时间间隔
    - delay
      - 上面两个值之间的最大值