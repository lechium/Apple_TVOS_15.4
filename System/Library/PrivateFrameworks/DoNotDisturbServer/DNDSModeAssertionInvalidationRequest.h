//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModernAssertionSourceResolution-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>

@class DNDModeAssertionInvalidationDetails, DNDModeAssertionSource, DNDSModeAssertionInvalidationPredicate, NSDate, NSString, NSUUID;

@interface DNDSModeAssertionInvalidationRequest : NSObject <DNDSModernAssertionSourceResolution, NSCopying>
{
    NSUUID *_UUID;	// 8 = 0x8
    DNDSModeAssertionInvalidationPredicate *_predicate;	// 16 = 0x10
    NSDate *_requestDate;	// 24 = 0x18
    DNDModeAssertionInvalidationDetails *_details;	// 32 = 0x20
    DNDModeAssertionSource *_source;	// 40 = 0x28
    unsigned long long _reason;	// 48 = 0x30
    unsigned long long _reasonOverride;	// 56 = 0x38
}

+ (id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(unsigned long long)arg5 reasonOverride:(unsigned long long)arg6;	// IMP=0x000000000000a257
+ (id)requestWithPredicate:(id)arg1 requestDate:(id)arg2 source:(id)arg3 reason:(unsigned long long)arg4;	// IMP=0x000000000000a17d
- (void).cxx_destruct;	// IMP=0x000000000000acef
@property(readonly, nonatomic) unsigned long long reasonOverride; // @synthesize reasonOverride=_reasonOverride;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) DNDModeAssertionSource *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) DNDModeAssertionInvalidationDetails *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(readonly, copy, nonatomic) DNDSModeAssertionInvalidationPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ac9e
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a5d1
@property(readonly) unsigned long long hash;
- (id)initWithUUID:(id)arg1 predicate:(id)arg2 requestDate:(id)arg3 details:(id)arg4 source:(id)arg5 reason:(unsigned long long)arg6 reasonOverride:(unsigned long long)arg7;	// IMP=0x000000000000a344
- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;	// IMP=0x0000000000008b2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
