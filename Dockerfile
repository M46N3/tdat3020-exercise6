FROM archlinux/base
RUN pacman -Sy --noconfirm clang
WORKDIR /home
COPY ./src /home
CMD ./run
