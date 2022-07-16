//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIBarAppearanceChangeObserver-Protocol.h>

@class NSString, UIColor, UIImage, UITabBarAppearance, UITabBarButton, _UITabBarItemAppearanceStorage;

@interface UITabBarItem <_UIBarAppearanceChangeObserver>
{
    NSString *_title;	// 8 = 0x8
    SEL _action;	// 16 = 0x10
    id _target;	// 24 = 0x18
    UIImage *_templateImage;	// 32 = 0x20
    UIImage *_selectedTemplateImage;	// 40 = 0x28
    UIImage *_selectedImage;	// 48 = 0x30
    UIImage *_unselectedImage;	// 56 = 0x38
    struct UIEdgeInsets _imageInsets;	// 64 = 0x40
    UIImage *_landscapeTemplateImage;	// 96 = 0x60
    UIImage *_landscapeSelectedTemplateImage;	// 104 = 0x68
    UIImage *_landscapeSelectedImage;	// 112 = 0x70
    struct UIEdgeInsets _landscapeImageInsets;	// 120 = 0x78
    NSString *_badgeValue;	// 152 = 0x98
    UITabBarButton *_view;	// 160 = 0xa0
    _UITabBarItemAppearanceStorage *_appearanceStorage;	// 168 = 0xa8
    struct {
        unsigned int enabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
        unsigned int systemItem:7;
        unsigned int customSelectedImage:1;
        unsigned int customUnselectedImage:1;
    } _tabBarItemFlags;	// 176 = 0xb0
    _Bool _springLoaded;	// 180 = 0xb4
    struct UIOffset _badgeOffset;	// 184 = 0xb8
    _Bool __usesModernAppearance;	// 200 = 0xc8
    UITabBarAppearance *_scrollEdgeAppearance;	// 208 = 0xd0
    UITabBarAppearance *_standardAppearance;	// 216 = 0xd8
    long long __barMetrics;	// 224 = 0xe0
    long long __imageStyle;	// 232 = 0xe8
    UIColor *__tintColor;	// 240 = 0xf0
}

+ (id)_appearanceBlindViewClasses;	// IMP=0x00000000001eb097
- (void).cxx_destruct;	// IMP=0x00000000001eb7a2
@property(nonatomic, setter=_setUsesModernAppearance:) _Bool _usesModernAppearance; // @synthesize _usesModernAppearance=__usesModernAppearance;
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor; // @synthesize _tintColor=__tintColor;
@property(nonatomic, setter=_setImageStyle:) long long _imageStyle; // @synthesize _imageStyle=__imageStyle;
@property(nonatomic, setter=_setBarMetrics:) long long _barMetrics; // @synthesize _barMetrics=__barMetrics;
@property(copy, nonatomic) UITabBarAppearance *standardAppearance; // @synthesize standardAppearance=_standardAppearance;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(copy, nonatomic) UITabBarAppearance *scrollEdgeAppearance; // @synthesize scrollEdgeAppearance=_scrollEdgeAppearance;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;	// IMP=0x00000000001eb673
- (void)_updateView;	// IMP=0x00000000001eb65c
- (void)_updateViewAndPositionItems:(_Bool)arg1;	// IMP=0x00000000001eb566
- (id)_createViewForTabBar:(id)arg1 asProxyView:(_Bool)arg2;	// IMP=0x00000000001eb13c
- (void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3;	// IMP=0x00000000001eaf02
- (id)_internalLandscapeTemplateImage;	// IMP=0x00000000001eaeb2
- (void)_setInternalLandscapeTemplateImage:(id)arg1;	// IMP=0x00000000001eae03
- (id)_internalTemplateImage;	// IMP=0x00000000001eadb3
- (void)_setInternalTemplateImage:(id)arg1;	// IMP=0x00000000001ead04
- (id)_internalTitleForTabBarDisplayStyle:(long long)arg1;	// IMP=0x00000000001eaa6d
- (id)_internalTitle;	// IMP=0x00000000001eaa59
- (void)_setInternalTitle:(id)arg1;	// IMP=0x00000000001ea9db
- (SEL)action;	// IMP=0x00000000001ea9ca
- (void)setAction:(SEL)arg1;	// IMP=0x00000000001ea9b9
- (id)target;	// IMP=0x00000000001ea9a0
- (void)setTarget:(id)arg1;	// IMP=0x00000000001ea98c
- (id)unselectedImage;	// IMP=0x00000000001ea905
- (void)setUnselectedImage:(id)arg1;	// IMP=0x00000000001ea882
- (_Bool)animatedBadge;	// IMP=0x00000000001ea87a
- (void)setAnimatedBadge:(_Bool)arg1;	// IMP=0x00000000001ea874
- (id)view;	// IMP=0x00000000001ea85f
- (void)setView:(id)arg1;	// IMP=0x00000000001ea7b0
- (long long)systemItem;	// IMP=0x00000000001ea79a
- (_Bool)isSystemItem;	// IMP=0x00000000001ea785
- (id)badgeTextAttributesForState:(unsigned long long)arg1;	// IMP=0x00000000001ea768
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001ea5ae
@property(copy, nonatomic) UIColor *badgeColor;
@property(nonatomic) struct UIOffset titlePositionAdjustment;
- (id)titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x00000000001ea230
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001e9f57
- (id)resolvedTitle;	// IMP=0x00000000001e9f45
- (_Bool)hasTitle;	// IMP=0x00000000001e9f12
- (id)finishedUnselectedImage;	// IMP=0x00000000001e9eeb
- (id)finishedSelectedImage;	// IMP=0x00000000001e9ec4
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;	// IMP=0x00000000001e9dc7
@property(retain, nonatomic) UIImage *landscapeSelectedImagePhone;
@property(readonly, nonatomic) UIImage *_internalLandscapeSelectedImagePhone;
@property(retain, nonatomic) UIImage *selectedImage;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001e9a1c
- (struct UIEdgeInsets)largeContentSizeImageInsets;	// IMP=0x00000000001e99c9
- (void)setLargeContentSizeImage:(id)arg1;	// IMP=0x00000000001e998d
- (id)largeContentSizeImage;	// IMP=0x00000000001e993d
- (id)_internalLargeContentSizeImage;	// IMP=0x00000000001e992b
- (id)_internalLandscapeTemplateImages;	// IMP=0x00000000001e98b9
- (struct UIEdgeInsets)landscapeImagePhoneInsets;	// IMP=0x00000000001e9880
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001e97e4
- (struct UIEdgeInsets)imageInsets;	// IMP=0x00000000001e97ab
- (void)setImageInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001e9734
- (id)landscapeImagePhone;	// IMP=0x00000000001e970e
- (void)setLandscapeImagePhone:(id)arg1;	// IMP=0x00000000001e96b7
- (id)image;	// IMP=0x00000000001e9691
- (void)setImage:(id)arg1;	// IMP=0x00000000001e9670
- (id)title;	// IMP=0x00000000001e964a
- (void)setTitle:(id)arg1;	// IMP=0x00000000001e9629
- (_Bool)isEnabled;	// IMP=0x00000000001e9617
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000001e959e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e904c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e8cea
- (id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2;	// IMP=0x00000000001e8c83
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;	// IMP=0x00000000001e8bcd
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3;	// IMP=0x00000000001e8b29
- (id)init;	// IMP=0x00000000001e8ad8
- (id)_internalTemplateImagesForTabBarDisplayStyle:(long long)arg1;	// IMP=0x00000000001e88cf
- (id)_internalTemplateImages;	// IMP=0x00000000001e88bb
- (void)_updateToMatchCurrentState;	// IMP=0x00000000001e8877
@property(nonatomic) struct UIOffset landscapePhoneBadgeOffset;
@property(nonatomic) struct UIOffset badgeOffset;
- (void)_updateViewBadge;	// IMP=0x00000000001e87d1
- (void)_showSelectedIndicator:(_Bool)arg1 changeSelection:(_Bool)arg2;	// IMP=0x00000000001e87b4
@property(nonatomic, getter=_isSelected, setter=_setSelected:) _Bool _selected;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
