#!/bin/bash
# -*- coding: utf-8 -*-
# 汎用コンパイル実行スクリプト
# Python, Rust, C, C++ に対応
# Windows, WSL, Linux に対応

set -e

# 色定義
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# スクリプトのディレクトリを取得
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# OS判定
detect_os() {
    if [[ "$OSTYPE" == "msys" || "$OSTYPE" == "cygwin" || "$OSTYPE" == "win32" ]]; then
        echo "windows"
    elif grep -qi microsoft /proc/version 2>/dev/null; then
        echo "wsl"
    else
        echo "linux"
    fi
}

OS=$(detect_os)

# 実行ファイルの拡張子（Windows用）
EXE_EXT=""
if [[ "$OS" == "windows" ]]; then
    EXE_EXT=".exe"
fi

# Python 実行
run_python() {
    local file=$1
    echo -e "${GREEN}[Python]${NC} Running $file"
    python3 "$file" 2>/dev/null || python "$file"
}

# Rust 実行
run_rust() {
    local file=$1
    local output="${file%.rs}"
    
    # Cargo.toml が存在する場合は cargo を使用
    if [[ -f "Cargo.toml" ]]; then
        echo -e "${GREEN}[Rust]${NC} Building and running with cargo"
        cargo run --release
    else
        echo -e "${GREEN}[Rust]${NC} Compiling $file to $output"
        rustc -O "$file" -o "$output${EXE_EXT}"
        echo -e "${GREEN}[Rust]${NC} Running $output"
        ./"$output${EXE_EXT}"
    fi
}

# C 実行
run_c() {
    local file=$1
    local output="${file%.c}"
    
    echo -e "${GREEN}[C]${NC} Compiling $file"
    gcc -std=c23 -Wall -Wextra -O2 "$file" -o "$output${EXE_EXT}"
    
    echo -e "${GREEN}[C]${NC} Running $output"
    ./"$output${EXE_EXT}"
}

# C++ 実行
run_cpp() {
    local file=$1
    local output="${file%.cpp}"
    
    echo -e "${GREEN}[C++]${NC} Compiling $file"
    g++ -std=c++23 -Wall -Wextra -O2 "$file" -o "$output${EXE_EXT}"
    
    echo -e "${GREEN}[C++]${NC} Running $output"
    ./"$output${EXE_EXT}"
}

# メイン処理
main() {
    # 指定されたファイルまたはデフォルトのファイルを検出
    local target_file=""
    
    if [[ $# -gt 0 ]]; then
        # 引数がある場合は指定されたファイルを使用
        target_file=$1
        if [[ ! -f "$target_file" ]]; then
            echo -e "${RED}Error: File not found: $target_file${NC}" >&2
            exit 1
        fi
    else
        # 引数がない場合は自動検出（優先順位: main.py > main.rs > main.cpp > main.c）
        if [[ -f "main.py" ]]; then
            target_file="main.py"
        elif [[ -f "main.rs" ]]; then
            target_file="main.rs"
        elif [[ -f "main.cpp" ]]; then
            target_file="main.cpp"
        elif [[ -f "main.cc" ]]; then
            target_file="main.cc"
        elif [[ -f "main.c" ]]; then
            target_file="main.c"
        else
            echo -e "${RED}Error: No source file found${NC}" >&2
            echo "Looking for: main.py, main.rs, main.cpp, main.cc, main.c"
            exit 1
        fi
    fi
    
    # ファイル拡張子に基づいて実行
    case "$target_file" in
        *.py)
            run_python "$target_file"
            ;;
        *.rs)
            run_rust "$target_file"
            ;;
        *.c)
            run_c "$target_file"
            ;;
        *.cpp|*.cc)
            run_cpp "$target_file"
            ;;
        *)
            echo -e "${RED}Error: Unsupported file type: $target_file${NC}" >&2
            exit 1
            ;;
    esac
    
    echo -e "${GREEN}Done!${NC}"
}

main "$@" 