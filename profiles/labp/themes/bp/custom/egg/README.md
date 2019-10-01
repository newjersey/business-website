# FCC Drupal 7 Installation with Bowline

### Requirements
- [Git 2.0+](http://git-scm.com/book/en/v2/Getting-Started-Installing-Git)
- A `workspace` directory in your home directory.

OS X:
- Boot2docker Vagrant Box - see installation instructions below.

For Linux:
- [Docker 1.3+](https://docs.docker.com/installation/)
- [Docker Compose](http://docs.docker.com/compose/)

### Step 1. Clone FCC Drupal 7 into ~/workspace/fcc
Get the latest "integration" branch code for fcc. You will be able to work with this code base normally, as you would in any non-dockerized sandbox.

``` bash
cd ~/workspace
git clone git@git.civicactions.net:fcc/drupal7.git fcc
cd fcc
```
NOTE: The rest of these commands run from the `~/workspace/fcc` directory.

```

```
### Step 2. Configure Git and Install Githooks

Setup for rebase

```
git config --global branch.autosetuprebase always
git config --get branch.master.rebase
```

Hooks...
Skip this for now.

### Step 3. Build and run your "fcc" container

Docker creates virtual instances of Linux on your local machine, and this next step installs those machines, then sets the ~/workspace/fcc directory to work with the Linux environments installed here.

``` bash
. bin/activate
pull
composer install
settings_init
// Copy the appropriate htaccess file (example sandbox) and rename to docroot/.htaccess
cp htaccess/sandbox docroot/.htaccess
build
import
```

- Your first build can take some time as it downloads virtual Linux environments but subsequent builds will be fast.
- When the build is completed a status report will be displayed that includes a link to the new site. For example: `web address: http://172.17.0.5/` Click the link or copy it to your browser.
- If you like, you can stop the container when done:

```bash
docker-compose stop
```

- Restart with:

```bash
build
```
**NOTE: Each time you restart the container, the IP address of the site will change. See the bottom of the status message for the new IP address for your site.**

### Step 4. Run tests

Skip this for now.

### Updating your build

To update your code, database and restart your container:

``` bash
. bin/activate
git pull
pull
build
import
```
If you want to keep your existing database, you can skip the "pull" and "import" steps.

## Boot2docker Vagrant Box
Boot2docker Vagrant box for optimized Docker and Docker Compose use on OS X.

### What is this?
This is a alternative to the Docker boot2docker project to achieve better performance with synced folders and docker data volumes on OS X.
The stock boot2docker currently mounts host volumes via the default VirtualBox Guest Additions (vboxfs) mode, which is terribly slow. Much better performance can be achieved with NFS.

### Setup

This installs the following prerequisites and dependencies: brew, cask, virtualbox, vagrant, docker, docker-compose.

* If you have boot2docker installed you should [uninstall](http://therealmarv.com/blog/how-to-fully-uninstall-the-offical-docker-os-x-installation/) that first.
* If you installed Virtualbox, Vagrant or Docker-compose manually (rather than via Homebrew), you should also uninstall them, so you can move to a Homebrew managed setup, which will make updating easier.
* Complete Step 1 above, and make sure you are in your ~/workspace/fcc directory - then run the following:
``` bash
cat setup.sh | bash
```
* Continue with Step 2 as normal.

## Usage

To start things up (initially, or after restarting your laptop), go to your ~/workspace/fcc directory, then run:
```bash
vagrant up
sudo route -n add 172.0.0.0/8 192.168.10.10
```
* This downloads and provisions the boot2docker machine as needed, sets up a route so you can access docker addresses from your host.
* Then continue from "Updating your build".
* Type vagrant help to see commands to stop, resume, reload and destroy the boot2docker machine.

# FCC Compass and SASS installation with Bundler

### Step 1. Install bundler
```bash
cd ~/workspace/fcc/docroot/sites/all/themes/fcc
gem install bundler
```
### Step 2. Install required gems
``` bash
bundle install
```

### Step 3. Clean compass from the bundle
``` bash
bundle exec compass clean
```

### Step 4. Execute compass from the bundle
``` bash
bundle exec compass compile
```
