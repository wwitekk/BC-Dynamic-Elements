# BC-Dynamic-Elements
Various dynamic elements for Business Catalyst sites.

#Content
1. Socials folder
2. Partials folder
3. Functions

##1. Socials folders
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
