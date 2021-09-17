call plug#begin("~/.vim/plugged")

Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'tpope/vim-sensible'
Plug 'tmux-plugins/vim-tmux'
Plug 'lervag/vimtex'
Plug 'sheerun/vim-polyglot'
Plug 'majutsushi/tagbar'

call plug#end()

packadd! dracula
colorscheme delek 
set number
set relativenumber
set ruler
syntax enable
set title
set encoding=utf-8
set cursorline
set autoindent
set smartindent

set expandtab
set tabstop=4
set softtabstop=4
set shiftwidth=4

set smarttab
set scrolloff=10
set showtabline=2
set cmdheight=2


" ============================================================================
" AIRLINE CONFIGURATION
" ============================================================================
" set airline theme
" let g:airline_theme = 'wombat'
let g:airline_theme = 'onedark'
" let g:airline_theme = 'base16'
" displays all buffers when there's only one tab open
let g:airline#extensions#tabline#enabled = 1
" separators can be configured independently for the tablne
let g:airline#extensions#tabline#left_sep = ' '
let g:airline#extensions#tabline#left_alt_sep = '|'
" populate the g:airline_symbols dictionary with the powerline symbols
let g:airline_powerline_fonts = 1

" tagbar
nmap <C-c> :TagbarToggle<CR>
