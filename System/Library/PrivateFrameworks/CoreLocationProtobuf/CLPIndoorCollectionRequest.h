//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSMutableArray;

@interface CLPIndoorCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_bundleIds;	// 8 = 0x8
    NSMutableArray *_indoorCMAttitudes;	// 16 = 0x10
    NSMutableArray *_indoorCMPedometers;	// 24 = 0x18
    NSMutableArray *_indoorLocations;	// 32 = 0x20
    NSMutableArray *_indoorMotionActivitys;	// 40 = 0x28
    NSMutableArray *_indoorPressures;	// 48 = 0x30
    NSMutableArray *_indoorWifis;	// 56 = 0x38
    CLPMeta *_meta;	// 64 = 0x40
}

+ (Class)bundleIdType;	// IMP=0x0000000000024d3d
+ (Class)indoorPressureType;	// IMP=0x0000000000024c6b
+ (Class)indoorMotionActivityType;	// IMP=0x0000000000024b99
+ (Class)indoorCMPedometerType;	// IMP=0x0000000000024ac7
+ (Class)indoorCMAttitudeType;	// IMP=0x00000000000249f5
+ (Class)indoorLocationsType;	// IMP=0x0000000000024923
+ (Class)indoorWifisType;	// IMP=0x0000000000024851
- (void).cxx_destruct;	// IMP=0x0000000000028029
@property(retain, nonatomic) NSMutableArray *bundleIds; // @synthesize bundleIds=_bundleIds;
@property(retain, nonatomic) NSMutableArray *indoorPressures; // @synthesize indoorPressures=_indoorPressures;
@property(retain, nonatomic) NSMutableArray *indoorMotionActivitys; // @synthesize indoorMotionActivitys=_indoorMotionActivitys;
@property(retain, nonatomic) NSMutableArray *indoorCMPedometers; // @synthesize indoorCMPedometers=_indoorCMPedometers;
@property(retain, nonatomic) NSMutableArray *indoorCMAttitudes; // @synthesize indoorCMAttitudes=_indoorCMAttitudes;
@property(retain, nonatomic) NSMutableArray *indoorLocations; // @synthesize indoorLocations=_indoorLocations;
@property(retain, nonatomic) NSMutableArray *indoorWifis; // @synthesize indoorWifis=_indoorWifis;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000277d2
- (unsigned long long)hash;	// IMP=0x00000000000276e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000274e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026c0c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000267b1
- (Class)responseClass;	// IMP=0x00000000000267a0
- (unsigned int)requestTypeCode;	// IMP=0x0000000000026795
- (void)writeTo:(id)arg1;	// IMP=0x0000000000026132
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000026125
- (id)dictionaryRepresentation;	// IMP=0x0000000000024dfd
- (id)description;	// IMP=0x0000000000024d4e
- (id)bundleIdAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024d20
- (unsigned long long)bundleIdsCount;	// IMP=0x0000000000024d03
- (void)addBundleId:(id)arg1;	// IMP=0x0000000000024c99
- (void)clearBundleIds;	// IMP=0x0000000000024c7c
- (id)indoorPressureAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024c4e
- (unsigned long long)indoorPressuresCount;	// IMP=0x0000000000024c31
- (void)addIndoorPressure:(id)arg1;	// IMP=0x0000000000024bc7
- (void)clearIndoorPressures;	// IMP=0x0000000000024baa
- (id)indoorMotionActivityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024b7c
- (unsigned long long)indoorMotionActivitysCount;	// IMP=0x0000000000024b5f
- (void)addIndoorMotionActivity:(id)arg1;	// IMP=0x0000000000024af5
- (void)clearIndoorMotionActivitys;	// IMP=0x0000000000024ad8
- (id)indoorCMPedometerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024aaa
- (unsigned long long)indoorCMPedometersCount;	// IMP=0x0000000000024a8d
- (void)addIndoorCMPedometer:(id)arg1;	// IMP=0x0000000000024a23
- (void)clearIndoorCMPedometers;	// IMP=0x0000000000024a06
- (id)indoorCMAttitudeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000249d8
- (unsigned long long)indoorCMAttitudesCount;	// IMP=0x00000000000249bb
- (void)addIndoorCMAttitude:(id)arg1;	// IMP=0x0000000000024951
- (void)clearIndoorCMAttitudes;	// IMP=0x0000000000024934
- (id)indoorLocationsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024906
- (unsigned long long)indoorLocationsCount;	// IMP=0x00000000000248e9
- (void)addIndoorLocations:(id)arg1;	// IMP=0x000000000002487f
- (void)clearIndoorLocations;	// IMP=0x0000000000024862
- (id)indoorWifisAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024834
- (unsigned long long)indoorWifisCount;	// IMP=0x0000000000024817
- (void)addIndoorWifis:(id)arg1;	// IMP=0x00000000000247ad
- (void)clearIndoorWifis;	// IMP=0x0000000000024790

@end
