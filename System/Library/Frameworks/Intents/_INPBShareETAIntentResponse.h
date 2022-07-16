//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBShareETAIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBShareETAIntentResponse : PBCodable <_INPBShareETAIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _mediums;	// 8 = 0x8
    struct _has;	// 32 = 0x20
    NSArray *_recipients;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000437c3b
+ (Class)recipientType;	// IMP=0x0000000000437c2a
- (void).cxx_destruct;	// IMP=0x00000000004378fd
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
- (id)dictionaryRepresentation;	// IMP=0x000000000043756f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000437393
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004372fe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000043726c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000043716d
- (void)dealloc;	// IMP=0x000000000043712f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000436fcd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000436fc0
- (id)recipientAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000436fa3
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipient:(id)arg1;	// IMP=0x0000000000436f0c
- (void)clearRecipients;	// IMP=0x0000000000436eef
- (int)StringAsMediums:(id)arg1;	// IMP=0x0000000000436e0c
- (id)mediumsAsString:(int)arg1;	// IMP=0x0000000000436d8d
- (int)mediumAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000436d79
@property(readonly, nonatomic) unsigned long long mediumsCount;
- (void)addMedium:(int)arg1;	// IMP=0x0000000000436d4b
- (void)clearMediums;	// IMP=0x0000000000436d3a
@property(readonly, nonatomic) int *mediums;
- (void)setMediums:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000436d12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

