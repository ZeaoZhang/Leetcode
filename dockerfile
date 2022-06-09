FROM ubuntu:18.04

# 复制代码
ADD . /leetcode

# 设置容器启动后的默认运行目录
WORKDIR /leetcode/code

RUN apt-get update && apt-get -y install g++ && apt-get -y install make && apt-get install dos2unix

CMD dos2unix help.sh && bash help.sh

	

