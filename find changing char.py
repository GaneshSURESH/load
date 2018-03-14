""Returns True if the two strings only differ by one character.
>>> nearlyEqual('python', 'perl')

False

>>> nearlyEqual('perl', 'pearl')
True

>>> nearlyEqual('python', 'jython')
True

>>> nearlyEqual('man', 'woman')
False

"""
def nearlyEqual(string1, string2):
 string1 = input('First World')
 string2 = input('Second World')
 if string1 == string2:
 print (True)

else:
   
   print (False)
  return nearlyEqual(string1,string2)
  print (nearlyEqual(string1,string2))


string1 = ()
string2 = ()

print, nearlyEqual(string1, string2)
