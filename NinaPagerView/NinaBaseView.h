// The MIT License (MIT)
//
// Copyright (c) 2015-2016 RamWire ( https://github.com/RamWire )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#import <UIKit/UIKit.h>

@interface NinaBaseView : UIView <UIScrollViewDelegate>

@property (strong, nonatomic) UIScrollView *scrollView;
@property (assign, nonatomic) NSInteger currentPage; /**<  页码   **/
@property (strong, nonatomic) UIScrollView *topTab; /**<  顶部tab   **/
@property (strong, nonatomic) NSArray *titleArray; /**<  标题   **/
@property (assign, nonatomic) CGFloat titleScale; /**< 标题缩放比例 **/
@property (assign, nonatomic) NSInteger baseDefaultPage; /**< 设置默认加载的界面 **/
@property (assign, nonatomic) CGFloat blockHeight; /**< 滑块高度 **/
@property (assign, nonatomic) CGFloat bottomLinePer; /**< 下划线占比 **/
@property (assign, nonatomic) CGFloat bottomLineHeight; /**< 下划线高度 **/
@property (assign, nonatomic) CGFloat sliderCornerRadius; /**< 滑块圆角 **/
/**
 *  Init Method.
 *
 *  @param frame          NinaBaseView frame.
 *  @param selectColor    Toptab button's select color.
 *  @param unselectColor  Toptab button's unselect color.
 *  @param underlineColor Toptab underline color.
 *  @param topTabColor    Toptab background color.
 *  @param topTabNum      Toptab styles.
 *
 */
- (instancetype)initWithFrame:(CGRect)frame WithSelectColor:(UIColor *)selectColor WithUnselectorColor:(UIColor *)unselectColor WithUnderLineColor:(UIColor *)underlineColor WithtopTabColor:(UIColor *)topTabColor WithTopTabType:(NSInteger)topTabNum;
@end
