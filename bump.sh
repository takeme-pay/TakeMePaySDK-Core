#!/bin/sh

podspec-bump -w

echo `podspec-bump --dump-version`

git checkout master

echo "check to master"

git add .

git commit -m "bump `podspec-bump --dump-version`"
git tag "`podspec-bump --dump-version`"
git push --tags
git push origin master

pod trunk push --allow-warnings
