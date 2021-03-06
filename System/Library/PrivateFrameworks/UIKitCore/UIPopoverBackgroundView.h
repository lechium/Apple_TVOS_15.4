//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPopoverBackgroundViewMethods-Protocol.h>

@interface UIPopoverBackgroundView <UIPopoverBackgroundViewMethods>
{
    _Bool __chromeHidden;	// 8 = 0x8
}

+ (_Bool)wantsDefaultContentAppearance;	// IMP=0x000000000102c3bb
+ (double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1;	// IMP=0x000000000102c3a9
+ (double)cornerRadius;	// IMP=0x000000000102c39b
+ (struct UIEdgeInsets)contentViewInsets;	// IMP=0x000000000102c315
+ (double)arrowBase;	// IMP=0x000000000102c2ff
+ (double)arrowHeight;	// IMP=0x000000000102c2e9
@property(nonatomic, setter=_setChromeHidden:) _Bool _chromeHidden; // @synthesize _chromeHidden=__chromeHidden;
- (long long)backgroundStyle;	// IMP=0x000000000102cc01
- (void)layoutSubviews;	// IMP=0x000000000102cbc0
- (struct CGRect)_backgroundContentViewFrame;	// IMP=0x000000000102ca56
- (struct CGRect)_contentViewFrame;	// IMP=0x000000000102c9e0
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000102c81e
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000102c7ac
- (void)_updateShadow;	// IMP=0x000000000102c65e
- (id)_shadowPath;	// IMP=0x000000000102c5e8
- (struct CGSize)_shadowOffset;	// IMP=0x000000000102c5d7
- (double)_shadowRadius;	// IMP=0x000000000102c5c9
- (double)_shadowOpacity;	// IMP=0x000000000102c5bb
- (struct UIEdgeInsets)_shadowInsets;	// IMP=0x000000000102c5a4
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;	// IMP=0x000000000102c3ec
- (void)_updateChrome;	// IMP=0x000000000102c3c3
- (struct UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned long long)arg1;	// IMP=0x000000000102c37c
- (struct UIEdgeInsets)_contentViewInsets;	// IMP=0x000000000102c33e
@property(nonatomic) unsigned long long arrowDirection;
@property(nonatomic) double arrowOffset;

@end

