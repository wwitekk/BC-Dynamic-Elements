
{% if moduleName and moduleName == 'overallblog' %}
	{% if globals.get.blogid -%}
	    {% assign blogid = globals.get.blogid %}
	{% elseif globals.get.postId -%}
		{module_data resource="blogposts" version="v3" fields="blogId,postTitle,postUrl" skip="0" limit="10" where="\{'id':'{{globals.get.postId}}'\}" order="id" collection="myPost"}
		{% assign blogid = myPost.items[0].blogId %}
	{% endif -%}

	{module_data resource="blogs" version="v3" fields="id,blogName,blogUrl" skip="0" limit="10" where="\{'id':'{{blogid}}'\}" order="id" collection="myBlog"}
	
{% elseif moduleName and moduleName == 'webappitem' %}
    {% assign myUrl = url %}

{% else %}
    {% assign myUrl = globals.get.ID %}
{% endif %}



{% assign fullPath = myUrl | split: '/' %}

{module_data resource="pages" version="v3" fields="id, name, pageUrl, enabled, displayable" where="\{'enabled':'true','displayable':'true'\}" skip="0" limit="500" order="pageUrl" collection="myPages"}
<ul class="breadcrumbs">



    <li><a href="/" title="Home">Home</a></li>

	{% for path in fullPath -%}
		{% for item in myPages.items -%}
			{% assign tmpUrl = item.pageUrl | remove: '/index.html' | downcase | split: '/' | last %}
			
			{% if path == tmpUrl -%}
				<li><a href="{{item.pageUrl | remove: '/index.html' | downcase}}" title="{{item.name}}">{{item.name}}</a></li>
			{% endif -%}
		{% endfor -%}	
	{% endfor -%}
	
	{% if name and name != '' -%}
	    <li><a href="{{url}}">{{name}}</a></li>
	{% endif -%}

	{% if myBlog -%}
	    <li><a href="{{myBlog.items[0].blogUrl}}" title="{{myBlog.items[0].blogName}}">{{myBlog.items[0].blogName}}</a></li>
	{% endif -%}

	{% if myPost -%}
	    <li><a href="{{myPost.items[0].postUrl}}" title="{{myPost.items[0].postTitle}}">{{myPost.items[0].postTitle}}</a></li>
	{% endif -%}
</ul>




