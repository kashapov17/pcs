# Сборка последовательной программы

(Инструкция действительна только Linux-based платформ)

Чтобы выполнить сборку, нужна сборочная система Cmake, make и компилятор gcc. Установка в популярные дистрибутивы:
```
# Debian/Ubuntu:
apt install cmake make build-essential
# Arch Linux:
pacman -S cmake gcc base-devel
```
Загружаем исходные коды из пуибличного git-репозитория:
``` 
git clone https://github.com/kashapovd/pcs
```
Далее переходим в склонированный репозиторий и создаём каталог для сборки:
```
cd pcs/
mkdir build
cd build
```
Инициализируем проект как Cmake-проект:
```
cmake -DCMAKE_BUILD_TYPE=Release ../mini0
```
Теперь можно выполнить сборку с этом же каталоге:
```
make
```
Должен появиться исполняемый файл _mini0_:
```
yaroslav@arch ~/repos/pcs/build (master*?) $ ls
CMakeCache.txt  CMakeFiles  cmake_install.cmake  Makefile  mini0 <-----
```
Запускаем скомпилированную программу:
```
./mini0
```
