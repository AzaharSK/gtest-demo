# Use Microsoft’s official C++ devcontainer base for Ubuntu 22.04
FROM mcr.microsoft.com/vscode/devcontainers/base:0-ubuntu-22.04

# avoid interactive prompts
ENV DEBIAN_FRONTEND=noninteractive

# Install build tools, Boost, coverage tools, Python, etc.
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
      cmake \
      g++ \
      git \
      libboost-all-dev \
      gcovr \
      lcov \
      curl \
      wget \
      unzip \
      python3 \
      python3-pip \
      make && \
    rm -rf /var/lib/apt/lists/*

# Install GoogleTest from upstream
RUN git clone https://github.com/google/googletest.git /opt/googletest && \
    mkdir -p /opt/googletest/build && \
    cd /opt/googletest/build && \
    cmake .. && \
    make -j$(nproc) && \
    make install

# Set default workdir (where VS Code will mount your sources)
WORKDIR /workspace

# Switch back to the non-root vscode user
USER vscode

