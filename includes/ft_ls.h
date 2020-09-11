#ifndef FT_LS_H
# define FT_LS_H

# include "../libft/libft.h"
# include <dirent.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <pwd.h>
# include <uuid/uuid.h>
# include <grp.h>
# include <sys/xattr.h>
# include <time.h>
# include <stdio.h>

# define l_flag
# define R_flag
# define r_flag
# define a_flag
# define t_flag

typedef struct	s_data
{
    char			*filename;
    unsigned int	flag_set;
}				t_data;


#endif
