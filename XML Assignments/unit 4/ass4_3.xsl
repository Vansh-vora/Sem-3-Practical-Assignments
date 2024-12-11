<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="books">
		<html>
			<body>
				<table border="1">
					<thead>
						<tr>
							<td colspan="4">BOOKS</td>
						</tr>
						<tr>
							<td>Title</td>
							<td>Author</td>
							<td>Year</td>
							<td>Publisher</td>
						</tr>
					</thead>
					<tbody>
						<xsl:for-each select="book">
							<xsl:if test="year &lt; 1998">
								<tr>
									<td><xsl:value-of select="@title"></xsl:value-of></td>
									<td><xsl:value-of select="author"></xsl:value-of></td>
									<td><xsl:value-of select="year"></xsl:value-of></td>
									<td><xsl:value-of select="publisher"></xsl:value-of></td>
								</tr>
							</xsl:if>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>