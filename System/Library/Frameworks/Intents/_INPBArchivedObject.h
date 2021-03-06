//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBArchivedObject-Protocol.h>

@class NSData, NSString;

@interface _INPBArchivedObject : PBCodable <_INPBArchivedObject, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSData *_messageData;	// 8 = 0x8
    NSString *_typeName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002424f7
- (void).cxx_destruct;	// IMP=0x000000000024231f
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(copy, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002421e9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000241edf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000241e20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000241d8e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000241c8f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000241be1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000241bd4
@property(readonly, nonatomic) _Bool hasTypeName;
@property(readonly, nonatomic) _Bool hasMessageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

