//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@interface AWDHomeKitMessageLocation : PBCodable <NSCopying>
{
    double _accuracy;	// 8 = 0x8
    double _latitude;	// 16 = 0x10
    double _longitude;	// 24 = 0x18
    unsigned long long _timestamp;	// 32 = 0x20
    unsigned int _numOfReachableBTLEAcc;	// 40 = 0x28
    unsigned int _numOfReachableIPAcc;	// 44 = 0x2c
    struct {
        unsigned int accuracy:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int timestamp:1;
        unsigned int numOfReachableBTLEAcc:1;
        unsigned int numOfReachableIPAcc:1;
    } _has;	// 48 = 0x30
}

@property(nonatomic) unsigned int numOfReachableBTLEAcc; // @synthesize numOfReachableBTLEAcc=_numOfReachableBTLEAcc;
@property(nonatomic) unsigned int numOfReachableIPAcc; // @synthesize numOfReachableIPAcc=_numOfReachableIPAcc;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007f7dc
- (unsigned long long)hash;	// IMP=0x000000000007f448
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007f2de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007f1ef
- (void)copyTo:(id)arg1;	// IMP=0x000000000007f123
- (void)writeTo:(id)arg1;	// IMP=0x000000000007f02f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007f022
- (id)dictionaryRepresentation;	// IMP=0x000000000007edcb
- (id)description;	// IMP=0x000000000007ed1c
@property(nonatomic) _Bool hasNumOfReachableBTLEAcc;
@property(nonatomic) _Bool hasNumOfReachableIPAcc;
@property(nonatomic) _Bool hasAccuracy;
@property(nonatomic) _Bool hasLatitude;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasTimestamp;

@end

