//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDModeConfiguration, NSArray, NSDate, NSString, NSUUID;

@interface DNDState : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_activeModeAssertionMetadata;	// 8 = 0x8
    NSString *_overrideModeIdentifier;	// 16 = 0x10
    unsigned long long _suppressionState;	// 24 = 0x18
    NSDate *_startDate;	// 32 = 0x20
    NSDate *_userVisibleTransitionDate;	// 40 = 0x28
    unsigned long long _userVisibleTransitionLifetimeType;	// 48 = 0x30
    DNDModeConfiguration *_activeModeConfiguration;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d9a5
- (void).cxx_destruct;	// IMP=0x000000000001dd63
@property(readonly, copy, nonatomic) DNDModeConfiguration *activeModeConfiguration; // @synthesize activeModeConfiguration=_activeModeConfiguration;
@property(readonly, nonatomic) unsigned long long userVisibleTransitionLifetimeType; // @synthesize userVisibleTransitionLifetimeType=_userVisibleTransitionLifetimeType;
@property(readonly, copy, nonatomic) NSDate *userVisibleTransitionDate; // @synthesize userVisibleTransitionDate=_userVisibleTransitionDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) unsigned long long suppressionState; // @synthesize suppressionState=_suppressionState;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001dbbd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d9ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d99a
- (id)description;	// IMP=0x000000000001d81c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d44c
- (unsigned long long)hash;	// IMP=0x000000000001d34e
- (void)setOverrideModeIdentifier:(id)arg1;	// IMP=0x000000000001d2f3
@property(readonly, copy, nonatomic) NSUUID *activeModeUUID; // @dynamic activeModeUUID;
@property(readonly, copy, nonatomic) NSString *activeModeIdentifier; // @dynamic activeModeIdentifier;
@property(readonly, copy, nonatomic) NSArray *activeModeIdentifiers; // @dynamic activeModeIdentifiers;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @dynamic active;
- (id)initWithSuppressionState:(unsigned long long)arg1 activeModeAssertionMetadata:(id)arg2 startDate:(id)arg3 userVisibleTransitionDate:(id)arg4 userVisibleTransitionLifetimeType:(unsigned long long)arg5 activeModeConfiguration:(id)arg6;	// IMP=0x000000000001ced1
@property(readonly, copy, nonatomic) NSArray *activeModeAssertionMetadata; // @dynamic activeModeAssertionMetadata;
@property(readonly, nonatomic) _Bool willSuppressInterruptions; // @dynamic willSuppressInterruptions;

@end

