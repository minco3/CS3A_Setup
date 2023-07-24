# Mac Instructions</br>

- ### [Installing `Xcode`](#mac_installing_Xcode)</br>
- ### [Installing `cmake`](#mac_installing_cmake)</br>

---

</br>

<a name="mac_installing_Xcode"></a>

## Installing Xcode

</br>

You need to install **Xcode Command Line Tools** to use **clang** and **git**

</br>

### Check clang installation

To make sure clang is installed correctly

```shell
$ clang --version
```

<img src="images/mac/a-00-clang_version.png" alt="git version" width="1000"/>

</br>

### Check git installation

To make sure git is installed correctly

```console
$ git --version
```

<img src="images/mac/a-01-git_version.png" alt="git version" width="1000"/>

</br>

### Login git

Login git with username and email address:

```console
$ git config --global user.name <"YOUR NAME">
$ git config --global user.email <"YOUR EMAIL">
```

---

</br>

<a name="mac_installing_cmake"></a>

## Installing cmake

</br>

### Install cmake

We use homebrew to install [cmake](https://cmake.org/):

```console
$ brew install cmake
```

If you see "brew: command not found", then you need to install brew.

```console
$ /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

</br>

### Check cmake version

Let's check to see if `cmake` is installed successfully:

```console
$ cmake --version
```

<img src="images/mac/a-02-cmake_version.png" alt="cmake version" width="1000"/>

</br>

If you do not get a response similar to this, then you do not have `cmake` on your system.

---

Once everything is installed, you can move on to the [next step](start_project.md)