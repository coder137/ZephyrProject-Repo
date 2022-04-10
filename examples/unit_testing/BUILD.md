# Build instructions

## Native posix

```bash
west build -b native_posix -d _build_native_posix .
```

## Supported Target boards

```bash
ZEPHYR_TOOLCHAIN_VARIANT=gnuarmemb GNUARMEMB_TOOLCHAIN_PATH=/usr west build -b disco_l475_iot1 -d _build_l475_iot1 .
```

## Unit Testing

```bash
ZEPHYR_TOOLCHAIN_VARIANT=host $ZEPHYR_BASE/scripts/twister -T . -C --coverage-tool lcov --coverage-platform native_posix --coverage-basedir .
```

**Additional Processing**

```bash
# From project root
chmod +x scripts/coverage_update.py
./scripts/coverage_update.py
```

The above command runs

- `hello_world` example
- Unit Tests and Mocks registered in the tree
