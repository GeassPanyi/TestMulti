commit 1  GeassPanyi

username = GeassPanyi
pwd = abc123456

1. �鿴Զ�ֿ̲�

$ git remote -v
eoecn   https://github.com/eoecn/android-app.git (fetch)
eoecn   https://github.com/eoecn/android-app.git (push)
origin  https://github.com/com360/android-app.git (fetch)
origin  https://github.com/com360/android-app.git (push)
su@SUCHANGLI /e/eoe_client/android-app (master)
������Ľ�����Կ�����Զ�ֿ̲���������һ����eoecn��һ����origin
2 ,��Զ�̻�ȡ���°汾������

$ git fetch origin master
From https://github.com/com360/android-app
 * branch            master     -> FETCH_HEAD
su@SUCHANGLI /e/eoe_client/android-app (master)
$ git fetch origin master ������˼�ǣ���Զ�̵�origin�ֿ��master��֧���ش��뵽���ص�origin master
3. �Ƚϱ��صĲֿ��Զ�̲ο�������

$ git log -p master.. origin/master
su@SUCHANGLI /e/eoe_client/android-app (master)
��Ϊ�ҵı��زֿ��Զ�ֿ̲������ͬ����û�������κ���Ϣ
4. ��Զ�����������Ĵ���ϲ������زֿ⣬Զ�̵ĺͱ��صĺϲ�
$ git merge origin/master
Already up-to-date.
su@SUCHANGLI /e/eoe_client/android-app (master)
�ҵı��زο������Զ�̴�����ͬ��������Already up-to-date

���ϵķ�ʽ�е㲻����⣬��ҿ���ʹ������ķ�ʽ�����Һܰ�ȫ
��ʽ��
1.�鿴Զ�̷�֧��������ĵ�һ����ͬ
2. ��Զ�̻�ȡ���°汾������

$ git fetch origin master:temp
From https://github.com/com360/android-app
 * [new branch]      master     -> temp
su@SUCHANGLI /e/eoe_client/android-app (master)
git fetch origin master:temp ����������˼�ǣ���Զ�̵�origin�ֿ��master��֧���ص����ز��½�һ����֧temp

�Ƚϱ��صĲֿ��Զ�̲ο�������
$ git diff temp
su@SUCHANGLI /e/eoe_client/android-app (master)
�������˼�ǣ��Ƚ�master��֧��temp��֧�Ĳ�ͬ
�����ҵ�û�������û����ʾ������Ϣ
4. �ϲ�temp��֧��master��֧

$ git merge temp
Already up-to-date.
su@SUCHANGLI /e/eoe_client/android-app (master)
����û������������ʾAlready up-to-date.
�ϲ���ʱ����ܻ���ֳ�ͻ����ʱ�����ٰ���δ����ͻдһƪ���Ͳ����ϡ�
5.�������Ҫtemp��֧�ˣ�����ɾ���˷�֧

$ git branch -d temp
Deleted branch temp (was d6d48cc).
su@SUCHANGLI /e/eoe_client/android-app (master)
����÷�֧û�кϲ�������֧�ᱨ����������������ǿ��ɾ��git branch -D <��֧��>

�ܽ᣺��ʽ��������⣬����ȫ������pullҲ���Ը��´��뵽���أ��൱��fetch+merge������д���Ļ�������ȫ��