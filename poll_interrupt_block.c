
(...)

int main() {
    struct pollfd myPollfd;
    myPollfd.fd = open("/sys/class/gpio/GPIO_IN_WHEEL1/value", O_RDONLY); //store filedescriptor in struct, open(path, read-write-permission)
    myPollfd.events = POLLPRI;
    while (1) {
        poll(&myPollfd, 1, -1); //poll(struct pollfd, max fd, timeout), timeout=-1 --> never
        if(myPollfd.revents & POLLPRI) {
            len = read(myPollfd.fd, buf, BUF_SIZE);  //mandatory to make system register interrupt as served
            printf("interrupt!\n",);
        }
        lseek(myPollfd.fd, 0, 0); //return cursor to beginning of file or next read() will return EOF
    }
    close(myPollfd.fd);
    return 0;
}
