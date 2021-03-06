//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class HMMediaGroupProtoJoinedMediaDestination, HMMediaGroupProtoMediaDestinationControllerData;

@interface HMMediaGroupProtoJoinedMediaParticipantData : PBCodable <NSCopying>
{
    HMMediaGroupProtoJoinedMediaDestination *_destination;	// 8 = 0x8
    HMMediaGroupProtoMediaDestinationControllerData *_destinationController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000245717
@property(retain, nonatomic) HMMediaGroupProtoMediaDestinationControllerData *destinationController; // @synthesize destinationController=_destinationController;
@property(retain, nonatomic) HMMediaGroupProtoJoinedMediaDestination *destination; // @synthesize destination=_destination;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000024563c
- (unsigned long long)hash;	// IMP=0x00000000002455ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000245527
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000245489
- (void)copyTo:(id)arg1;	// IMP=0x0000000000245426
- (void)writeTo:(id)arg1;	// IMP=0x00000000002453c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002453bc
- (id)dictionaryRepresentation;	// IMP=0x00000000002452e7
- (id)description;	// IMP=0x0000000000245238
@property(readonly, nonatomic) _Bool hasDestinationController;
@property(readonly, nonatomic) _Bool hasDestination;

@end

