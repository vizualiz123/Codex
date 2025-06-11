This repository now contains a Windows program source file.

To compile `message_window.c` on Windows using Visual Studio's Developer Command Prompt:

```cmd
cl message_window.c user32.lib
```

The resulting `message_window.exe` will display a message box every 30 seconds.

Compilation is not possible in this environment because Windows headers and libraries are not available.
