bintalk
=======
Introduction
------------
**bintalk**��һ�������Խṹ�����ݽ��ж����Ʊ����������������ߡ�bintalkʹ��һ��btkԴ�ļ��Խṹ�����ݽ�������������ָ�����Զ����ݵı������롣ʹ�����ɵı������룬����ʹ�������Ի���ͬһ�����������������ɵ�ͨ�š�
��ܶ����е�ͬ��ϵͳ(JSON,XML,ProtocolBuffers...)��ͬ��bintalk��һ���ǳ�С�ɺ��������Ĺ��ߡ������Ķ��������ݲ������κε�Ԫ���ݣ������С���������紫�䡣����ÿ��֧�ֵ����Զ���һ������ʱ�⣬����֧�����ɵĴ��롣��Щ��Ĺ��ܶ��Ƕ����Բ���������ݴ���ļ򵥷�װ�������˱����ĸ�Ч��
���ڹ��ܽ����Ǳ���룬����bintalk����֧�����Ե������Ժܵ͡�ֻҪ���Ա���֧�ֶ��������ݴ����Ϳ��Ա����뵽bintalk�С�֧�־����������֮���ͨ����bintalk��һ����Ҫ�����Ŀ�ꡣ

Topology
--------
###compiler
bintalk�����������ڱ���btk�ļ�������ָ�����Դ���
###runtime
֧�����Ե�����ʱ��

Building
--------
����bintalk��Ҫ���¹���:
* cmake
* gnu flex & bison

###Unix
* ������ط�����һ��buildĿ¼
* cd build
* cmake BINTALK_SRC/compiler/src
* make

###Windows
ʹ��cmake-gui��������visual studio�����ļ���
* ����cmake-gui����
* ָ��source codeĿ¼
* ָ��buildĿ¼ΪBINTALK_SRC/compiler/src
* Configure
* Generate

Running
-------
bintalk [options] btkfile
* -o dir ָ�����ɴ����ļ������Ŀ¼��Ĭ��Ϊ��ǰĿ¼��
* -i dirs ָ��import�Ĳ���Ŀ¼�����Ŀ¼��";"�ָĬ��ΪԴ�ļ�Ŀ¼��
* -g gen �������������ơ�

Supported Language
------------------
* c++
* c#
* python
* erlang
