FROM ubuntu
RUN apt update
RUN apt-get install build-essential -y
RUN apt-get install cmake -y
RUN mkdir /home/rectangleProj
RUN rm -rf build
ADD ./ /home/rectangleProj/
