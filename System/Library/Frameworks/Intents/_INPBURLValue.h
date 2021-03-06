//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBURLValue-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@interface _INPBURLValue : PBCodable <_INPBURLValue, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSString *_absoluteString;	// 8 = 0x8
    NSData *_scope;	// 16 = 0x10
    _INPBValueMetadata *_valueMetadata;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000033da46
- (void).cxx_destruct;	// IMP=0x000000000033d7f2
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(copy, nonatomic) NSData *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *absoluteString; // @synthesize absoluteString=_absoluteString;
- (id)dictionaryRepresentation;	// IMP=0x000000000033d642
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033d1e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033d0fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000033d06a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000033cf6b
- (void)writeTo:(id)arg1;	// IMP=0x000000000033ce62
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000033ce55
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(readonly, nonatomic) _Bool hasScope;
@property(readonly, nonatomic) _Bool hasAbsoluteString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

