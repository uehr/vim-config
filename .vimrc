" setting
nmap - $
nmap s ^

command! Cmacro :r! type C:\Users\yudai\cppmacro.txt 

:source $VIMRUNTIME/mswin.vim
 " Note: Skip initialization for vim-tiny or vim-small.
 if 0 | endif

 if has('vim_starting')
   if &compatible
     set nocompatible               
   endif

   " Required:
   set runtimepath+=~/.vim/bundle/neobundle.vim/
 endif

 " Required:
 call neobundle#begin(expand('~/.vim/bundle/'))

 " NeoBundle 設定
 " Required:
 NeoBundleFetch 'Shougo/neobundle.vim'

 " My Bundles here:
 " Refer to |:NeoBundle-examples|.
 " Note: neobundle の設定を.gvimrcに書かないこと！

 " ここに追加したいプラグインを追加します。 
NeoBundle 'https://github.com/Shougo/neocomplcache.git'
NeoBundle 'https://github.com/Shougo/unite.vim.git'
NeoBundle 'https://github.com/Shougo/vimshell.git'
NeoBundle 'Shougo/neocomplete.vim'

 call neobundle#end()

 " Required:
 filetype plugin indent on

 " If there are uninstalled bundles found on startup,
 " this will conveniently prompt you to install them.
 NeoBundleCheck

"" neocomplcache
NeoBundle 'Shougo/neocomplcache'
" Disable AutoComplPop.
let g:acp_enableAtStartup = 0
" Use neocomplcache.
let g:neocomplcache_enable_at_startup = 1
" Use smartcase.
let g:neocomplcache_enable_smart_case = 1
" Set minimum syntax keyword length.
let g:neocomplcache_min_syntax_length = 3
let g:neocomplcache_lock_buffer_name_pattern = '\*ku\*'

" Define dictionary.
let g:neocomplcache_dictionary_filetype_lists = {
    \ 'default' : ''
    \ }

" Plugin key-mappings.
inoremap <expr><C-g>     neocomplcache#undo_completion()
inoremap <expr><C-l>     neocomplcache#complete_common_string()

" Recommended key-mappings.
" <CR>: close popup and save indent.
inoremap <silent> <CR> <C-r>=<SID>my_cr_function()<CR>
function! s:my_cr_function()
  return neocomplcache#smart_close_popup() . "\<CR>"
endfunction
" <TAB>: completion.
inoremap <expr><TAB>  pumvisible() ? "\<C-n>" : "\<TAB>"
" <C-h>, <BS>: close popup and delete backword char.
inoremap <expr><C-h> neocomplcache#smart_close_popup()."\<C-h>"
inoremap <expr><BS> neocomplcache#smart_close_popup()."\<C-h>"
inoremap <expr><C-y>  neocomplcache#close_popup()
inoremap <expr><C-e>  neocomplcache#cancel_popup()

"移動キー
nmap t j
vmap t j
nmap n l
vmap n l

"undofile無生成
set noundofile

"文字コードをUFT-8に設定
set fenc=utf-8

" バックアップファイルを作らない
set nobackup

" スワップファイルを作らない
set noswapfile

" 編集中のファイルが変更されたら自動で読み直す
set autoread

" バッファが編集中でもその他のファイルを開けるように
set hidden

" 入力中のコマンドをステータスに表示する
set showcmd

" 見た目系
" 行番号を表示
"
set number
" 行末の1文字先までカーソルを移動できるように
"
set virtualedit=onemore
" インデントはスマートインデント
"
set smartindent
" ビープ音を可視化
"
set visualbell
" 括弧入力時の対応する括弧を表示
"
set showmatch
" ステータスラインを常に表示
"
set laststatus=2
" コマンドラインの補完
"
set wildmode=list:longest
" 折り返し時に表示行単位での移動できるようにする
"
nnoremap j gj
nnoremap k gk


" Tab系
" 不可視文字を可視化(タブが「?-」と表示される)
set list listchars=tab:\?\-
" Tab文字を半角スペースにする
set expandtab
" 行頭以外のTab文字の表示幅（スペースいくつ分）
set tabstop=2
" 行頭でのTab文字の表示幅
set shiftwidth=2


" 検索系
" 検索文字列が小文字の場合は大文字小文字を区別なく検索する
set ignorecase
" 検索文字列に大文字が含まれている場合は区別して検索する
set smartcase
" 検索文字列入力時に順次対象文字列にヒットさせる
set incsearch
" 検索時に最後まで行ったら最初に戻る
set wrapscan
" 検索語をハイライト表示
set hlsearch
" ESC連打でハイライト解除
nmap <Esc><Esc> :nohlsearch<CR><Esc>
