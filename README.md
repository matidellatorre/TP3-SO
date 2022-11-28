
# 3er Trabajo práctico - Sistemas Operativos - 2022 2Q - ITBA


 Este trabajo es una investigación sobre el sistema operativo NoNameOS (ex AMOS). 
 
 Fork del siguiente proyecto: https://github.com/stephenfewer/NoNameOS/

 ## Intrucciones de compilación y ejecución

 1. Posicionarse en la carpeta raíz del repositorio

 2. Crear una imagen Docker con ```docker build -t tp3/nonameos .```

 3. Correr la imagen recién creada con ```docker run -v "${PWD}:/root" --privileged -ti tp3/nonameos:latest```

 4. Ejecutar los makefiles: ```make lib```, ```make kernel```, ```make apps``` y ```make image```

 5. Correr el QEMU con ```qemu-system-x86_64 -fda ./bin/NoNameOS.vfd```




    

