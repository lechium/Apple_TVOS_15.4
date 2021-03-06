//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMapTable, SRCompactDeviceMotionEffectView;
@protocol SRCompactServerUtteranceViewDelegate;

@interface SRCompactServerUtteranceView : UIView
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
    UIView *_labelsContainerView;	// 40 = 0x28
    NSMapTable *_emojiLabels;	// 48 = 0x30
    id <SRCompactServerUtteranceViewDelegate> _delegate;	// 56 = 0x38
    SRCompactDeviceMotionEffectView *_deviceMotionEffectView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000007a6b
@property(readonly, nonatomic) SRCompactDeviceMotionEffectView *deviceMotionEffectView; // @synthesize deviceMotionEffectView=_deviceMotionEffectView;
@property(nonatomic) __weak id <SRCompactServerUtteranceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00100000000079e4
- (id)_fontForUtteranceLabel;	// IMP=0x00100000000079bc
- (double)_scaledSpacingBetweenLabels;	// IMP=0x0010000000007965
- (id)_createLabel;	// IMP=0x0010000000007895
- (id)_createEmojiLabelForString:(id)arg1 containingEmojisAtRanges:(id)arg2;	// IMP=0x001000000000756d
- (id)_createLabelForUtterance:(id)arg1;	// IMP=0x0010000000007443
- (void)layoutSubviews;	// IMP=0x0010000000006e9b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000006add
- (void)setUtterances:(id)arg1;	// IMP=0x00100000000063ab
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x001000000000638b
- (id)initWithContentInsets:(struct UIEdgeInsets)arg1 delegate:(id)arg2;	// IMP=0x0010000000006250

@end

