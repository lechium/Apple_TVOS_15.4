//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HMMediaGroupProtoMediaDestinationAggregateData : PBCodable <NSCopying>
{
    NSMutableArray *_destinationControllerDatas;	// 8 = 0x8
    NSMutableArray *_destinations;	// 16 = 0x10
    NSMutableArray *_groups;	// 24 = 0x18
}

+ (Class)groupType;	// IMP=0x00000000000b2148
+ (Class)destinationControllerDataType;	// IMP=0x00000000000b2137
+ (Class)destinationType;	// IMP=0x00000000000b2126
- (void).cxx_destruct;	// IMP=0x00000000000b1e90
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSMutableArray *destinationControllerDatas; // @synthesize destinationControllerDatas=_destinationControllerDatas;
@property(retain, nonatomic) NSMutableArray *destinations; // @synthesize destinations=_destinations;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000b1aef
- (unsigned long long)hash;	// IMP=0x00000000000b1a82
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b198a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b1555
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b1364
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b107d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b1070
- (id)dictionaryRepresentation;	// IMP=0x00000000000b0ab7
- (id)description;	// IMP=0x00000000000b0a08
- (id)groupAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b09eb
- (unsigned long long)groupsCount;	// IMP=0x00000000000b09ce
- (void)addGroup:(id)arg1;	// IMP=0x00000000000b0964
- (void)clearGroups;	// IMP=0x00000000000b0947
- (id)destinationControllerDataAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b092a
- (unsigned long long)destinationControllerDatasCount;	// IMP=0x00000000000b090d
- (void)addDestinationControllerData:(id)arg1;	// IMP=0x00000000000b08a3
- (void)clearDestinationControllerDatas;	// IMP=0x00000000000b0886
- (id)destinationAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b0869
- (unsigned long long)destinationsCount;	// IMP=0x00000000000b084c
- (void)addDestination:(id)arg1;	// IMP=0x00000000000b07e2
- (void)clearDestinations;	// IMP=0x00000000000b07c5

@end
