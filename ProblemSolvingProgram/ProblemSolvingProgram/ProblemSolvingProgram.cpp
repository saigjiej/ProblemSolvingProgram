#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <iomanip>
#include <Windows.h>
using namespace std;
int cnt;


struct member
{
	char name[10]; // 이름
	char phone[20];   // 핸드폰 번호
};

class MemberClass
{
public:
	char name[10]; // 이름
	char phone[20];   // 핸드폰 번호
};

void join(struct member* info);
void list(struct member* info);
void solving(struct member* info);
void fortune(struct member* info);
void information(struct member* info);

int main()
{
	SetConsoleTitle(TEXT("고민해결프로그램"));

	while (1)
	{
		struct member info[100];
		int i;
		cout << "\n" << endl;
		cout << "\n" << endl;
		cout << "    ♪ 고민 해결 프로그램 ♪    " << endl;
		cout << "\n" << endl;
		cout << "──────────────────────────────────" << endl;
		cout << "1. 회원가입\n" << endl;
		cout << "2. 회원목록 확인\n" << endl;
		cout << "3. 해결의 시스템\n" << endl;
		cout << "4. 오늘의 운세\n" << endl;
		cout << "5. 회원 정보 확인\n" << endl;
		cout << "6. 종료\n" << endl;
		cout << "번호를 입력해주세요! : ";
		cin >> i;
		cout << "\n" << endl;
		cout << "──────────────────────────────────" << endl;

		if (i == 1)
		{
			join(info);
			i = 0;
		}
		if (i == 2)
		{
			list(info);
		}
		if (i == 3) {
			solving(info);
		}
		if (i == 4) {
			fortune(info);
		}
		if (i == 5) {
			information(info);
		}
		if (i == 6) {
			cout << "종료 되었습니다" << endl;
			break;
		}
	}
	return 0;
}





void join(struct member* info)
{
	int i, j;
	for (i = 0; i < 100; i++)
	{

		cout << "회원가입을 계속 하시겠습니까?  1. Yes  2. No : ";
		cin >> j;
		cout << "\n" << endl;


		if (j == 1)
		{

			cout << "이름을 입력해주세요 : " << endl;
			cin >> info[i].name;
			cout << "\n" << endl;

			cout << "전화번호을 입력해주세요 (- 제외) : " << endl;
			cin >> info[i].phone;
			cout << "\n" << endl;

			cnt++;

		}

		if (j == 2) {
			break;
		}
	}
};





void list(struct member* info)
{
	int i, j;

	char a[30];

	cout << "이름을 입력하시오 : " << endl;
	cin >> a;
	cout << "\n" << endl;

	for (i = 0; i < cnt; i++)
	{
		if (strcmp(a, info[i].name) == 0)
		{
			cout << "이름 : " << endl;
			cout << info[i].name << endl;
			cout << "\n" << endl;

			cout << "전화번호 : " << endl;
			cout << info[i].phone << endl;
			cout << "\n" << endl;
		}
	}

}




void solving(struct member* info)
{
	string problem;
	cout << "고민을 입력해주세요! " << endl;
	cout << "ex ) 앞으로 남은 기말고사 잘 볼 수 있을까요?" << endl;
	ofstream fout("solving.txt", ios::app);
	cout << "\n" << endl;
	cout << ">> ";
	cin >> problem;
	fout << problem << endl;

	string wise[100] =
	{
		"신념을 버리지 말고 믿어라",
		"문제가 생길 수 있다",
		"기회는 다시 오지 않는다",
		"상상하지 말아라, 그런 일은 없다",
		"생각하는 그대로 실행해라",
		"망설이지 말아라",
		"지금 아니면 안된다",
		"당신에게 맞는 속도가 있다",
		"후회할지도 모릅니다",
		"보다 흥미로워질 것이 분명하다",
		"자신이 원하는대로 될 것이다",
		"그로 인해 멋진 일들이 일어날지도",
		"염려하지 마라",
		"속히 마무리하도록",
		"당신이 주도권을 잡을 필요가 있다",
		"더 관대해라",
		"너무 성급히 행동해서는 안된다"
		"부정하고 있는 것을 인정해라",
		"명백한 사실들을 간과하지는 마라",
		"넘어가라",
		"별 의미 없다",
		"멈추지 마라",
		"운명이 해결해줄 것이다",
		"같은 마음일 것이다",
		"확실한 사실들을 잊지 말아라",
		"끈기로 버티면 나중에 보상 받을 수 있다",
		"오로지 당신의 뜻대로 할 것",
		"감성적으로 바라보지 말아라",
		"이성적으로 생각해라",
		"이성적으로 바라보지 말아라",
		"지금 아니면 안된다",
		"속히 실행하도록",
		"마음을 열고 기다려라",
		"누구보다 자기 자신이 더 잘 알 것이다",
		"좀 더 생각해 봐라",
		"특별한 의미는 없다",
		"바보같은 생각이다",
		"차분하게 생각하면 답이 나올 것이다",
		"먼저 노력해라",
		"믿어보자",
		"아직 이르다 시작하지 말아라",
		"빨리 잊어라, 새로운 것이 기다리고 있다",
		"한계에 도달했다",
		"현실을 정확히 판단하라",
		"반전이 있다",
		"내 대답은 YES",
		"일을 뒤로 미루지 말아라",
		"자세히 알아보고 결정해라",
		"좋은 일이 생길 것이다",
		"경험해 보는 것이 좋다",
		"조언을 구하라",
		"너무 조급해하지 말아라"
		"다시 오지 않는다",
		"장애물이 있다, 잘 헤쳐나가자",
		"잘 해결할 것이다",
		"좋은게 좋은거다, 좋은 쪽으로 생각해라",
		"직접 물어봐라",
		"기다리면 좋은 일이 올 것이다",
		"무엇을 하든 잘 될 것이다",
		"잘 풀릴 수 있으니 참고 기다려라",
		"확실하다",
		"눈치보지 말아라",
		"마음 가는 그대로 행동해라",
		"시작해라",
		"그만 일어나 가야한다",
		"무서워하지 말라",
		"기도는 이루어질 것이다",
		"버텨라",
		"거짓말하지 말아라",
		"힘들면 하지 말아라",
		"마음을 넓게 가져라",
		"반전이 있다",
		"안된다고 하지말고 자신감을 가져라",
		"그냥 넘겨 버려라",
		"혼자하려 하지말고 주위에 도움을 받아라",
		"하고 싶은 말을 해라",
		"한번에 할 수 있을 것이다",
		"속도를 높여라",
		"실수해도 괜찮다",
		"쉽지 않을 것이다",
		"깰 수 있을 것이다",
		"엔딩을 볼 수 있을 것이다",
		"괜찮다",
		"다 맞출 수 있을 것이다",
		"할 수 있는 것은 다 해라",
		"잘 참았다",
		"좋았다",
		"충분히 해낼 수 있으니 걱정하지 마라",
		"도전하라",
		"호락호락한 게임이 되지 않을 것이다",
		"고군분투할 것이다",
		"방심하지 말아라",
		"무언가를 깨달을 수 있을 것이다",
		"바로 시작해라",
		"자아성찰을 할 수 있는 시간을 가져라",
		"돌다리도 두들겨보고 건너라",
		"고정관념을 깨부숴라",
		"원하는 대로",
		"고민보다는 가라",
		"의심하지 말아라",
		"충분히 해결할 것이다",
		"연상하는 것을 실행하라"
	};


	srand(time(NULL));
	for (int i = 0; i < 1; i++)
	{
		int random = rand() % 100;
		//cout << random << endl;
		cout << "\n" << wise[random] << endl;
		fout << wise[random] << endl;
		cout << "\n" << endl;
	}
	fout.close();

}

void information(struct member* info)
{
	ifstream fin;
	fin.open("solving.txt");

	string text1, text2;

	while (fin >> text1 >> text2)
	{
		cout << text1 << endl;
		cout << text2 << endl;
		cout << "\n" << endl;

	}

}



void fortune(struct member* info)
{
	int num;
	cout << "오늘의 운세를 확인하고 싶은 번호를 입력해주세요!" << endl;

	cout << "\n" << endl;
	cout << "1. 애정운 " << endl;
	cout << "2. 금전운" << endl;
	cout << "3. 직장운" << endl;
	cout << "4. 학업/성적운" << endl;
	cout << "5. 나가기" << endl;
	cout << "\n" << endl;
	cout << " >> ";
	cin >> num;

	if (num == 1)
	{
		int affection_num;
		cout << "\n" << endl;
		cout << "1부터 5까지 번호를 하나 선택해주세요" << endl;
		cout << "\n" << endl;
		cout << ">> ";
		cin >> affection_num;
		if (affection_num == 1)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "애정운 총 키워드는“발산”!" << "\n" << endl;
			cout << "당신의 숨겨진 매력을 발산하는 날이 되도록 한다면 좋을 것이에요." << endl;
			cout << "상대방에게 보여주지 않았던 당신의 새로운 모습을 가끔은 보여줄 필요가 있어요." << endl;
			cout << "그로 인해 상대방이 당신의 새로운 매력을 느끼게 되는 수가 있습니다." << endl;
			cout << "또한 여성적인 모습이 많았다면 남성다운 모습을, 남성답게 행동해왔다면 여성적인 섬세함도 가지고 있다는 것을 보여주세요." << endl;
			cout << "상대는 당신에게 더 깊게 빠져들 것이니 말이에요. 이 기회를 잘 이용하여 서로간의 애정에 더 큰 발전을 이루세요 :)" << endl;
		}
		if (affection_num == 2)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "애정운 총 키워드는“인연”!" << "\n" << endl;
			cout << "솔로라면 직장 내에서나 모임을 갖는 자리에서 인연을 만날 수 있어요." << endl;
			cout << "또한, 꾸준하게 노력해온 상대가 있다면 고백을 해도 좋을 시기입니다." << endl;
			cout << "연인관계라면 상대를 배려하는 보습에 더운 신뢰를 쌓게 되는 한주이니 연인을 잘 챙겨주세요 :)" << endl;
		}
		if (affection_num == 3)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "애정운 총 키워드는“해소”!" << "\n" << endl;
			cout << "다른 사람을 공감하고 진심으로 기쁨을 공유하기 위해서는 내면의 억눌린 감정을 쌓아놓지 말고" << endl;
			cout << "각자의 방법으로 증기를 내 뿜듯이 해소하는 과정이 필요해요." << endl;
			cout << "그렇게 되었을 때 다른 사람과도 즐거운 시기를 보낼 수 있으며 축하할 일이 생길 거에요." << endl;
			cout << "마지막으로, 마음에 드는 이성이 있다면 관계가 발전할 수 있습니다 :)" << endl;
		}
		if (affection_num == 4)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "애정운 총 키워드는“시작”!" << "\n" << endl;
			cout << "순수한 마음과 편안하고 행복감이 있는 마음 그대로 상대에게 다가가보세요." << endl;
			cout << "말을 타고 자신감있게 용기있는 자세로 다가간다면 상대의 마음을 얻음과 동시에" << endl;
			cout << "새로운 시작을 할 수 있을 거에요 :)." << endl;
		}
		if (affection_num == 5)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "애정운 총 키워드는“여유”!" << "\n" << endl;
			cout << "여유로운 마음으로 사람을 만나보세요!" << endl;
			cout << "오늘 당신의 사랑운이 무척 좋답니다. 완벽한 사랑을 찾거나 만들려고 하시지 않으셔도 됩니다." << endl;
			cout << "당신의 눈에 지나쳤던 많은 사람들 중에 당신의 인연이 존재할 수 있어요." << endl;
			cout << "한 걸음씩 나아가며 당신의 사랑을 지켜내세요 :)." << endl;
		}
	}
	if (num == 2)
	{
		int affection_num;
		cout << "\n" << endl;
		cout << "1부터 5까지 번호를 하나 선택해주세요" << endl;
		cout << "\n" << endl;
		cout << ">> ";
		cin >> affection_num;
		if (affection_num == 1)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "금전운 총 키워드는“행운”!" << "\n" << endl;
			cout << "금전운 행운이 당신과 함께 하는 하루에요!. 기분 좋은 일들이 이어진답니다." << endl;
			cout << "주변의 원조와 지원을 받기 좋고, 사고 싶었떤 물건을 사기 좋은 날이에요.." << endl;
			cout << "자신이 투자한 곳에서 좋은 소식이 들려올 수 있고 그로 인해 당신도 자신감을 얻을 수 있을 거에요." << endl;
			cout << "하지만 너무 많은 기대를 하는 것보다 여유를 가지고 생활해주세요 :)." << endl;
		}
		if (affection_num == 2)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "금전운 총 키워드는“축하”!" << "\n" << endl;
			cout << "수익이 들어오는 시기여서 축하할 일이 생길 수 있어요." << endl;
			cout << "하지만, 너무 급하게 쓴다면 화를 입게 되니 지출이 커지지 않게 주의가 필요합니다." << endl;
			cout << "천천히 지출을 해주세요 :)." << endl;
		}
		if (affection_num == 3)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "금전운 총 키워드는“평온”!" << "\n" << endl;
			cout << "과도한 시도와 결정이 큰 수익을 얻을 수 있다고 해요." << endl;
			cout << "성급한 것에만 주의를 한다면 좋은 결과가 따를 것입니다." << endl;
			cout << "모든 결정은 편안한 마음상태일때 좋은 결과를 얻게 됩니다 :)." << endl;
		}
		if (affection_num == 4)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "금전운 총 키워드는“노력”!" << "\n" << endl;
			cout << "금전운이 좋아지는 시기에요." << endl;
			cout << "꾸준하게 진행했던 일에 수익이 생기는 시기이니 계속 노력한다면 꾸준하고" << endl;
			cout << "안정적인 수익이 예상됩니다 :)." << endl;
		}
		if (affection_num == 5)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "금전운 총 키워드는“좋은 영향”!" << "\n" << endl;
			cout << "전반적으로 큰 무리가 없으며 기대했던 수준, 혹은 그 이상의 수익을 올려 나갈 수 있을 거에요." << endl;
			cout << "생각지 못했던 곳에서 좋은 소식이 들릴 수 있으며 이는 곧 자신의 금전적인 이익과 관계할 수 있습니다. " << endl;
			cout << "노력했던 만큼 성과가 이루어지는 날이니 마음을 여유롭게 가지고 상황을 지켜보세요 :)." << endl;
		}
	}
	if (num == 3)
	{
		int affection_num;
		cout << "\n" << endl;
		cout << "1부터 5까지 번호를 하나 선택해주세요" << endl;
		cout << "\n" << endl;
		cout << ">> ";
		cin >> affection_num;
		if (affection_num == 1)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "직장운 총 키워드는“기회”!" << "\n" << endl;
			cout << "새로운 일터가 생길 기회에요." << endl;
			cout << "이전에 원서를 넣었던 회사에서 연락이 오거나, 주위 사람들의 추천이나 소개로 면접을 보러 가게 될 수 있습니다." << endl;
			cout << "직장이 없는 동안에도 자기 관리를 잊지 않았다면 분명히 합격이라는 좋은 소식이 들려올 것입니다.." << endl;
			cout << "변화를 바라는 사람에도 좋은 하루가 될 것입니다 :)." << endl;
		}
		if (affection_num == 2)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "직장운 총 키워드는“최선”!" << "\n" << endl;
			cout << "원하는 곳으로 이동을 하게 될 수 있으며, 목표한 것을 쟁취하므로서 성공의 기회를 얻을 수 있어요." << endl;
			cout << "처음의 열정 그대로 끝까지 최선을 다하는 자세가 필요합니다 :)." << endl;
		}
		if (affection_num == 3)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "직장운 총 키워드는“화합”!" << "\n" << endl;
			cout << "직장 내에서 화합이 잘되고 열심히 해왔던 프로젝트나 계약건도 잘 풀릴 수 있습니다." << endl;
			cout << "즐거운 감정으로 일을 잘 마칠 수 있으니 오해가 생길 만한 일은 바로바로 풀고 갈 필요가 있습니다 :)" << endl;
		}
		if (affection_num == 4)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "직장운 총 키워드는“빛”!" << "\n" << endl;
			cout << "열심히 일 해온 만큼 성과를 얻게 됩니다." << endl;
			cout << "더욱 전문가로서의 실력을 인정 받게 될 것이니, 목표를 향해 전진해주세요." << endl;
			cout << "사업을 하고 있다면 자신만의 방식을 고수해주세요." << endl;
			cout << "노력한 만큼 빛을 발하게 될 것입니다 :)" << endl;
		}
		if (affection_num == 5)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "직장운 총 키워드는“능력”!" << "\n" << endl;
			cout << "승진을 위해서는 자신의 능력도 중요하지만 그보다 더 중요한 것은 그 능력을 보여주는 것입니다." << endl;
			cout << "오랫동안 자신의 능력을 펼쳐 보일 기회가 없어 마치 복룡처럼 지내왔던 당신이라면, 오늘은 조금쯤 기대해도 좋을 날이에요. " << endl;
			cout << "당신에게 결정적인 기회가 주어집니다. 그것은 옆에서 보기에는 위기처럼 보일지도 모르지만, 당신 자신은 조금도 당황하지 않을 수 있을 거에요." << endl;
			cout << "너무 긴장하지 말고 평소 하던 대로 이루어주세요 :)" << endl;
		}
	}
	if (num == 4)
	{
		int affection_num;
		cout << "\n" << endl;
		cout << "1부터 5까지 번호를 하나 선택해주세요" << endl;
		cout << "\n" << endl;
		cout << ">> ";
		cin >> affection_num;
		if (affection_num == 1)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "학업, 성적운 총 키워드는“극복”!" << "\n" << endl;
			cout << "몇 가지 변수가 있긴 하지만 당신은 이러한 것을 잘 이겨나갈 수 있을 것입니다." << endl;
			cout << "신체적으로 어려운 상황을 이겨내면 반드시 그에 따른 성과가 따를 거에요." << endl;
			cout << "크게 걱정할 것은 없습니다 :)." << endl;
		}
		if (affection_num == 2)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "학업, 성적운 총 키워드는“집중”!" << "\n" << endl;
			cout << "노력한 만큼의 성과를 얻을 수 있겠지만 집중에 더 신경을 써야할 것 같아요." << endl;
			cout << "앉아있기만 해도 좀이 쑤시며 책을 펼쳐도 내용이 눈에 들어오지 않는 경우도 있을 수 있겠습니다." << endl;
			cout << "조금 더 마음을 가다듬고 전진해 보도록 해요 :)" << endl;
		}
		if (affection_num == 3)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "학업, 성적운 총 키워드는“조절”!" << "\n" << endl;
			cout << "그 전에 아무리 열심히 공부했어도 시험 당일에 쓰러지면 말짱 도로묵입니다." << endl;
			cout << "시험 때문에 초초해져 공부에 더더욱 매달리는 심정은 이해할 수 있지만 그것도 적당히 하는 것이 좋아요." << endl;
			cout << "잘해야 한다는 부담감은 버리고 그만큼 혹은 그 이상의 성적을 낼 수 있다고 믿고 전진하세요 :)" << endl;
		}
		if (affection_num == 4)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "학업, 성적운 총 키워드는“보충”!" << "\n" << endl;
			cout << "입시생이 중요한 시험을 앞두고 있다면 잔뜩 긴장해 있겠지요." << endl;
			cout << "조금이라도 더 성적을 올리기 위해 열심인 나날들일 것입니다." << endl;
			cout << "오늘은 잘하는 것을 파고들어 더욱 탄탄하게 다지기보다도 부족한 부분을 보충하기에 좋은 날 입니다." << endl;
			cout << "잘 못했던 것을 하나하나 이해해 나가고, 햇갈렸던 부분을 확실히 정리하면 훨씬 즐거운 성취감을 느낄 수 있을 거에요 :) :)" << endl;
		}
		if (affection_num == 5)
		{
			cout << "\n" << endl;
			cout << "\n" << endl;
			cout << "학업, 성적운 총 키워드는“자신”!" << "\n" << endl;
			cout << "시험의 합격 여부에 대한 다소 간의 두려움이 있을 수도 있겠지요." << endl;
			cout << "하지만 당신이 그렇게 불안해하거나 초초함을 느낄 필요는 사실 없습니다. " << endl;
			cout << "조금만 더 냉정히 생각해보고 마음을 가라앉히도록 하세요." << endl;
			cout << "당신은 분명 원하던 결과를 낼 수 있을테니 자신있게 도전하시기 바랍니다 :)" << endl;
		}
	}
	if (num == 5) {}
}