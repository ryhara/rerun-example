#include <rerun.hpp>
#include <rerun/demo_utils.hpp>

#include <opencv2/opencv.hpp>

using namespace rerun::demo;

int main() {
  // RerunのRecordingStreamの設定
  const auto rec = rerun::RecordingStream("rerun_example_cpp_with_opencv");
  rec.spawn().exit_on_failure();

  // 3Dポイントと色のグリッドを生成
  std::vector<rerun::Position3D> points =
      grid3d<rerun::Position3D, float>(-10.f, 10.f, 10);
  std::vector<rerun::Color> colors = grid3d<rerun::Color, uint8_t>(0, 255, 10);

  // Rerunで3Dポイントをログ出力
  rec.log("my_points",
          rerun::Points3D(points).with_colors(colors).with_radii({0.5f}));

  // --- OpenCVを使った処理 ---
  // 画像を作成（サイズ: 400x400、白背景）
  cv::Mat image = cv::Mat::ones(400, 400, CV_8UC3);
  image.setTo(cv::Scalar(255, 255, 255));

  // 円を描画
  cv::circle(image, cv::Point(200, 200), 100, cv::Scalar(0, 0, 255),
             -1); // 赤い円

  // テキストを描画
  cv::putText(image, "OpenCV + Rerun", cv::Point(50, 50),
              cv::FONT_HERSHEY_SIMPLEX, 1.0, cv::Scalar(0, 0, 0), 2);

  // 画像はBGR -> RGBに変換してから送信
  cv::cvtColor(image, image, cv::COLOR_BGR2RGB);
  // OpenCVの画像データを std::vector<uint8_t> にコピー
  std::vector<uint8_t> img_data(image.data,
                                image.data + image.total() * image.elemSize());

  // Rerunにログ（Image::from_rgb24 を使用）
  rec.log("opencv_image", rerun::Image::from_rgb24(
                              img_data, {static_cast<uint32_t>(image.cols),
                                         static_cast<uint32_t>(image.rows)}));

  return 0;
}
