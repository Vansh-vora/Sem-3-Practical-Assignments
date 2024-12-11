<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="empinfo/employee/name">
		<html>
			<body>
				<h1>Employee Name: <xsl:value-of select="fname"></xsl:value-of><xsl:value-of select="lname"></xsl:value-of></h1>
				<h5>Employee Number: <xsl:value-of select="@eid"></xsl:value-of></h5>
			</body>
		</html>
	</xsl:template>	
</xsl:stylesheet>

