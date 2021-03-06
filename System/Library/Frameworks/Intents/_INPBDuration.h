//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDuration-Protocol.h>

@class NSString;

@interface _INPBDuration : PBCodable <_INPBDuration, NSSecureCoding, NSCopying>
{
    CDStruct_85a1ec51 _has;	// 8 = 0x8
    int _nanos;	// 12 = 0xc
    long long _seconds;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000125b61
@property(nonatomic) long long seconds; // @synthesize seconds=_seconds;
@property(nonatomic) int nanos; // @synthesize nanos=_nanos;
- (id)dictionaryRepresentation;	// IMP=0x00000000001257fb
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000125658
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001255b7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000125525
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000125426
- (void)writeTo:(id)arg1;	// IMP=0x00000000001253ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012539f
@property(nonatomic) _Bool hasSeconds;
@property(nonatomic) _Bool hasNanos;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

