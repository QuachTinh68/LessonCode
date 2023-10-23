// Khai báo các biến và khởi tạo giá trị ban đầu
const originHeights = [];
const statusToggles = [];
let subMenuHeight = 0;

// Xử lý sự kiện khi tài liệu đã sẵn sàng
$(document).ready(() => {
  subMenuHeight = $('.submenu div').height();
  $('.submenu').each((index, element) => {
    originHeights.push($(element).height());
    statusToggles.push(true); // Menu đang mở
  });
});

// Hàm xử lý khi click vào menu
function toggleMenu(subitem) {
  $('.submenu').each((index, element) => {
    if (element === subitem) {
      if (statusToggles[index] === true) {
        $(subitem).animate({ height: `${subMenuHeight}px` }, 300);
        statusToggles[index] = false; // Menu đang đóng
      } else {
        $(subitem).animate({ height: `${originHeights[index]}px` }, 300);
        statusToggles[index] = true; // Menu đang mở
      }
      return;
    }
  });
}

