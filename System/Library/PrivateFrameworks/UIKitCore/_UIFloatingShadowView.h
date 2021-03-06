//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImage, UIView;

@interface _UIFloatingShadowView
{
    UIView *_shadowView;	// 112 = 0x70
    struct CATransform3D _shadowTransform;	// 120 = 0x78
    _Bool _shadowEnabled;	// 248 = 0xf8
    _Bool __disableOutsetShadowPath;	// 249 = 0xf9
    double _shadowRadius;	// 256 = 0x100
    double _shadowOpacity;	// 264 = 0x108
    double _shadowVerticalOffset;	// 272 = 0x110
    double _shadowExpansion;	// 280 = 0x118
    UIImage *_shadowImage;	// 288 = 0x120
    double _cornerRadius;	// 296 = 0x128
    struct CGSize _shadowSize;	// 304 = 0x130
    struct CGRect _shadowContentsCenter;	// 320 = 0x140
}

+ (Class)layerClass;	// IMP=0x00000000000f61b9
- (void).cxx_destruct;	// IMP=0x00000000000f6ff1
@property(nonatomic) _Bool _disableOutsetShadowPath; // @synthesize _disableOutsetShadowPath=__disableOutsetShadowPath;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGRect shadowContentsCenter; // @synthesize shadowContentsCenter=_shadowContentsCenter;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) double shadowExpansion; // @synthesize shadowExpansion=_shadowExpansion;
@property(nonatomic) double shadowVerticalOffset; // @synthesize shadowVerticalOffset=_shadowVerticalOffset;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowSize; // @synthesize shadowSize=_shadowSize;
@property(nonatomic, getter=isShadowEnabled) _Bool shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
- (struct CGPath *)_shadowPathForSize:(struct CGSize)arg1 radius:(double)arg2;	// IMP=0x00000000000f6c5a
- (void)_setShadowImageIfNeeded;	// IMP=0x00000000000f6b5f
- (void)_updateShadowLayer;	// IMP=0x00000000000f686f
- (void)_layoutShadow;	// IMP=0x00000000000f6575
- (void)layoutSubviews;	// IMP=0x00000000000f6360
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f61ca

@end

