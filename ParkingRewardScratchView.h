//
//  ParkingRewardScratchView.h
//  CarInsurance
//
//  Created by AaronTKD on 16/3/23.
//  Copyright © 2016年 geely. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  刮奖初始回调
 */
typedef void (^scratchBegin)(id userInfo);

/**
 *  刮奖完成回调
 */
typedef void(^scratchCompletion)(id userInfo);

@interface ParkingRewardScratchView : UIView

/**
 要刮的底图.
 */
@property (nonatomic, strong) UIImage *image;
/**
 *  要刮的底层View (传入image或者UIView都可以)
 */
@property (nonatomic,strong) UIView *subsurfaceView;
/**
 涂层图片.
 */
@property (nonatomic, strong) UIImage *surfaceImage;

/**
 涂层是否已被刮开
 */
@property (nonatomic, assign, readonly, getter = isOpen) BOOL open;

/**
 *  刚刮的回调。（刮的动作刚一开始，就向服务器发送请求，此时获取刮奖的金额，更加贴近刮奖的实际效果）
 */
@property (nonatomic,strong) scratchBegin begin;

/**
 刮出后的回调.
 */
@property (nonatomic, strong) scratchCompletion completion;

/**
 可携带一些自定义信息, 将会在回调的block内回传.
 */
@property (nonatomic, strong) id userInfo;

/**
 重置刮刮卡涂层.
 */
- (void)reset;

/**
 用这个方法初始化.
 */
- (id)initWithFrame:(CGRect)frame;

@end
