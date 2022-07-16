//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, UIImage, UIView;

@interface UIAccessibilityHUDItem : NSObject <NSCopying>
{
    _Bool _disabledAppearance;	// 8 = 0x8
    _Bool _flattenImage;	// 9 = 0x9
    _Bool _scaleImage;	// 10 = 0xa
    long long _customUserInterfaceStyle;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    UIView *_customView;	// 40 = 0x28
    struct UIEdgeInsets _imageInsets;	// 48 = 0x30
}

+ (id)HUDItemForBarButtonItem:(id)arg1 atPoint:(struct CGPoint)arg2 inView:(id)arg3 isBackButton:(_Bool)arg4;	// IMP=0x0000000000012fc0
+ (id)HUDItemForTabBarItem:(id)arg1;	// IMP=0x0000000000012e6c
- (void).cxx_destruct;	// IMP=0x0000000000013828
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long customUserInterfaceStyle; // @synthesize customUserInterfaceStyle=_customUserInterfaceStyle;
@property(nonatomic) _Bool scaleImage; // @synthesize scaleImage=_scaleImage;
@property(nonatomic) _Bool flattenImage; // @synthesize flattenImage=_flattenImage;
@property(nonatomic) _Bool disabledAppearance; // @synthesize disabledAppearance=_disabledAppearance;
- (unsigned long long)hash;	// IMP=0x00000000000136b5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001341d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000132b8
- (id)initWithCustomView:(id)arg1;	// IMP=0x0000000000012e04
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3 scaleImage:(_Bool)arg4;	// IMP=0x0000000000012d1b
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000012c42

@end
