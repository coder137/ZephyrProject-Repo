#!/usr/bin/env python3

"""
The purpose of this script is to pass extra arguments to the testing CMakeLists.txt files as well as reduce typing a bunch of arguments manually on the command line
"""

import subprocess
import os

PROJECT_DIR = os.getcwd()
ZEPHYR_BASE = os.getenv("ZEPHYR_BASE")
os.environ["ZEPHYR_TOOLCHAIN_VARIANT"] = "host"

subprocess.call(
    [
        f"{ZEPHYR_BASE}/scripts/twister",
        "-T",
        ".",
        f"-x=CURRENT_PROJECT_DIR={PROJECT_DIR}",
        "-C",
        "--coverage-tool",
        "lcov",
        "--coverage-platform",
        "native_posix",
        "--coverage-basedir",
        ".",
        "-v",
    ]
)
