//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@interface PKProtobufPaymentSetupFeature : PBCodable <NSCopying>
{
    unsigned long long _state;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    struct {
        unsigned int state:1;
        unsigned int type:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f9a63
- (unsigned long long)hash;	// IMP=0x00000000001f9a1e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f996b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f98ea
- (void)copyTo:(id)arg1;	// IMP=0x00000000001f988c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f9819
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f980c
- (id)dictionaryRepresentation;	// IMP=0x00000000001f9497
- (id)description;	// IMP=0x00000000001f93e8
@property(nonatomic) _Bool hasState;
@property(nonatomic) _Bool hasType;

@end

