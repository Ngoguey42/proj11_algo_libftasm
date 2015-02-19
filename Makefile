#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 11:29:36 by ngoguey           #+#    #+#              #
#    Updated: 2015/02/19 08:19:59 by ngoguey          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NNAME = fts
NAME = lib$(NNAME).a

INCLUDE = ./includes
SRCPATH = srcs
OBJPATH = obj

CC = nasm
CFLAGS = -f macho64 --prefix _

LIB = ar rc
RM = rm -rf

Y = \033[0;33m
R = \033[0;31m
G = \033[0;32m
E = \033[39m

#SOURCES VARIABLES
COUNT = 0
TABLEN = 28
W = 0
OBJPERLINES = 4


#SOURCES
SRCSFILES = \
ft_isalpha.s ft_isdigit.s ft_isascii.s ft_isalnum.s ft_isprint.s\
ft_toupper.s ft_tolower.s\
ft_puts.s ft_cat.s\
ft_bzero.s		ft_strcat.s		ft_memcpy2.s	ft_strcpy2.s \
ft_strlen.s		ft_strdup.s		ft_memcpy.s		ft_strcpy.s		ft_memset.s\
ft_memcmp.s ft_strcmp.s ft_memchr.s ft_strchr.s ft_strlcat.s ft_strlcpy.s


#SOURCES/OBJECTS TARGETS
SRC = $(addprefix $(SRCPATH)/,$(SRCSFILES))
OBJECTS = $(SRC:$(SRCPATH)/%.s=$(OBJPATH)/%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@printf "\n$(Y)%-6s$(E) $(NAME) $(R)$(OBJPATH)/%.o$(E)\n" "$(LIB)"
	@$(LIB) $(NAME) $(OBJECTS)
	@printf "$(Y)%-6s$(E) $(NAME)\n" "ranlib"
	@ranlib $(NAME)

$(OBJECTS): $(OBJPATH)/%.o : $(SRCPATH)/%.s
	@if [ $(W) -eq 0 ] ; then printf "\n$(Y)%-6s$(E) -o $(R)$(OBJPATH)/%%.o$(E) $(CFLAGS) -I $(INCLUDE) -c $(SRCPATH)/%%.s\n" "$(CC)" ; fi
	$(eval W = 1)
	$(eval COUNT = $(shell echo "($(COUNT) + 1) % $(OBJPERLINES)" | bc))
	 @#printf "$(R)%-*s$(E)" $(TABLEN) "$@"
	@if [ $(COUNT) -eq 0 ] ; then printf "$(R)%s$(E)\n" "$@" ; else printf "$(R)%-*s$(E)" $(TABLEN) "$@" ; fi
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ $<

clean:
	@printf "$(Y)%-6s$(E) $(OBJPATH)\n" "$(RM)"
	@$(RM) $(OBJPATH)

fclean: clean
	@printf "$(Y)%-6s$(E) $(NAME)\n" "$(RM)"
	@$(RM) $(NAME)

re: fclean all
