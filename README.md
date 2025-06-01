### Memento Pattern Example in C++ 

Пример реализации паттерна проектирования Memento (Снимок)  на языке C++.
Этот шаблон позволяет сохранять и восстанавливать внутреннее состояние объекта без нарушения инкапсуляции. 

**Назначение** 

Позволяет сохранять внутреннее состояние объекта таким образом, чтобы его можно было восстановить в дальнейшем, не нарушая принципов инкапсуляции. Это особенно полезно при работе с критическими системами, такими как виртуальные машины, редакторы, транзакционные системы и т.д. 

**Структура проекта**
```
memento-pattern/
├── CMakeLists.txt
├── main.cc
├── include/
│   └── virtual_machine.hpp
├── src/
│   ├── virtual_machine.cpp
│   └── CMakeLists.txt
├── test/
│   ├── test_memento.cpp
│   └── CMakeLists.txt
└── .github/
    └── workflows/
        └── build-deploy.yml
```

**Локальная сборка:**
```
git clone https://github.com/yourusername/memento-pattern.git 
cd memento-pattern

mkdir build && cd build
cmake ..
make
```
./main

Пример вывода
----------------
Cpu Count : 1
Ram Size  : 500

----------------
Cpu Count : 16
Ram Size  : 1500

----------------
Cpu Count : 1
Ram Size  : 500

----------------
Cpu Count : 4
Ram Size  : 6000

----------------
Cpu Count : 16
Ram Size  : 1500
