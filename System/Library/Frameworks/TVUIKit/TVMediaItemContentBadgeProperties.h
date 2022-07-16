//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVUIKit/BSDebugDescriptionProviding-Protocol.h>
#import <TVUIKit/BSDescriptionProviding-Protocol.h>
#import <TVUIKit/NSCopying-Protocol.h>
#import <TVUIKit/NSSecureCoding-Protocol.h>

@class NSString, UIColor, UIFont;

@interface TVMediaItemContentBadgeProperties : NSObject <BSDescriptionProviding, BSDebugDescriptionProviding, NSCopying, NSSecureCoding>
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIFont *_font;	// 16 = 0x10
    UIColor *_color;	// 24 = 0x18
    long long _transform;	// 32 = 0x20
}

+ (id)liveContentBadgeProperties;	// IMP=0x0000000000041584
+ (id)defaultBadgeProperties;	// IMP=0x0000000000041572
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000040b55
- (void).cxx_destruct;	// IMP=0x000000000004170e
@property(nonatomic) long long transform; // @synthesize transform=_transform;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)_transformText:(id)arg1;	// IMP=0x0000000000041652
- (id)debugDescriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000413a9
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000041359
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000041258
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000041208
- (id)succinctDescriptionBuilder;	// IMP=0x000000000004112f
- (id)succinctDescription;	// IMP=0x00000000000410df
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040e41
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040d1e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000040c85
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000040b5d
- (id)init;	// IMP=0x0000000000040a6e
- (id)initWithBadgeProperties:(id)arg1;	// IMP=0x0000000000040948

// Remaining properties
@property(readonly) Class superclass;

@end

