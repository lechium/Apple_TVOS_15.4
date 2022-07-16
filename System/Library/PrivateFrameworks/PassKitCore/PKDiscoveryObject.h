//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKDiscoveryRelevantDateRange, PKHardwareVersionRange, PKOSVersionRequirementRange;

@interface PKDiscoveryObject : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    long long _version;	// 16 = 0x10
    NSString *_ruleIdentifier;	// 24 = 0x18
    NSString *_triggerRuleIdentifier;	// 32 = 0x20
    PKOSVersionRequirementRange *_osVersionRange;	// 40 = 0x28
    PKHardwareVersionRange *_hardwareVersionRange;	// 48 = 0x30
    PKDiscoveryRelevantDateRange *_relevantDateRange;	// 56 = 0x38
    long long _maxViewCount;	// 64 = 0x40
    long long _maxViewCountLargeCard;	// 72 = 0x48
    long long _status;	// 80 = 0x50
    long long _viewCount;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002701c2
- (void).cxx_destruct;	// IMP=0x0000000000270bfd
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long maxViewCountLargeCard; // @synthesize maxViewCountLargeCard=_maxViewCountLargeCard;
@property(nonatomic) long long maxViewCount; // @synthesize maxViewCount=_maxViewCount;
@property(retain, nonatomic) PKDiscoveryRelevantDateRange *relevantDateRange; // @synthesize relevantDateRange=_relevantDateRange;
@property(retain, nonatomic) PKHardwareVersionRange *hardwareVersionRange; // @synthesize hardwareVersionRange=_hardwareVersionRange;
@property(retain, nonatomic) PKOSVersionRequirementRange *osVersionRange; // @synthesize osVersionRange=_osVersionRange;
@property(copy, nonatomic) NSString *triggerRuleIdentifier; // @synthesize triggerRuleIdentifier=_triggerRuleIdentifier;
@property(copy, nonatomic) NSString *ruleIdentifier; // @synthesize ruleIdentifier=_ruleIdentifier;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000270828
- (unsigned long long)hash;	// IMP=0x0000000000270736
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000270634
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027050b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002702f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002701ca
- (void)incrementViewCount;	// IMP=0x00000000002701b8
- (_Bool)isValidForTime:(id)arg1;	// IMP=0x0000000000270199
- (void)updatedStatusForAction:(long long)arg1;	// IMP=0x000000000027005b
- (_Bool)hasTrigger;	// IMP=0x000000000027004d
- (_Bool)isTerminalStatus;	// IMP=0x0000000000270038
- (void)updateForRuleResult:(_Bool)arg1;	// IMP=0x0000000000270032
- (_Bool)updateWithDiscoveryObject:(id)arg1;	// IMP=0x000000000026fe25
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000026fb3c

@end
