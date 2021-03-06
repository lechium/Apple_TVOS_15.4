//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class UITabBarAppearance, UITabBarItemStateAppearance, _UITabBarItemData;

@interface UITabBarItemAppearance : NSObject <NSCopying, NSSecureCoding>
{
    UITabBarItemStateAppearance *_states[5];	// 8 = 0x8
    _UITabBarItemData *_data;	// 48 = 0x30
    UITabBarAppearance *_owningAppearance;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002d3345
- (void).cxx_destruct;	// IMP=0x00000000002d378a
@property(nonatomic, setter=_setOwningAppearance:) __weak UITabBarAppearance *_owningAppearance; // @synthesize _owningAppearance;
@property(retain, nonatomic, setter=_setData:) _UITabBarItemData *_data; // @synthesize _data;
- (void)configureWithDefaultForStyle:(long long)arg1;	// IMP=0x00000000002d36c9
@property(readonly, nonatomic) UITabBarItemStateAppearance *focused;
@property(readonly, nonatomic) UITabBarItemStateAppearance *disabled;
@property(readonly, nonatomic) UITabBarItemStateAppearance *selected;
@property(readonly, nonatomic) UITabBarItemStateAppearance *highlighted;
@property(readonly, nonatomic) UITabBarItemStateAppearance *normal;
- (id)_proxyForState:(long long)arg1;	// IMP=0x00000000002d35fe
- (void)_writeToStorage:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d355e
- (void)_updateDataTo:(id)arg1;	// IMP=0x00000000002d34c8
- (void)_describeInto:(id)arg1;	// IMP=0x00000000002d34b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d3440
- (unsigned long long)hash;	// IMP=0x00000000002d342a
- (id)description;	// IMP=0x00000000002d33ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d337c
- (id)copy;	// IMP=0x00000000002d334d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002d332d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002d32a9
- (id)initWithTabBarItemAppearance:(id)arg1;	// IMP=0x00000000002d3293
- (id)_initWithTabBarItemData:(id)arg1;	// IMP=0x00000000002d3236
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000002d31cb
- (id)init;	// IMP=0x00000000002d31b7
- (void)dealloc;	// IMP=0x00000000002d3154

@end

