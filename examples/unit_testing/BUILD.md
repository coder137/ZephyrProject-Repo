# Build instructions

## Native posix

```
west build -b native_posix -d _build_native_posix .
```

## Supported Target boards

```
ZEPHYR_TOOLCHAIN_VARIANT=gnuarmemb GNUARMEMB_TOOLCHAIN_PATH=/usr west build -b disco_l475_iot1 -d _build_l475_iot1 .
```

## Unit Testing

## Unit Testing with Mocking
