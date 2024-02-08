let project = new Project('Test');

project.cmd = true;
project.addFile('Sources/**');              //(/**) permet de rentrer dans un dossier deux fois
project.setDebugDir('../Deployment');       //(../) permet de sortir du fichier pour chercher dans un autre dossier

resolve(project);