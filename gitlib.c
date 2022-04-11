//Author: David Schiereck

//initialize basic c libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Initialize a repo in whatever directory the executable/c file is in
void gitInit (){ 

    system("git init");  

};



//Initialize git repository in a specific directory
//@param directory: the specific directory you want to initialize a repo in
void gitInitDir (char *dir){
   
    char *command = "git init" ;
    strcat(command, dir);
    system(command);

};


//Clone a repository to the current directory
//@param url: the url of the repository
void gitClone (char *url){
    
    char *command = "git clone ";
    strcat(command, url);
    system(command);

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
    
    
};

//Add a file to the commit  (add file to staging area)
//@param file: the file you want to add
void gitAdd (char *file){
    
    char *command = "git add ";
    strcat(command, file);
    system(command);
    
};


//Commit the staged files
//@param message: the message you want to commit with
void gitCommit (char *message){
    
    char *command = "git commit -m ";
    strcat(command, message);
    system(command);
    
};

//Create a new branch
//@param branch: the name of the branch you want to create
void gitBranch (char *branch){
    
    char *command = "git branch ";
    strcat(command, branch);
    system(command);
    
};

//Delete current branch
void gitBranchDelete(){
    
    char *command = "git branch -d ";
    system(command);
    
};

//Checkout a branch
//@param branch: the name of the branch you want to checkout
void gitCheckout (char *branch){
    
    char *command = "git checkout ";
    strcat(command, branch);
    system(command);
    
};

//Push the repo to a remote repository (push to remote repo)
//@param remote: the remote repository you want to push to
void gitPush (char *remote){
    
    char *command = "git push ";
    strcat(command, remote);
    system(command);
    
};

//Merge a branch into the current branch
//@param branch: the name of the branch you want to merge into the current branch
void gitMerge (char *branch){
    
    char *command = "git merge ";
    strcat(command, branch);
    system(command);
};

//Pull the current branch from a remote repository
//@param remote: the remote repository you want to pull from
void gitPull (char *remote){
    
    char *command = "git pull ";
    strcat(command, remote);
    system(command);
    
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
    
};


//git command which allows the user to input any git command
//DO NOT ADD GIT AT THE BEGINING OF THE COMMAND
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
    
};

//git command which allows user to remove a tag
//@param tag: the tag you want to remove
void gitTagDelete (char *tag){
    
    char *command = "git tag -d ";
    strcat(command, tag);
    system(command);
    
};

//git flow initialize
void gitFlowInit(){
    
    char *command = "git flow init";
    system(command);
    
};

//git flow feature branch
//@param feature: the name of the feature branch
void gitFlowFeature (char *feature){
    
    char *command = "git flow feature start ";
    strcat(command, feature);
    system(command);
    
};


