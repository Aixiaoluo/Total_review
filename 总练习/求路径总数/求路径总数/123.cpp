A = sparse(A');
A(A == 0) = Inf; 3 B = sparse(12, 12);
link = graphallshortestpaths(B, 'directed', false);
while sum(sum(link)) == Inf%�������ͨ����������
    ind = find(A == min(min(A)));
	[x, y] = ind2sub(size(A), ind); %Ѱ����̱�
    for i = 1:length(x)
        if link(x(i), y(i)) == Inf%�ж��Ƿ���ͨ���ؼ�����
             B(x(i), y(i)) = A(x(i), y(i));
             A(x(i), y(i)) = Inf; %ȡ�
         end
     end
     link = graphallshortestpaths(B, 'directed', false);
 end