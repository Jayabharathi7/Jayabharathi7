/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */


set nu
set tabstop=4
set incsearch hlsearch
set sw=6
filetype indent on
set mouse=a
autocmd BufNewFile *.c 0r ~/Templates/temp.c
