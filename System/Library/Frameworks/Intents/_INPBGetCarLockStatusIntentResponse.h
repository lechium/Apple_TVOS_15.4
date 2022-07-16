//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGetCarLockStatusIntentResponse-Protocol.h>

@class NSString;

@interface _INPBGetCarLockStatusIntentResponse : PBCodable <_INPBGetCarLockStatusIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_b1e20226 _has;	// 8 = 0x8
    _Bool _locked;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bd5ab
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
- (id)dictionaryRepresentation;	// IMP=0x00000000000bd33f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bd232
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bd1c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bd12f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bd030
- (void)writeTo:(id)arg1;	// IMP=0x00000000000bcfe1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000bcfd4
@property(nonatomic) _Bool hasLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

