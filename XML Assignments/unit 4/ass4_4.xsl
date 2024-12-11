<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="Students">
		<html>
			<body>
				<table border="1">
					<thead>
						<tr>
							<th colspan="7">Student Data</th>
						</tr>
						<tr>
							<th>Name</th>
							<th>Address</th>
							<th>BirthDate</th>
							<th>Gender</th>
							<th>Mobile</th>
							<th>Result</th>
						</tr>
					</thead>
					<tbody>
						<xsl:for-each select="student">
							<xsl:sort select="name" data-type="text" order="ascending"></xsl:sort>
							<tr>
								<td><xsl:value-of select="name"/></td>
								<td><xsl:value-of select="personalinfo/address"/></td>
								<td><xsl:value-of select="personalinfo/birthdate"/></td>
								<td><xsl:value-of select="personalinfo/gender"/></td>
								<td><xsl:value-of select="personalinfo/mobile"/></td>
								<td><xsl:value-of select="result"/></td>
							</tr>
						</xsl:for-each>
					</tbody>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>
