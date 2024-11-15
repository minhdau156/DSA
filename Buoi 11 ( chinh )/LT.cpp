// Quay lui
int X[100], n;

void Try(i){
    Thử gán các giá trị có thể cho phần tử X[i];
    for(j = <Giá trị 1> ......<Giá trị m>){
        Kiểm tra xem có gán được j cho X[i] hay không
        X[i] = j;
        Kiểm tra xem i có phải là phần tử cuối cùng của cấu hình hay không?
        if(i == n){
            Tim duoc mot cau hinh
        }
        else{
            Tiếp tục đi xây dựng phần tử thứ i + 1
            Try(i + 1);
        }
    }
    <Back track>
    Bỏ ghi nhận X[i] = j   
}