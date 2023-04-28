# LIBFT
# 42_libft

## Project instructions & grade
C programming can be very tedious when one doesn’t have access to the highly useful standard functions. This project is about understanding the way these functions work, implementing and learning to use them. Your will create your own library. It will be helpful since you will use it in your next C school assignments.

| Program name | `libft.a` |
|:--- |:--- |
| **Turn in files** | `Makefile, libft.h, ft_*.c` |
| **Makefile** | `NAME, all, clean, fclean, re` |
| **External functions** | `Detailed in original subject` |
| **Libft authorized** | `n/a` |
| **Description** | `Write your own library:  a collection of functions that will be a useful tool for your cursus.` |

## Common instructions 
<details>
<summary>see more</summary>
  
* Your project must be written in accordance with the Norm. If you have bonus
files/functions, they are included in the norm check and you will receive a 0 if there
is a norm error inside.
* Your functions should not quit unexpectedly (segmentation fault, bus error, double
free, etc) apart from undefined behaviors. If this happens, your project will be
considered non functional and will receive a 0 during the evaluation.
* All heap allocated memory space must be properly freed when necessary. No leaks
will be tolerated.
* If the subject requires it, you must submit a Makefile which will compile your
source files to the required output with the flags -Wall, -Wextra and -Werror, and
your Makefile must not relink.
* Your Makefile must at least contain the rules $(NAME), all, clean, fclean and
re.
* To turn in bonuses to your project, you must include a rule bonus to your Makefile,
which will add all the various headers, librairies or functions that are forbidden on
the main part of the project. Bonuses must be in a different file _bonus.{c/h}.
Mandatory and bonus part evaluation is done separately.
* If your project allows you to use your libft, you must copy its sources and its
associated Makefile in a libft folder with its associated Makefile. Your project’s
Makefile must compile the library by using its Makefile, then compile the project.
* We encourage you to create test programs for your project even though this work
won’t have to be submitted and won’t be graded. It will give you a chance
to easily test your work and your peers’ work. You will find those tests especially
useful during your defence. Indeed, during defence, you are free to use your tests
and/or the tests of the peer you are evaluating.
* Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done
after your peer-evaluations. If an error happens in any section of your work during
Deepthought’s grading, the evaluation will stop.
</details>
  
## Technical considerations
<details>
<summary>see more</summary>
  
* It is forbidden to use global variables.
* If you need subfunctions to write a complex function, you should define these subfunctions as static to avoid publishing them with your library. It would be a good
habit to do this in your future projects as well.
* Submit all files in the root of your repository.
* It is forbidden to submit unused files.
* Every .c must compile with flags.
* You must use the command ar to create your librairy, using the command libtool
is forbidden.
</details>

## Libc, additionals and bonus functions

<details>
  <summary>You must re-code the following functions. These function do not need any external functions:</summary>
• memset          
• bzero
• memcpy          
• memccpy
• memmove         
• memchr
• memcmp          
• strlen
• strlcpy
• strlcat
• strchr
• strrchr
• strnstr
• strncmp
• atoi
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• toupper
• tolower
</details>

<details>
  <summary>You must also re-code the following functions, using the function “malloc”:</summary>
• calloc
• strdup
</details>

<details>
  <summary> Additional functions </summary>

* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
  *ft_strmapi
  *ft_putchar_fd
  *ft_putstrfd
  *ft_putendl_fd
  *ft_putnbr_fd
  </details>
  
  <details>
  <summary> Bonus functions </summary>
* ft_lstnew
  * ft_lstadd_front
  * ft_lstadd_back
  * ft_lstsize
  * ft_lstlast
  * ft_lstdelone
  * ft_lstclear  
  * ft_lstiter
  * ft_lstmap
