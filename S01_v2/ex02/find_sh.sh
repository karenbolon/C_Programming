# the 's' is substitute in sed, then regex (look for files with *.sh)/replacement (remove with sed)/flags */
#find . -type f -name "*\.sh" | sed "s/[.]sh*$//"
find . -type f -name "*.sh" -exec basename {} .sh \;
