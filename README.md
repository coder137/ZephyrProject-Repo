# ZephyrProject-Repo

Zephyr project repository

# Pre-requisites

- Python3 and pip

# Getting Started

## Python environment setup

- `pip install pipenv`
- `pipenv install`
- `pipenv install west`
- `pipenv graph`
- `pipenv shell`

Do everything under `pipenv shell`

## Zephyr setup

- `west init zephyrproject`
    - **zephyrproject** is added to .gitignore. Please keep the folder name same
- `cd zephyrproject/zephyr`
- `git checkout v3.0.0`
- `cd ..`
- `west update`
- `cd zephyr`
- `pip install -r scripts/requirements.txt`
- `chmod +x zephyr-env.sh`
- `source zephyr-env.sh`
- `west zephyr-export`

# Regular usage after initial setup

- `pipenv shell`
- `cd zephyrproject/zephyr`
- `source zephyr-env.sh`
- Periodically run `west update`

DONE

# Roadmap

## Templates

- [ ] Zephyr C example
- [ ] Zephyr C example for
    - ARM architecture
    - Native Posix architecture (debuggable/unit testable)
- [ ] Zephyr C example with Rust libraries for high level functionality

## Development

- [ ] Simulation using QEMU
- [ ] Unit Testing and Mocking
- [ ] Code Coverage
- [ ] CI/CD
- [ ] Documentation
