<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="/">
		<html>
			<body>
				<table border="1">
						<tr>
							<th colspan="6">
								<h2>orderdetails</h2>
							</th>
						</tr>
						<tr>
							<th>ordernumber</th>
							<th>orderate</th>
							<th>orderamt</th>
							<th>itemprice</th>
							<th>itemname</th>
							<th>quantity</th>
						</tr>
						<xsl:for-each select="orderdetail">
							<tr>
								<td><xsl:value-of select="ordernumber"></xsl:value-of></td>
								<td><xsl:value-of select="orderate"></xsl:value-of></td>
								<td><xsl:value-of select="orderamt"></xsl:value-of></td>
								<td><xsl:value-of select="itemprice"></xsl:value-of></td>
								<td><xsl:value-of select="itemname"></xsl:value-of></td>
								<td><xsl:value-of select="quantity"></xsl:value-of></td>
							</tr>
						</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>

</xsl:stylesheet>