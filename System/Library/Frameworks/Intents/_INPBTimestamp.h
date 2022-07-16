//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTimestamp-Protocol.h>

@class NSString;

@interface _INPBTimestamp : PBCodable <_INPBTimestamp, NSSecureCoding, NSCopying>
{
    CDStruct_85a1ec51 _has;	// 8 = 0x8
    int _nanos;	// 12 = 0xc
    long long _seconds;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000120075
@property(nonatomic) long long seconds; // @synthesize seconds=_seconds;
@property(nonatomic) int nanos; // @synthesize nanos=_nanos;
- (id)dictionaryRepresentation;	// IMP=0x000000000011fd0f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011fb6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011facb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011fa39
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011f93a
- (void)writeTo:(id)arg1;	// IMP=0x000000000011f8c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011f8b3
@property(nonatomic) _Bool hasSeconds;
@property(nonatomic) _Bool hasNanos;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

