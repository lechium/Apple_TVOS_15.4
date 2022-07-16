//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UICircleProgressView
{
}

+ (Class)layerClass;	// IMP=0x00000000004fc096
- (double)progressPresentationValue;	// IMP=0x00000000004fc98c
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004fc905
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004fc508
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004fc4f1
@property(nonatomic) double progress;
@property(nonatomic) _Bool showProgressTray;
@property(nonatomic) double progressLineWidth;
@property(readonly, nonatomic) UIColor *progressColor;
- (void)setProgressColor:(id)arg1;	// IMP=0x00000000004fc261
@property(nonatomic) long long progressStartPoint;
- (void)layoutSubviews;	// IMP=0x00000000004fc1a2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004fc0a7

@end

