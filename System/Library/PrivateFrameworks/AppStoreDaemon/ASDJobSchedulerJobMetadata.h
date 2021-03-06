//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSError, NSNumber, NSString;

@interface ASDJobSchedulerJobMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSNumber *_externalPriority;	// 24 = 0x18
    NSNumber *_itemID;	// 32 = 0x20
    NSString *_jobState;	// 40 = 0x28
    NSString *_jobType;	// 48 = 0x30
    NSError *_lastError;	// 56 = 0x38
    NSNumber *_lastSoftFailureTimestamp;	// 64 = 0x40
    NSNumber *_priority;	// 72 = 0x48
    NSNumber *_priorityBucket;	// 80 = 0x50
    NSString *_skippedReason;	// 88 = 0x58
    long long _softFailureCount;	// 96 = 0x60
    NSNumber *_softFailureTimeout;	// 104 = 0x68
    NSNumber *_timestamp;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005b136
- (void).cxx_destruct;	// IMP=0x000000000005b81e
@property(copy) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy) NSNumber *softFailureTimeout; // @synthesize softFailureTimeout=_softFailureTimeout;
@property(nonatomic) long long softFailureCount; // @synthesize softFailureCount=_softFailureCount;
@property(copy) NSString *skippedReason; // @synthesize skippedReason=_skippedReason;
@property(copy) NSNumber *priorityBucket; // @synthesize priorityBucket=_priorityBucket;
@property(copy) NSNumber *priority; // @synthesize priority=_priority;
@property(copy) NSNumber *lastSoftFailureTimestamp; // @synthesize lastSoftFailureTimestamp=_lastSoftFailureTimestamp;
@property(copy) NSError *lastError; // @synthesize lastError=_lastError;
@property(copy) NSString *jobType; // @synthesize jobType=_jobType;
@property(copy) NSString *jobState; // @synthesize jobState=_jobState;
@property(copy) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy) NSNumber *externalPriority; // @synthesize externalPriority=_externalPriority;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)description;	// IMP=0x000000000005b5cb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005b449
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005b13e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005af89

@end

