//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/NSCopying-Protocol.h>
#import <CloudKitDistributedSync/NSSecureCoding-Protocol.h>

@class CKDistributedTimestampClockVector, CKDistributedTimestampStateVector, NSString;

@interface CKAtomBatchMetadata : NSObject <NSCopying, NSSecureCoding>
{
    CKDistributedTimestampClockVector *_previousVector;	// 8 = 0x8
    CKDistributedTimestampStateVector *_contentsVector;	// 16 = 0x10
    CKDistributedTimestampStateVector *_removalsVector;	// 24 = 0x18
    CKDistributedTimestampClockVector *_dependenciesVector;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000dc1b6
+ (id)replacementBatchMetadatasForBatchDirectory:(id)arg1 withMergeableValuePreviousStateVector:(id)arg2 currentStateVector:(id)arg3;	// IMP=0x00000000000cf384
- (void).cxx_destruct;	// IMP=0x00000000000dd530
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) CKDistributedTimestampClockVector *dependenciesVector; // @synthesize dependenciesVector=_dependenciesVector;
@property(readonly, nonatomic) CKDistributedTimestampStateVector *removalsVector; // @synthesize removalsVector=_removalsVector;
@property(readonly, nonatomic) CKDistributedTimestampStateVector *contentsVector; // @synthesize contentsVector=_contentsVector;
@property(readonly, nonatomic) CKDistributedTimestampClockVector *previousVector; // @synthesize previousVector=_previousVector;
- (_Bool)_validate:(id *)arg1;	// IMP=0x00000000000dcea4
- (id)descriptionWithStringSiteIdentifiers;	// IMP=0x00000000000dcc97
- (id)description;	// IMP=0x00000000000dcb19
- (unsigned long long)hash;	// IMP=0x00000000000dc9f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dc548
- (_Bool)isEqualToBatchMetadata:(id)arg1;	// IMP=0x00000000000dc536
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dc3e2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dc1be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dc0a3
- (id)initWithIdentifier:(id)arg1 previousStateVector:(id)arg2 currentStateVector:(id)arg3;	// IMP=0x00000000000dbf32
- (id)initWithIdentifier:(id)arg1 previousVector:(id)arg2 contentsVector:(id)arg3 removalsVector:(id)arg4 dependenciesVector:(id)arg5;	// IMP=0x00000000000dbc99
- (id)initWithPreviousStateVector:(id)arg1 currentStateVector:(id)arg2;	// IMP=0x00000000000dbbe0

@end

