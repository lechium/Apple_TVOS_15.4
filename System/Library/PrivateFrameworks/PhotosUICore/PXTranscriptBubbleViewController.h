//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIView;
@protocol PXTranscriptBubbleDelegate;

@interface PXTranscriptBubbleViewController : UIViewController
{
    _Bool _transitionInProgress;	// 8 = 0x8
    struct CGSize _lastRequestedSize;	// 16 = 0x10
    long long _lastResizeRequestID;	// 32 = 0x20
    _Bool _isReadyForDisplay;	// 40 = 0x28
    id <PXTranscriptBubbleDelegate> _delegate;	// 48 = 0x30
    UIView *_contentView;	// 56 = 0x38
    UIView *_targetContentView;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000b983d
@property(retain, nonatomic) UIView *targetContentView; // @synthesize targetContentView=_targetContentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <PXTranscriptBubbleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidLoad;	// IMP=0x00000000000b9717
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000b9502
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000b9428
- (void)_switchToPendingTargetViewIfNecessary;	// IMP=0x00000000000b922d
- (void)_resizeTimeoutForRequestID:(long long)arg1;	// IMP=0x00000000000b9179
- (void)_scheduleContentViewUpdate;	// IMP=0x00000000000b8ebd
- (void)transitionToContentView:(id)arg1;	// IMP=0x00000000000b8d2c
- (_Bool)_requiresResizeForCurrentSize:(struct CGSize)arg1;	// IMP=0x00000000000b8b51
- (struct CGSize)workaroundSizeForSize:(struct CGSize)arg1;	// IMP=0x00000000000b8b4b
- (struct CGSize)_contentViewSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000b8a0d
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000b8967

@end

