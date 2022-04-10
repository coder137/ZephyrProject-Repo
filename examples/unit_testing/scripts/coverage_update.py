#!/usr/bin/env python3

"""
The purpose of this script is to perform additional processing on the `coverage.info` file generated by Zephyr Twister

See the `REMOVE_LIST` for the folders excluded from the test report
"""

import subprocess
import os

COVERAGE_FILE = "twister-out/coverage.info"
UPDATED_COVERAGE_FILE = "twister-out/coverage_truncated.info"
ZEPHYR_BASE = os.getenv("ZEPHYR_BASE")
REMOVE_LIST = [
    f"*{ZEPHYR_BASE}/*",
    "*/test/*",
]

# Main subprocess call
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
