//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UIPreviewActionItem-Protocol.h>
#import <UIKitCore/UIPreviewActionItem_Internal-Protocol.h>

@class NSArray, NSString, UIColor, UIImage;

@interface UIPreviewActionGroup : NSObject <UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem>
{
    NSString *_title;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    UIColor *_color;	// 32 = 0x20
    long long _style;	// 40 = 0x28
    NSArray *_actions;	// 48 = 0x30
}

+ (id)_actionGroupWithPreviewMenuItemWithSubactions:(id)arg1;	// IMP=0x000000000042c765
+ (id)_actionGroupWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 actions:(id)arg4;	// IMP=0x000000000042c473
+ (id)actionGroupWithTitle:(id)arg1 style:(long long)arg2 actions:(id)arg3;	// IMP=0x000000000042c3d6
- (void).cxx_destruct;	// IMP=0x000000000042cb39
@property(copy, nonatomic, getter=_actions, setter=_setActions:) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_effectiveImage;	// IMP=0x000000000042c6fe
- (id)_effectiveColor;	// IMP=0x000000000042c697
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000042c53b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

