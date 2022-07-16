//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDeleteFilePermanentlyIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBDeleteFilePermanentlyIntent : PBCodable <_INPBDeleteFilePermanentlyIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a4f55
- (void).cxx_destruct;	// IMP=0x00000000001a4d95
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x00000000001a4ce9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a4b4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a4ac8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a4a36
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a4937
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a48b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a48a3
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

