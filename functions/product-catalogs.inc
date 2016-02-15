{module_data resource="catalogproducts" version="v3" fields="productId,catalogue" skip="0" limit="10" where="\{'product.id':'{{item.id}}'\}" order="catalogueId" collection="myData"}
{% for catalog in myData.items -%}
{{catalog.catalogue.name | downcase | replace: ' ', '-'}} 
{% endfor -%}