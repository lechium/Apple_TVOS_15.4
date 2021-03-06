//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitCharacteristicEvent : PBCodable <NSCopying>
{
    _Bool _containsValue;	// 8 = 0x8
    struct {
        unsigned int containsValue:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool containsValue; // @synthesize containsValue=_containsValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000285fbf
- (unsigned long long)hash;	// IMP=0x0000000000285f94
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000285ef2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000285e90
- (void)copyTo:(id)arg1;	// IMP=0x0000000000285e6c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000285e40
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000285e33
- (id)dictionaryRepresentation;	// IMP=0x0000000000285d9a
- (id)description;	// IMP=0x0000000000285ceb
@property(nonatomic) _Bool hasContainsValue;

@end

