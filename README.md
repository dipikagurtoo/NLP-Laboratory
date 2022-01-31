# NLP-Laboratory
Various NLP Assignments from basic to advanced

Natural Language Processing Laboratory
Assignment - 1


Submitted By: DIPIKA GURTU
Roll No.: 2018IMT-029

Objective: 
Use the NLTK Toolkit for demonstrating the Word Tokenization and Sentence Tokenization text pre-processing techniques in NLP.

Theory: 
Tokenization is the process of breaking down large pieces of text into smaller ones. It divides the raw text into words and sentences, which are referred to as tokens. These tokens aid in the comprehension of the context or the development of the NLP model. By evaluating the sequence of words, tokenization aids in interpreting the meaning of the text.

For example:  The sentence - "Hi! my name is Dipika Gurtu" can be tokenized into - ‘Hi’, ‘!’, ‘my’, ‘name’, ‘is’, ‘Dipika’, ‘Gurtu’.

Tokenization can be done using a variety of methods and libraries. Some of the libraries that can be utilised to do the work include NLTK, Gensim, and Keras.

Tokenization can be used for single words or entire sentences. Word tokenization is when a text is broken into words using a separation technique, while sentence tokenization is when the same separation is done for sentences. There are a variety of tokenization strategies that can be used depending on the language and modelling aim.

Algorithm: 

Tree bank is a corpus created which gives the semantic and syntactic annotation of language. One of the largest treebanks ever published is the Penn Treebank. The punctuation, clitics (words that appear with other words like I'm, don't), and hyphenated words are all separated using this tokenization technique.



Input: The input has been taken from https://www.kaggle.com/c/nlp-getting-started. It is shown in tabular form in the Figure 1. 

Figure 1. Input Data in Tabular format


Output: 

Sentence Tokenization:


Word Tokenization:
 

Conclusion: 
The tokenization is the first & the foremost step in text preprocessing.
Various tokenization methods can be used for text preprocessing as per  requirement like WhiteSpaceTokeniser, WordPunctTokenizer, RegexpTokenizer, TreebankWordTokenizer, etc.
We’ve used TreebankWordTokenizer as it is one of the fastest and the best tokenizers. 
