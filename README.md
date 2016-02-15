# BC-Dynamic-Elements
Various dynamic elements for Business Catalyst sites.

#Content
1. [Socials folder](../master/README.md#1-socials-folder)
2. [Partials folder](../master/README.md#2-partials-folder)
  1. [Dynamic bredcrumbs](../master/README.md#21-dynamic-bredcrumbs)
  2. [Dynamic side nav](../master/README.md#22-dynamic-side-nav)
  3. [Dynamic H1](../master/README.md#23-dynamic-h1)
3. Functions

##1. Socials folder
Displays share buttons for various social sites.

Example [here](http://office-brands.businesscatalyst.com/news/how-to-build-an-easy-office-cupboard-in-minutes) (bottom of the page).

To use in Blog article details page. See *\_use-it.html* for example.

##2. Partials folder
Contains dynamic site elements (side nav, breadcrumbs) to use in template files. Allows to render some page elements dynamically instead of creating multiple template files.
###2.1. Dynamic bredcrumbs
file: \_template-inner_dynamic-bredcrumbs.inc

Displays full breadcrumbs as links for pages, web apps and blog pages.

To use it in template file.

###2.2. Dynamic side nav
file: \_template-inner_dynamic-side-nav.inc

Displays side nav based on given page url.

To use in 2 columns template with no need to create multiple templates.

All subpages for given root url will have the same side nav.

###2.3. Dynamic H1
file: \_template-inner_dynamic-h1.inc

When h1 is placed in template file but needs to be different than page name. It requires h1.json file.
```json
{"pages":[
	{"url": "/whats-on", "h1":"What's on this year"},
	{"url": "/blog",	"h1": "Our Blog"},
	{"url": "/contact",	"h1": "Get in Touch"}
]}
```
