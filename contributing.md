<!-- omit in toc -->

# Contributing to Dev-Geeks

First off, thanks for taking the time to contribute! ❤️

All types of contributions are encouraged and valued. See the [Table of Contents](#table-of-contents) for different ways to help and details about how this project handles them. Please make sure to read the relevant section before making your contribution. It will make it a lot easier for us maintainers and smooth out the experience for all involved. The community looks forward to your contributions. 🎉

> And if you like the project, but just don't have time to contribute, that's fine. There are other easy ways to support the project and show your appreciation, which we would also be very happy about:
>
> - Star the project
> - Share on linkedin about it


<!-- omit in toc -->

## Table of Contents

- [I Want To Contribute](#i-want-to-contribute)
- [Your First Code Contribution](#your-first-code-contribution)
- [Commit Messages](#commit-messages)

## Basics of Git and GitHub

### Git & GitHub

Before we proceed, it's better to know the difference between Git and Github. Git is a version control system (VCS) that allows us to keep track of the history of our source code , whereas GitHub is a service that hosts Git projects.

We assume you have created an account on Github and installed Git on your System.

Now enter your name and E-mail (used on Github) address in Git, by using following command.

`$ git config --global user.name "YOUR NAME"`
` $ git config --global user.email "YOUR EMAIL ADDRESS"`
This is an important step to mark your commits to your name and email.

<br />

### Fork a project

You can make a copy of the project to your account. This process is called forking a project to your Github account. On Upper right side of project page on Github, you can see -

<p align="center">  <img  src="https://i.imgur.com/P0n6f97.png">  </p>
Click on fork to create a copy of project to your account. This creates a separate copy for you to work on.

<br />

<br />

### Clone the forked project

You have forked the project you want to contribute to your github account. To get this project on your development machine we use clone command of git.

`$ git clone https://github.com/pranjay-poddar/Dev-Geeks.git` <br/>
Now you have the project on your local machine.

<br />

### Add a remote (upstream) to original project repository

Remote means the remote location of project on Github. By cloning, we have a remote called origin which points to your forked repository. Now we will add a remote to the original repository from where we had forked.

`$ cd <your-forked-project-folder>`
`$ git remote add upstream https://github.com/pranjay-poddar/Dev-Geeks.git` <br/>
You will see the benefits of adding remote later.

<br />

### Synchronizing your fork

Open Source projects have a number of contributors who can push code anytime. So it is necessary to make your forked copy equal with the original repository. The remote added above called Upstream helps in this.

`$ git checkout main`
`$ git fetch upstream`
`$ git merge upstream/main`
`$ git push origin main` <br/>
The last command pushes the latest code to your forked repository on Github. The origin is the remote pointing to your forked repository on github.

<br />

### Create a new branch for a feature or bugfix

Usually, all repositories have a main branch that is regarded to be stable, and any new features should be developed on a separate branch before being merged into the main branch. As a result, we should establish a new branch for our feature or bugfix and go to work on the issue.

`$ git checkout -b <feature-branch>`
This will create a new branch out of master branch. Now start working on the problem and commit your changes.

`$ git add --all`
`$ git commit -m "<commit message>"`
The first command adds all the files or you can add specific files by removing -a and adding the file names. The second command gives a message to your changes so you can know in future what changes this commit makes. If you are solving an issue on original repository, you should add the issue number like #35 to your commit message. This will show the reference to commits in the issue.

<br />

### Push code and create a pull request

You now have a new branch containing the modifications you want in the project you forked. Now, push your new branch to your remote github fork.

`$ git push origin <feature-branch>`
Now you are ready to help the project by opening a pull request means you now tell the project managers to add the feature or bug fix to original repository. You can open a pull request by clicking on green icon -

<p align="center">  <img  src="https://i.imgur.com/aGaqAD5.png">  </p>

Remember your upstream base branch should be main and source should be your feature branch. Click on create pull request and add a name to your pull request. You can also describe your feature.

Fantastic! You've already made your first contribution.🥳

#### BE OPEN!

#### Happy Coding 👩‍💻👩‍💻

## I Want To Contribute


### Your First Code Contribution

Contributing to open source for the first time can be scary and a little overwhelming. Perhaps you’re a Code Newbie or maybe you’ve been coding for a while but haven’t found a project you felt comfortable contributing to.

If you have never contributed to an open source project before and you’re just getting started, consider exploring these resources.

[First contributions](https://github.com/firstcontributions/first-contributions) is a hands-on tutorial that walks you through contributions workflow on GitHub. When you complete the tutorial, you have made a contribution to the same project.


### Commit Messages

Commit Message should reflect the work you have done (resolve bug or add feature).
<a href="#top"><img src="https://img.shields.io/badge/-Back%20to%20Top-red?style=for-the-badge" align="right"/></a>
