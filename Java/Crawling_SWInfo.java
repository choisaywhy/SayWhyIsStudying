import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.select.Elements;

class Board {
   String title;
   String link="nothing";
   String text;   
   String date;
}

public class Crawling_SWInfo {
      
   public static void main(String[] args) {
      
      ////////////////////////// 게시글 리스트  ///////////////////////////
      String url_sw = "https://software.cbnu.ac.kr/bbs/bbs.php?db=notice"; // 학과 홈페이지 공지사항게시판 주소
      Document doc = null;       

      try {
         doc = Jsoup.connect(url_sw).get(); // doc에 url_sw html 코드를 가져옴
      } catch (IOException e) {
         e.printStackTrace();
      }
   
      
      Board[] board_list = new Board[25]; // board 형식으로 25개의 리스트 선언
      
      for(int i=0; i<25;i++)
      {
         board_list[i]=new Board();
      }
      
      Elements parseList = doc.select("div#content");  
      Elements parseValue = parseList.select("nobr");
      
      int count=0;

      for(Element v : parseValue) {      
         
         Element parseLink = v.select("a[href]").first(); // href를 가진 a태그를 가져옴
         // board_list[count].title = v.text();                           
         board_list[count].link = parseLink.attr("abs:href"); // href의 절대주소를 각 리스트에 저장
         
         //System.out.println(board_list[count].title);
         //System.out.println(board_list[count].link);
               
         count++;      
      }

      
      ////////////////////// 게시글 본문 ////////////////////////
      
      for(count=0; count<25;count++) {
      
      String url_each = board_list[count].link; // 학과 홈페이지 공지사항게시판 주소
      doc = null;       

      try {
         doc = Jsoup.connect(url_each).get(); // doc에 url_each html 코드를 가져옴
      } catch (IOException e) {
         e.printStackTrace();
      }
   
      
      Elements parseList_each = doc.select("div#content");  
      
                     
      board_list[count].title = parseList_each.select("nobr").text();   
      board_list[count].text = parseList_each.select("p").text();
      board_list[count].date = parseList_each.select("span.view_num").text();   
      
      board_list[count].date = board_list[count].date.substring(0,20); // 날짜 길이 조정

         
//      System.out.println(board_list[count].title);

//      System.out.println(board_list[count].text);
      
//      System.out.println(board_list[count].date);

      }
   }

   
}

