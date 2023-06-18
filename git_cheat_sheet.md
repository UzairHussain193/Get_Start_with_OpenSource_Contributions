# Git Commands Cheat Sheet

## Repository Setup
- `git init`: Initializes a new Git repository.
- `git clone [repository URL]`: Creates a local copy of a remote repository.

## Making Changes
- `git add [file(s)]`: Adds file(s) to the staging area.
- `git commit -m "[commit message]"`: Creates a new commit with the staged changes.
- `git status`: Shows the current status of the repository.

## Collaboration
- `git push`: Uploads local commits to a remote repository.
- `git pull`: Fetches changes from a remote repository and merges them into the current branch.
- `git branch`: Lists all branches in the repository.
- `git checkout [branch name]`: Switches to a different branch.
- `git merge [branch name]`: Integrates changes from one branch into the current branch.
- `git log`: Displays a list of commits in the repository.
- `git remote`: Lists the remote repositories associated with the local repository.

## Additional Commands
- `git remote add [remote name] [remote URL]`: Adds a new remote repository.
- `git fetch [remote name]`: Retrieves the latest changes from a remote repository.
- `git reset [file(s)]`: Removes file(s) from the staging area.
- `git revert [commit ID]`: Creates a new commit that undoes the changes made in a specific commit.
- `git stash`: Temporarily saves local changes in a stash.
- `git tag`: Lists all the tags in the repository.
- `git diff`: Shows the differences between the working directory and the staging area.
- `git branch -d [branch name]`: Deletes the specified branch from the local repository.
- `git config`: Allows configuration of Git settings.
- `git blame [file]`: Shows commit and author information for each line of a file.

## Branching and Merging
- Creating a Branch:
  - `git branch [branch name]`: Creates a new branch.
  - `git checkout -b [branch name]`: Creates a new branch and switches to it.

- Merging a Branch:
  - `git checkout [branch name]`: Switches to the branch where you want to merge the changes.
  - `git merge [branch name]`: Incorporates the changes from the specified branch into the current branch.

## Remote Operations
- `git remote -v`: Displays the URLs of the remote repositories associated with your local repository.
- `git push [remote name] [branch name]`: Uploads local commits to a specific remote branch.
- `git pull [remote name] [branch name]`: Fetches changes from a specific remote branch and merges them into the current branch.
- `git remote show [remote name]`: Displays detailed information about a specific remote repository.
- `git remote rename [old name] [new name]`: Renames a remote repository.
- `git remote remove [remote name]`: Removes the association with a remote repository.

Feel free to append these commands to the existing Git Commands Cheat Sheet. It will provide you with a comprehensive reference of commonly used Git commands.