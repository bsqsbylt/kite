# kite
A simple game engine for Lua

## 思路
```
1. 引擎将以 lua 库的形式提供
2. 图形核心将以 lapp 为主, 提供 窗口 3D渲染 等功能
3. 程序入口将以 ltask 为入口, 这样我们能创建多个app(多窗口), 并在 ltask 中管理
4. 框架以数据驱动 将引入云风的 luaecs, 渲染部分应该会在 luaecs c system 中完成以提高性能
```

## Build
```
从源码安装 lua5.4 到系统, 并且编译 lapp, ltask
```


## Test
```
lua main.lua config
```