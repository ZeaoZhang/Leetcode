FROM ubuntu

# 复制代码
ADD . /leetcode

# 设置容器启动后的默认运行目录
WORKDIR /leetcode

RUN apt-get update && apt-get -y install g++ && apt-get install make

CMD cd ./code && make all && make test && make clean
