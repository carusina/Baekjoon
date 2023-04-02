import sys

if __name__ == "__main__":
    text_L = list(input())
    text_R = []
    N = int(input())

    for i in range(N):
        cmd = sys.stdin.readline().split() #반복문에서 시간초과 발생하지 않기 위해서 && split()은 공백으로 문자열 나눠받기 ex) P x 입력시 cmd = ["P", "x"]

        if cmd[0] == "L" and text_L: #cmd[0]가 L이고 text_L에 원소가 있으면(즉 커서가 맨 앞이 아니면)
            text_R.append(text_L.pop()) #text_R에 text_L.pop()의 반환값 append
        if cmd[0] == "D" and text_R:
            text_L.append(text_R.pop())
        if cmd[0] == "B" and text_L:
            text_L.pop()
        if cmd[0] == "P":
            text_L.append(cmd[1])

    print("".join((text_L + list(reversed(text_R))))) #text_R을 reversed로 뒤집기 후 reversed함수는
                                                      #reversed의 객체를 리턴하기 때문에 list로 형변환 후 join으로 출력형식 맞춤