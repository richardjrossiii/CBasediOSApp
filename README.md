# CBasediOSApp
Creating an iOS app in pure C

## Motivation
Inspired by [this](http://stackoverflow.com/q/10289890/427309) StackOverflow post, I decided to go and see if I could create such an application.
I have simply kept this project in my DropBox for the past year or so, and decided it was time for it to get an upgrade, along with several other of my projects.

## Goals
The only goal of this application was to create an app that compiled, ran, and displayed something on the screen using only the C programming language. No other goals were put in place, and this code is most definitely **not** portable. If you would like to see a Mac applciation with similar goals, see [this](https://github.com/CodaFi/C-Macs) project instead.

## Design
The design was fairly straightforward and simple - one file which contained the `main()` function, that simply setup my app delegate, like any other iOS app, a file which contained the actual source of the app delegate, and finally, the file which contained my custom view & drawing code.

## Remarks
This is mostly a rehtorical project, and not something I would **ever** reccomend using in an actual application. It is a cool proof of concept, but relies on a lot of undefined behavior in the C language that is well-specified for the ARM architecture that iOS uses.

## License
Copyright 2013 Richard J. Ross III.

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
