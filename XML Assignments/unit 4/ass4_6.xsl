<?xml version="1.0"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
	<xsl:template match="students">
		<html>
			<body>
				<table border="1">
					<tr>
						<th>RollNO</th>
						<th>Name</th>
						<th>Marks</th>
						<th>Rank</th>
						<th>Result</th>
					</tr>
					<xsl:for-each select="student">
						<tr>
							<td><xsl:value-of select="no"/></td>
							<td><xsl:value-of select="name"/></td>
							<td><xsl:value-of select="marks"/></td>
							<td><xsl:value-of select="rank"/></td>
							<xsl:choose>
								<xsl:when test="rank &lt; 5">
									<td>top student</td>
								</xsl:when>
								<xsl:when test="rank &gt; 5 and rank &lt; 10">
									<td>Top 10 Student</td>
								</xsl:when>
								<xsl:otherwise>
									<td>Avg Student</td>
								</xsl:otherwise>
							</xsl:choose>
						</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>