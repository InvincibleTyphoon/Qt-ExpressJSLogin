# Qt-ExpressJSLogin
Implementing login functionality using Qt and ExpressJS
This project is simple example that implements login functionality using Qt and Express JS.

# Develop environment
- OS : windows 10
- Qt version : 5.9.3
- Qt compilder : msvc2015 32bit
- Express Js environment : visual studio 2017


# How to use
1. Qt side
- Clone this project
- Install pre-compiled OpenSSL(1.0.2o) library and copy installed bin, lib, include folder to Qt's compiler folder 
  download link - https://slproweb.com/products/Win32OpenSSL.html
  OpenSSL library may be installed in : C:\OpenSSL-Win32
- load .pro file with Qt Creator
- Set proper compiler(in my case, msvc2015), run qmake and try run.

2. Express Js side
- npm install express Js dependencis in ExpressJsServer (if npm works, it will automatically detect dependencis in pakage.json)
- use 'node app' command in ExpressJsServer directory

3. Result
- on execution
![login](https://user-images.githubusercontent.com/25341053/43685661-1a508180-98f2-11e8-83bd-7479b435445e.PNG)

- login failure
https://user-images.githubusercontent.com/25341053/43685693-9105bbb0-98f2-11e8-90e7-814f81f3254a.PNG

- login success
https://user-images.githubusercontent.com/25341053/43685707-02e4285c-98f3-11e8-9fed-184fe489754e.PNG

4. id/ password : hello/world
