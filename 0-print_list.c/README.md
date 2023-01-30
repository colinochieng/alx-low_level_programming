<!DOCTYPE html>
<html>
<body>
<h1> C - Singly linked lists</h1>
<pre>
<img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif" alt="Alt text" title="Optional title">
**Resources
Read or watch:**
<a href = "https://intranet.alxswe.com/concepts/120"> Data Structures </a>
<a href = "https://intranet.alxswe.com/rltoken/joxg32-tt4lUh8Afgst8tA"> Linked Lists </a>
<a href = "https://intranet.alxswe.com/rltoken/epKUCIcoA6XaN1T3Vtr_9w"> Youtube </a>

<strong>Learning Objectives</strong>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<strong>General</strong>
When and why using linked lists vs arrays
How to build and use linked lists
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Please use this data structure for this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
</pre>
</body>
</html>
