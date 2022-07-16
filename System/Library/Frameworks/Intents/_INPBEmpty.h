//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBEmpty-Protocol.h>

@class NSString;

@interface _INPBEmpty : PBCodable <_INPBEmpty, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002e0dcc
- (id)dictionaryRepresentation;	// IMP=0x00000000002e0cae
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e0c61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e0c2f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e0b9d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e0a9e
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e0a98
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e0a8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

