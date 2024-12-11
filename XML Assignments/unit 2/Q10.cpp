<!ELEMENT info(student,course,subject)>
<!ELEMENT student (name,contactno)>
<!ATTLIST student which_course CDATA #REQUIRED>
<!ELEMENT name (#PCDATA)>
<!ELEMENT contactno (#PCDATA)>
<!ELEMENT course (name)>
<!ATTLIST course c_id CDATA #REQUIRED>
<!ELEMENT name (#PCDATA)>
<!ELEMENT subject (#PCDATA)>
<!ATTLIST subject name CDATA #REQUIRED>