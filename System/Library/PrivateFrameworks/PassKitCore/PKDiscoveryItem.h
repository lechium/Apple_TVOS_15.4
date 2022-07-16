//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSURL;

@interface PKDiscoveryItem <NSSecureCoding, NSCopying>
{
    _Bool _shouldBadge;	// 8 = 0x8
    _Bool _entitledToForceLargeCard;	// 9 = 0x9
    _Bool _hitMaxLargeViewCount;	// 10 = 0xa
    long long _type;	// 16 = 0x10
    NSURL *_layoutBundleURL;	// 24 = 0x18
    NSArray *_supportedLocalizations;	// 32 = 0x20
    long long _priority;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009dea0
- (void).cxx_destruct;	// IMP=0x000000000009e58c
@property(nonatomic, getter=hasHitMaxLargeViewCount) _Bool hitMaxLargeViewCount; // @synthesize hitMaxLargeViewCount=_hitMaxLargeViewCount;
@property(nonatomic) _Bool entitledToForceLargeCard; // @synthesize entitledToForceLargeCard=_entitledToForceLargeCard;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool shouldBadge; // @synthesize shouldBadge=_shouldBadge;
@property(retain, nonatomic) NSArray *supportedLocalizations; // @synthesize supportedLocalizations=_supportedLocalizations;
@property(copy, nonatomic) NSURL *layoutBundleURL; // @synthesize layoutBundleURL=_layoutBundleURL;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x000000000009e298
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009e1b3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009dfe3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009dea8
- (_Bool)isTerminalStatus;	// IMP=0x000000000009de30
- (void)updateWithDiscoveryItem:(id)arg1;	// IMP=0x000000000009dd02
- (void)updateForRuleResult:(_Bool)arg1;	// IMP=0x000000000009db36
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000009d964

@end

