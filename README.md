Blinkatron
==========

An example using ib to compile c++ project for avr platforms

## Compile the code

ib will compile your target to `../out/debug`

```
ib main
```

## Upload the code

This example uploads main target to atmega328p using the atmel ice programmer using avrdude.

```
avrdude -c atmelice_isp -p atmega328p -P usb -v -U flash:w:../out/debug/main
```
