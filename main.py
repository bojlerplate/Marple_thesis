import os
def read_files_in_dir(dir_path):
    file_map = {}
    for root, dirs, files in os.walk(dir_path):
        for file in files:
            file_path = os.path.join(root, file)
            with open(file_path, 'r') as f:
                file_map[file] = f.read()
    return file_map

# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    input_project_dir = 'input_project'
    file_map = read_files_in_dir(input_project_dir)

    for file in file_map:
        if file.endswith('.cpp') or file.endswith('.h') or file.endswith('.c'):
            print(file)
            # call cpp instrumenter
        # if endswith (.py call py instrumenter etc...)
