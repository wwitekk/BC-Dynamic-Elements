<!-- catalogues list -->
<ul class="breadcrumbs">
	<li><a href="/">Home</a></li>
	
	{% for item in this.tag_cataloguebreadcrumbs_0_5.items -%}
	<li><a href="{{item.url}}">{{item.name}}</a></li>
	{% endfor -%}
	
	<!-- product name at the end if needed -->
	{% assign productId =  globals.get.ProductID -%}
	{% if productId -%}
	{module_data resource="products" version="v3" fields="id,name" skip="0" limit="10" where="\{'id':'{{productId}}'\}" order="id" collection="myData"}
	<li>{{myData.items[0].name}}</li>
	{% endif -%}

</ul>