//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIProgressView;

@interface TVSUIOSUpdateView : UIView
{
    UIImageView *_logo;	// 8 = 0x8
    UILabel *_stepText;	// 16 = 0x10
    UILabel *_dontUnplugText;	// 24 = 0x18
    UIProgressView *_progress;	// 32 = 0x20
}

+ (id)imageForStep2of2;	// IMP=0x0000000000025300
+ (id)viewForUpdateStep1of2;	// IMP=0x0000000000025179
+ (id)viewForDownloadStep;	// IMP=0x0000000000024ff2
- (void).cxx_destruct;	// IMP=0x00000000000262ca
- (struct CGRect)_frameForStep2Labels;	// IMP=0x0000000000025ff5
- (void)_setDontUnplugText:(id)arg1;	// IMP=0x0000000000025f54
- (void)setStepText:(id)arg1;	// IMP=0x0000000000025f11
- (void)setProgressPercent:(float)arg1;	// IMP=0x0000000000025ee0
- (void)layoutSubviews;	// IMP=0x0000000000025c26
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000257ad

@end

