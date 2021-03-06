//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage, UIImageView;

@interface _TVDeckImageView : UIView
{
    UIView *_pendingDisplayView;	// 8 = 0x8
    unsigned long long _pendingViewType;	// 16 = 0x10
    UIView *_displayView;	// 24 = 0x18
    unsigned long long _viewType;	// 32 = 0x20
    UIImageView *_placeholderImageView;	// 40 = 0x28
    double _imageLoadTimeout;	// 48 = 0x30
    NSArray *_imageProxies;	// 56 = 0x38
    UIImage *_placeholderImage;	// 64 = 0x40
    unsigned long long _deckViewParadeType;	// 72 = 0x48
    double _cycleInterval;	// 80 = 0x50
    double _transitionDuration;	// 88 = 0x58
    double _newDataTransitionDuration;	// 96 = 0x60
    struct CGRect _imageFrame;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000147068
@property(nonatomic) double newDataTransitionDuration; // @synthesize newDataTransitionDuration=_newDataTransitionDuration;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(nonatomic) unsigned long long deckViewParadeType; // @synthesize deckViewParadeType=_deckViewParadeType;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (unsigned long long)_viewTypeForNumberOfImages:(long long)arg1;	// IMP=0x0000000000146f56
- (void)_displayPlaceholderView;	// IMP=0x0000000000146cc6
- (void)_fadeToBlack;	// IMP=0x0000000000146bd8
- (void)_dissolveToPendingView;	// IMP=0x0000000000146752
- (void)resume;	// IMP=0x0000000000146703
- (_Bool)isPaused;	// IMP=0x00000000001466b4
- (void)pause;	// IMP=0x0000000000146662
- (void)_scrollingParadeViewReadyNotification:(id)arg1;	// IMP=0x0000000000146352
- (void)_crossfadeViewReadyNotification:(id)arg1;	// IMP=0x000000000014629c
- (void)layoutSubviews;	// IMP=0x00000000001461fa
- (void)dealloc;	// IMP=0x0000000000146167
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000145fe5

@end

