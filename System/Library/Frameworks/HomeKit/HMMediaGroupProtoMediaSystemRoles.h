//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class NSString;

@interface HMMediaGroupProtoMediaSystemRoles : PBCodable <NSCopying>
{
    NSString *_leftDestinationIdentifier;	// 8 = 0x8
    NSString *_rightDestinationIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000031ec0
@property(retain, nonatomic) NSString *rightDestinationIdentifier; // @synthesize rightDestinationIdentifier=_rightDestinationIdentifier;
@property(retain, nonatomic) NSString *leftDestinationIdentifier; // @synthesize leftDestinationIdentifier=_leftDestinationIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000031e13
- (unsigned long long)hash;	// IMP=0x0000000000031dc6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000031cfe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000031c60
- (void)copyTo:(id)arg1;	// IMP=0x0000000000031bfd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000031ba0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000031b93
- (id)dictionaryRepresentation;	// IMP=0x0000000000031b10
- (id)description;	// IMP=0x0000000000031a61
@property(readonly, nonatomic) _Bool hasRightDestinationIdentifier;
@property(readonly, nonatomic) _Bool hasLeftDestinationIdentifier;

@end

