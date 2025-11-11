#include <iostream>

int main()
{

    // 好きな数字を入力してもらい、その数字を表示するプログラム
    /*int number;
    std::cout << "好きな数字を入力して下さい" << std::endl;
    std::cin >> number;
    std::cout << "こんにちは、あなたの好きな数字は" << number << "ですね"<< std::endl;*/

    // 2つの数字を入れ替えるプログラム
    // int num;
    // int doubleNum;
    // int chengeNum;
    // std::cout << "好きな数字を入れてください" << std::endl;
    // std::cin >> num;
    // std::cout << "次に、もう一つ数字を入れてください" << std::endl;
    // std::cin >> doubleNum;
    // std::cout << "あなたが入れた数値は" << num << "と" << doubleNum << "ですね" << std::endl;
    // std::cout << "数字を入れ替えます" << std::endl;
    // chengeNum = num; // 第三の変数に1つめの変数を代入
    // num = doubleNum; // 1つ目の変数に２つ目の変数を代入
    // doubleNum = chengeNum; // 2つ目の変数に第三の変数を代入
    // std::cout << "入れ替えました！1つ目の数字は" << num << "、2つ目の数字は" << doubleNum << "です" << std::endl;

    ////ユーザの年齢と会員ステータスを入力してカラオケの料金を計算プログラム
    // int age; //年齢
    // int member; // 会員ステータス
    // int isMenber; //会員かどうか

    // std::cout << "年齢を入力してください" << std::endl;
    // std::cin >> age;

    // std::cout << "会員ならば１会員ではないなら２を入力してください" << std::endl;
    // std::cin >> isMenber;
    //
    ////60才以上だったらシニア料金
    // if (age >= 60) {
    //     std::cout << "シニア料金600円です" << std::endl;
    // } else if ( age < 18) {
    //     std::cout << "未成年料金500円です" << std::endl;
    // } else if (isMenber==1 && age >= 18) {
    //     std::cout << "会員料金800円です" << std::endl;
    // } else if(isMenber==0 && age > 18){
    //     std::cout << "一般料金1000円です" << std::endl;
    // }

    //// 遊園地の入場料金を決めるプログラム
    // int age; // 年齢
    // int isMember; // 会員かどうか

    // std::cout << "年齢を入力してください" << std::endl;
    // std::cin >> age;
    // std::cout << "会員ならば1、会員でなければ2を入力してください" << std::endl;
    // std::cin >> isMember;

    // if (age > 65) {
    //     std::cout << "シニア割700円" << std::endl; //65歳以上700円
    // } else if (age >= 18 && isMember == 0) {
    //     std::cout << "一般料金1200円" << std::endl; // 18歳以上会員でない1200円
    // } else if (age >= 18 && isMember == 1) {
    //     std::cout << "会員料金1000円" << std::endl; // １８歳以上館員なら1000円
    // } else if (age >= 13 && age <= 17) {
    //     std::cout << "学生料金800円" << std::endl; // １３歳以上１７歳以下800円
    // } else if (age >= 4 && age <= 12) {
    //     std::cout << "子供料金500円" << std::endl; // 4歳以上12歳以下500円
    // } else {
    //     std::cout << "幼児無料" << std::endl; // 3歳以下無料
    // }

    //// カフェの注文料金を計算するプログラム
    //int drink; // 飲み物の種類
    //int isTopping; // トッピングの有無

    //std::cout << "飲み物を選んでください" << std::endl;
    //std::cin >> drink;
    //std::cout << "トッピングはしますか？ するなら1、しないなら2を入力してください" << std::endl;
    //std::cin >> isTopping;

    //if (isTopping == 1) { // トッピングあり

    //    if (drink == 1) {
    //        std::cout << "コーヒートッピングあり350円" << std::endl;
    //    } else if (drink == 2) {
    //        std::cout << "ティートッピングあり250円" << std::endl;
    //    } else if (drink == 3) {

    //        std::cout << "ジューストッピングあり250円" << std::endl;
    //    }
    //}
    //if (isTopping == 2) {
    //    if (drink == 1) {
    //        std::cout << "コーヒートッピングなし300円" << std::endl;
    //    } else if (drink == 2) {
    //        std::cout << "ティートッピングなし200円" << std::endl;
    //    } else if (drink == 3) {

    //        std::cout << "ジューストッピングなし200円" << std::endl;
    //    }
    //}

    //int age; // 年齢
    //int height; // 身長
    //int isPearent; // 保護者同伴かどうか

    //std::cout << "年齢を入力してください" << std::endl;
    //std::cin >> age;
    //std::cout << "身長を入力してください" << std::endl;
    //std::cin >> height;
    //std::cout << "保護者同伴なら1、同伴でなければ2を入力してください" << std::endl;
    //std::cin >> isPearent;



    //if (age < 12 || isPearent == 1) {
    //    std::cout << "保護者と一緒に乗れます" << std::endl;
    //} else if (age >= 12 && height >= 120) {
    //    std::cout << "乗れます" << std::endl;
    //} else {
    //    std::cout << "乗れません" << std::endl;
    //}
    
  //int day; // 曜日
  //  std::cout << "曜日を数字で入力してください（日曜日:1、月曜日:2、火曜日:3、水曜日:4、木曜日:5、金曜日:6、土曜日:7）" << std::endl;
  //std::cin >> day;
  //if (day == 6 || day == 1) {
  //    std::cout << "週末です" << std::endl;
  //} else {
  //    std::cout << "平日です" << std::endl;
  //}



    return 0;
}