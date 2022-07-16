//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSString, UILabel, UIView, _AVxOverlayPlaybackAuxiliaryBadgeView;

__attribute__((visibility("hidden")))
@interface _AVxOverlayPlaybackAuxiliaryMetadataView : UIStackView
{
    UIView *_proResBadgeView;	// 8 = 0x8
    UIView *_HDRBadgeView;	// 16 = 0x10
    UIStackView *_badgesStackView;	// 24 = 0x18
    _AVxOverlayPlaybackAuxiliaryBadgeView *_playbackStyleBadgeView;	// 32 = 0x20
    UILabel *_additionalTextLabel;	// 40 = 0x28
}

+ (id)_ProResBadgeImage;	// IMP=0x000000000007af17
+ (id)_HDRBadgeImage;	// IMP=0x000000000007aebc
- (void).cxx_destruct;	// IMP=0x000000000007a308
@property(readonly, nonatomic) UILabel *additionalTextLabel; // @synthesize additionalTextLabel=_additionalTextLabel;
@property(readonly, nonatomic) _AVxOverlayPlaybackAuxiliaryBadgeView *playbackStyleBadgeView; // @synthesize playbackStyleBadgeView=_playbackStyleBadgeView;
@property(readonly, nonatomic) UIStackView *badgesStackView; // @synthesize badgesStackView=_badgesStackView;
@property(readonly, nonatomic) UIView *HDRBadgeView; // @synthesize HDRBadgeView=_HDRBadgeView;
@property(readonly, nonatomic) UIView *proResBadgeView; // @synthesize proResBadgeView=_proResBadgeView;
@property(copy, nonatomic) NSString *additionalText;
@property(nonatomic) unsigned long long badgeStyle;
- (void)tintColorDidChange;	// IMP=0x000000000007a1c3
- (id)init;	// IMP=0x0000000000079d08

@end

