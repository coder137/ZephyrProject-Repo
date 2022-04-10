#!/usr/bin/env python3

import subprocess
import os

COVERAGE_FILE = "twister-out/coverage.info"
UPDATED_COVERAGE_FILE = "twister-out/coverage_truncated.info"
ZEPHYR_BASE = os.getenv("ZEPHYR_BASE")

REMOVE_LIST = [f"*{ZEPHYR_BASE}/*"]
subprocess.call(
    [
        "lcov",
        "--remove",
        COVERAGE_FILE,
    ]
    + REMOVE_LIST
    + [
        "--output-file",
        UPDATED_COVERAGE_FILE,
        "--rc",
        "lcov_branch_coverage=1",
    ]
)
