//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, PXSnapStripViewInternal;

@interface PXSnapStripView : UIView
{
    PXSnapStripViewInternal *_stripView;	// 8 = 0x8
    NSArray *_indicatorInfos;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003cb70f
@property(copy, nonatomic) NSArray *indicatorInfos; // @synthesize indicatorInfos=_indicatorInfos;
- (void)_updateStripView:(_Bool)arg1;	// IMP=0x00000000003cb507
- (void)setIndicatorInfos:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003cb479
- (void)layoutSubviews;	// IMP=0x00000000003cb3ed
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003cb372

@end
