function build {
    param($file_base)
    $input_file = $file_base + ".cpp"
    $result = $file_base + ".exe"
    Write-host $result
    g++.exe -std=c++17 .\$input_file -o $result
}


$file_base = Read-Host -Prompt 'Enter file name'
build($file_base)