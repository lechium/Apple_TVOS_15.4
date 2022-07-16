//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImageView;
@protocol UITableConstants;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListAccessoryControl
{
    UIImageView *_imageView;	// 112 = 0x70
    _Bool _needsImageViewUpdate;	// 120 = 0x78
    long long _type;	// 128 = 0x80
    id <UITableConstants> _constants;	// 136 = 0x88
    UIColor *_accessoryTintColor;	// 144 = 0x90
    UIColor *_accessoryBackgroundColor;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000007b2c9c
@property(retain, nonatomic) UIColor *accessoryBackgroundColor; // @synthesize accessoryBackgroundColor=_accessoryBackgroundColor;
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
@property(retain, nonatomic) id <UITableConstants> constants; // @synthesize constants=_constants;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)_renderedImage;	// IMP=0x00000000007b2c22
- (id)viewForLastBaselineLayout;	// IMP=0x00000000007b2bf6
- (id)viewForFirstBaselineLayout;	// IMP=0x00000000007b2bca
- (void)layoutSubviews;	// IMP=0x00000000007b2ab6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000007b2a44
- (void)_updateImageViewIfNeeded;	// IMP=0x00000000007b2775
- (void)_setNeedsImageViewUpdate;	// IMP=0x00000000007b2758
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000007b2717
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000007b26b3
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000007b2672
- (void)addActionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000007b244f
- (unsigned long long)_controlEventsForActionTriggered;	// IMP=0x00000000007b2444
- (id)initWithType:(long long)arg1 constants:(id)arg2;	// IMP=0x00000000007b2390

@end

