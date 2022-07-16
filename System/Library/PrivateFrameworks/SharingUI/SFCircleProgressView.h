//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SFCircleProgressView : UIView
{
}

+ (Class)layerClass;	// IMP=0x0000000000009e06
- (double)progressPresentationValue;	// IMP=0x000000000000a7e6
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a75f
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000a344
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a32d
@property(nonatomic) double progress;
@property(nonatomic) _Bool showProgressTray;
@property(nonatomic) double progressLineWidth;
@property(retain, nonatomic) UIColor *progressBackgroundColor;
@property(retain, nonatomic) UIColor *progressColor;
@property(nonatomic) long long progressStartPoint;
- (void)layoutSubviews;	// IMP=0x0000000000009f1c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000009e17

@end
