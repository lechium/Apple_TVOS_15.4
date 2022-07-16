//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class AWDHomeKitMessageLocation, NSMutableArray;

@interface AWDHomeKitMessageHomeLocationReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    AWDHomeKitMessageLocation *_nearestLOI;	// 16 = 0x10
    unsigned int _numIterationToConverge;	// 24 = 0x18
    NSMutableArray *_rawLocations;	// 32 = 0x20
    AWDHomeKitMessageLocation *_selectedHomeLocation;	// 40 = 0x28
    struct {
        unsigned int timestamp:1;
        unsigned int numIterationToConverge:1;
    } _has;	// 48 = 0x30
}

+ (Class)rawLocationsType;	// IMP=0x0000000000859024
- (void).cxx_destruct;	// IMP=0x0000000000858c98
@property(retain, nonatomic) AWDHomeKitMessageLocation *nearestLOI; // @synthesize nearestLOI=_nearestLOI;
@property(nonatomic) unsigned int numIterationToConverge; // @synthesize numIterationToConverge=_numIterationToConverge;
@property(retain, nonatomic) AWDHomeKitMessageLocation *selectedHomeLocation; // @synthesize selectedHomeLocation=_selectedHomeLocation;
@property(retain, nonatomic) NSMutableArray *rawLocations; // @synthesize rawLocations=_rawLocations;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000858a01
- (unsigned long long)hash;	// IMP=0x0000000000858942
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008587e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000085856b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000858421
- (void)writeTo:(id)arg1;	// IMP=0x0000000000858259
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000085824c
- (id)dictionaryRepresentation;	// IMP=0x0000000000857ebd
- (id)description;	// IMP=0x0000000000857e0e
@property(readonly, nonatomic) _Bool hasNearestLOI;
@property(nonatomic) _Bool hasNumIterationToConverge;
@property(readonly, nonatomic) _Bool hasSelectedHomeLocation;
- (id)rawLocationsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000857d7e
- (unsigned long long)rawLocationsCount;	// IMP=0x0000000000857d61
- (void)addRawLocations:(id)arg1;	// IMP=0x0000000000857cf7
- (void)clearRawLocations;	// IMP=0x0000000000857cda
@property(nonatomic) _Bool hasTimestamp;

@end
