//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchCallHistoryIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBSearchCallHistoryIntentResponse : PBCodable <_INPBSearchCallHistoryIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_callRecords;	// 8 = 0x8
    NSString *_dateCreated;	// 16 = 0x10
    NSString *_status;	// 24 = 0x18
    NSString *_targetContact;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b1795
+ (Class)callRecordsType;	// IMP=0x00000000000b1784
- (void).cxx_destruct;	// IMP=0x00000000000b14d8
@property(copy, nonatomic) NSString *targetContact; // @synthesize targetContact=_targetContact;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(copy, nonatomic) NSArray *callRecords; // @synthesize callRecords=_callRecords;
- (id)dictionaryRepresentation;	// IMP=0x00000000000b1131
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b0bf1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b0ac6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b0a34
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b0935
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b072e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b0721
@property(readonly, nonatomic) _Bool hasTargetContact;
@property(readonly, nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasDateCreated;
- (id)callRecordsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b0629
@property(readonly, nonatomic) unsigned long long callRecordsCount;
- (void)addCallRecords:(id)arg1;	// IMP=0x00000000000b0592
- (void)clearCallRecords;	// IMP=0x00000000000b0575

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

