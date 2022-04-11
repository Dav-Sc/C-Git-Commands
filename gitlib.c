//initialize basic c libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Initialize a repo in whatever directory the executable/c file is in
void gitInit (){ 

    system("git init");
    printf("Initialized empty Git repository in this directory\n");  

};



//Initialize git repository in a specific directory
//@param directory: the specific directory you want to initialize a repo in
void gitInitDir (char *dir){
   
    char *command = "git init" ;
    strcat(command, dir);
    system(command);
    printf("Initialized empty Git repository in %s\n", dir);\

};


//Clone a repository to the current directory
//@param url: the url of the repository
void gitClone (char *url){
    
    char *command = "git clone ";
    strcat(command, url);
    system(command);
    printf("Cloning into '");
    printf(url);
    printf("'\n");
    
};

//Clone a repository to a specific directory
//@param url: the url of the repository
//@param dir: the directory you want to clone the repository to
void gitCloneDir (char *url, char *dir){
    
    char *command = "git clone ";
    strcat(command, url);
    strcat(command, " ");
    strcat(command, dir);
    system(command);
    printf("Cloning into '");
    printf(dir);
    printf("'\n");
    
};

//Add a file to the commit  (add file to staging area)
//@param file: the file you want to add
void gitAdd (char *file){
    
    char *command = "git add ";
    strcat(command, file);
    system(command);
    printf("Adding '");
    printf(file);
    printf("'\n");
    
};


//Commit the staged files
//@param message: the message you want to commit with
void gitCommit (char *message){
    
    char *command = "git commit -m ";
    strcat(command, message);
    system(command);
    //weird error at random times with this print statement
    printf("Committed: ");
    printf(message);
    
};

//Create a new branch
//@param branch: the name of the branch you want to create
void gitBranch (char *branch){
    
    char *command = "git branch ";
    strcat(command, branch);
    system(command);
    printf("Created branch '");
    printf(branch);
    printf("'\n");
    
};

//Delete current branch
void gitBranchDelete(){
    
    char *command = "git branch -d ";
    system(command);
    printf("Deleted current branch\n");
    
};

//Checkout a branch
//@param branch: the name of the branch you want to checkout
void gitCheckout (char *branch){
    
    char *command = "git checkout ";
    strcat(command, branch);
    system(command);
    printf("Switched to branch '");
    printf(branch);
    printf("'\n");
    
};

//Push the repo to a remote repository (push to remote repo)
//@param remote: the remote repository you want to push to
void gitPush (char *remote){
    
    char *command = "git push ";
    strcat(command, remote);
    system(command);
    printf("Pushed to remote repository '");
    printf(remote);
    printf("'\n");
    
};

//Merge a branch into the current branch
//@param branch: the name of the branch you want to merge into the current branch
void gitMerge (char *branch){
    
    char *command = "git merge ";
    strcat(command, branch);
    system(command);
    printf("Merged '");
    printf(branch);
    printf("' into the current branch\n");
    
};

//Pull the current branch from a remote repository
//@param remote: the remote repository you want to pull from
void gitPull (char *remote){
    
    char *command = "git pull ";
    strcat(command, remote);
    system(command);
    printf("Pulled from '");
    printf(remote);
    printf("'\n");
    
};


//Push a specified branch to a remote name
//@param remote: the remote name you want to push to
//@param branch: the branch you want to push
void gitPushBranch (char *remote, char *branch){
    
    char *command = "git push ";
    strcat(command, remote);
    strcat(command, " ");
    strcat(command, branch);
    system(command);
    printf("Pushed to '");
    printf(remote);
    printf("'\n");
    
};

//Pull a specified branch from a remote repository
//@param remote: the remote repository you want to pull from
//@param branch: the branch you want to pull
void gitPullBranch (char *remote, char *branch){
    
    char *command = "git pull ";
    strcat(command, remote);
    strcat(command, " ");
    strcat(command, branch);
    system(command);
    printf("Pulled from '");
    printf(remote);
    printf("'\n");
    
};

//Get git status of the current directory
void gitStatus (){
    system("git status");  
    //set up printing of the status
    //print the status git status
};

//git revert to a previous commit 
//@param commit: the commit you want to revert to
void gitRevert (char *commit){
    
    char *command = "git revert ";
    strcat(command, commit);
    system(command);
    printf("Reverted to commit '");
    printf(commit);
    printf("'\n");
    
};


//git command which allows the user to input any git command
//@param command: the command you want to run
void gitCustom (char *command){
    //idkw hy I added this but i wanted too
    strcat("git", command);

    system(command);
    
};


//git command that allows user to add a string TAG
//@param tag: the tag you want to add
void gitTag (char *tag){
    
    char *command = "git tag ";
    strcat(command, tag);
    system(command);
    printf("Tagged '");
    printf(tag);
    printf("'\n");
    
};
