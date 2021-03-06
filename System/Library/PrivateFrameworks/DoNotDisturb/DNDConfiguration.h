//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDMutableSenderConfiguration, DNDSenderConfiguration, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface DNDConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _type;	// 8 = 0x8
    unsigned long long _suppressionType;	// 16 = 0x10
    NSMutableDictionary *_allowedApplicationIdentifiers;	// 24 = 0x18
    NSMutableSet *_deniedApplicationIdentifiers;	// 32 = 0x20
    DNDMutableSenderConfiguration *_senderConfiguration;	// 40 = 0x28
    unsigned long long _minimumBreakthroughUrgency;	// 48 = 0x30
    unsigned long long _hideApplicationBadges;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008090
+ (unsigned long long)defaultMinimumBreakthroughUrgency;	// IMP=0x0000000000006acd
+ (unsigned long long)defaultSuppressionType;	// IMP=0x0000000000006ac2
+ (unsigned long long)defaultConfigurationType;	// IMP=0x0000000000006aba
- (void).cxx_destruct;	// IMP=0x0000000000008a12
@property(readonly, nonatomic) unsigned long long hideApplicationBadges; // @synthesize hideApplicationBadges=_hideApplicationBadges;
@property(readonly, nonatomic) unsigned long long minimumBreakthroughUrgency; // @synthesize minimumBreakthroughUrgency=_minimumBreakthroughUrgency;
@property(readonly, copy, nonatomic) DNDSenderConfiguration *senderConfiguration; // @synthesize senderConfiguration=_senderConfiguration;
@property(readonly, copy, nonatomic) NSSet *deniedApplicationIdentifiers; // @synthesize deniedApplicationIdentifiers=_deniedApplicationIdentifiers;
@property(readonly, copy, nonatomic) NSDictionary *allowedApplicationIdentifiers; // @synthesize allowedApplicationIdentifiers=_allowedApplicationIdentifiers;
@property(readonly, nonatomic) unsigned long long suppressionType; // @synthesize suppressionType=_suppressionType;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)exceptionForContactHandle:(id)arg1;	// IMP=0x0000000000008751
- (unsigned long long)exceptionForContact:(id)arg1;	// IMP=0x000000000000873f
- (unsigned long long)_exceptionForApplicationIdentifier:(id)arg1 thread:(id)arg2;	// IMP=0x0000000000008559
- (unsigned long long)exceptionForApplicationIdentifier:(id)arg1 thread:(id)arg2;	// IMP=0x0000000000008547
- (unsigned long long)exceptionForApplicationIdentifier:(id)arg1;	// IMP=0x0000000000008533
- (unsigned long long)exceptionForApplication:(id)arg1 thread:(id)arg2;	// IMP=0x000000000000849a
- (unsigned long long)exceptionForApplication:(id)arg1;	// IMP=0x000000000000841a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008342
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008098
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008040
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008035
- (void)diffAgainstObject:(id)arg1 usingDiffBuilder:(id)arg2 withDescription:(id)arg3;	// IMP=0x0000000000007c08
- (void)log:(id)arg1 withPrefix:(id)arg2;	// IMP=0x00000000000076e5
- (id)_descriptionForRedacted:(_Bool)arg1;	// IMP=0x0000000000007585
- (id)redactedDescription;	// IMP=0x000000000000756e
- (id)description;	// IMP=0x000000000000755a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000719a
- (unsigned long long)hash;	// IMP=0x000000000000708c
@property(readonly, copy, nonatomic) NSSet *deniedApplications;
@property(readonly, copy, nonatomic) NSDictionary *allowedApplications;
- (id)_initWithConfigurationType:(unsigned long long)arg1 suppressionType:(unsigned long long)arg2 allowedApplicationIdentifiers:(id)arg3 deniedApplicationIdentifiers:(id)arg4 senderConfiguration:(id)arg5 minimumBreakthroughUrgency:(unsigned long long)arg6 hideApplicationBadges:(unsigned long long)arg7;	// IMP=0x0000000000006b44
- (id)_initWithConfigurationType:(unsigned long long)arg1;	// IMP=0x0000000000006ad5

@end

