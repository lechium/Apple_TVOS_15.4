//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconServices/ISImageDescriptor-Protocol.h>
#import <IconServices/NSCopying-Protocol.h>
#import <IconServices/NSSecureCoding-Protocol.h>

@class IFColor, NSString, NSUUID;

@interface ISImageDescriptor : NSObject <NSSecureCoding, ISImageDescriptor, NSCopying>
{
    struct CGSize _size;	// 8 = 0x8
    double _scale;	// 24 = 0x18
    unsigned long long _variantOptions;	// 32 = 0x20
    unsigned long long _badgeOptions;	// 40 = 0x28
    unsigned long long _backgroundStyle;	// 48 = 0x30
    _Bool _preferExtendedColorResources;	// 56 = 0x38
    _Bool _ignoreCache;	// 57 = 0x39
    NSString *_preferedResourceName;	// 64 = 0x40
    unsigned long long _languageDirection;	// 72 = 0x48
    IFColor *_tintColor;	// 80 = 0x50
}

+ (id)imageDescriptorWithIconVariant:(int)arg1 options:(int)arg2;	// IMP=0x000000000002fa01
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002f9f9
+ (id)imageDescriptorNamed:(id)arg1;	// IMP=0x0000000000030575
+ (id)icnsImageDescriptors;	// IMP=0x0000000000030b0c
- (void).cxx_destruct;	// IMP=0x000000000003054d
@property _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property _Bool preferExtendedColorResources; // @synthesize preferExtendedColorResources=_preferExtendedColorResources;
@property(retain, nonatomic) IFColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned long long badgeOptions; // @synthesize badgeOptions=_badgeOptions;
@property unsigned long long languageDirection; // @synthesize languageDirection=_languageDirection;
@property(retain) NSString *preferedResourceName; // @synthesize preferedResourceName=_preferedResourceName;
@property(nonatomic) unsigned long long variantOptions; // @synthesize variantOptions=_variantOptions;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy) NSString *description;
@property(readonly) NSUUID *digest; // @dynamic digest;
@property(readonly) double sanitizedScale;
@property(readonly) struct CGSize sanitizedSize;
@property(nonatomic) _Bool drawBadge;
@property(nonatomic) _Bool drawBorder;
@property(nonatomic) _Bool shouldApplyMask;
@property(readonly, nonatomic) double continuousCornerRadius;
@property(nonatomic) unsigned long long shape;
@property(nonatomic) _Bool selectedVariant;
@property(nonatomic) _Bool templateVariant;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002feed
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002fde9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002fc85
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000002fbf5
- (id)init;	// IMP=0x000000000002fbb3
- (id)_recipe;	// IMP=0x000000000002eefc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

