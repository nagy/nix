#pragma once

namespace nix {

static inline bool no_color() {
    return getenv("NO_COLOR") != NULL;
}

/* Some ANSI escape sequences. */
#define ANSI_NORMAL  (::std::string("\e[0m"))
#define ANSI_BOLD    (::std::string("\e[1m"))
#define ANSI_FAINT   (::std::string("\e[2m"))
#define ANSI_ITALIC  (::std::string("\e[3m"))
#define ANSI_RED     (::std::string( ::nix::no_color() ? "" : "\e[31;1m"))
#define ANSI_GREEN   (::std::string( ::nix::no_color() ? "" : "\e[32;1m"))
#define ANSI_YELLOW  (::std::string( ::nix::no_color() ? "" : "\e[33;1m"))
#define ANSI_BLUE    (::std::string( ::nix::no_color() ? "" : "\e[34;1m"))
#define ANSI_MAGENTA (::std::string( ::nix::no_color() ? "" : "\e[35;1m"))
#define ANSI_CYAN    (::std::string( ::nix::no_color() ? "" : "\e[36;1m"))

}
