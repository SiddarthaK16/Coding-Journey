import os

def print_directory_contents(path='/'):
    try:
        entries = os.listdir(path)
    except FileNotFoundError:
        print(f"Error: directory not found → {path}")
        return
    except PermissionError:
        print(f"Error: access denied → {path}")
        return

    print(f"\nContents of directory: {path}\n")
    for entry in entries:
        print(entry)

if __name__ == '__main__':
    directory = input("Enter directory path (or leave blank for current dir): ").strip() or '.'
    print_directory_contents(directory)
