//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SRUserUtteranceView;

@interface SRUserUtteranceContainerView : UIView
{
    _Bool _showEditingView;	// 8 = 0x8
    SRUserUtteranceView *_displayView;	// 16 = 0x10
    UIView *_tableView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000024c4b
@property(nonatomic) __weak UIView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SRUserUtteranceView *displayView; // @synthesize displayView=_displayView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000024b59
- (void)layoutSubviews;	// IMP=0x0010000000024a0e
- (double)baselineOffsetFromBottom;	// IMP=0x0010000000024984
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x0010000000024945
- (void)animateToDisplayWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000024722
- (void)animateToEditWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002451f
- (_Bool)isFirstResponder;	// IMP=0x0010000000024271

@end
