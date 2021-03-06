//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitBroadcastEventReceived : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _certified;	// 16 = 0x10
    AWDHomeKitVendorInformation *_vendorDetails;	// 24 = 0x18
    _Bool _isExpectedGSN;	// 32 = 0x20
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int isExpectedGSN:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000029d572
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) _Bool isExpectedGSN; // @synthesize isExpectedGSN=_isExpectedGSN;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000029d471
- (unsigned long long)hash;	// IMP=0x000000000029d3d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029d2ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029d1dc
- (void)copyTo:(id)arg1;	// IMP=0x000000000029d138
- (void)writeTo:(id)arg1;	// IMP=0x000000000029d08a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029d07d
- (id)dictionaryRepresentation;	// IMP=0x000000000029ceb5
- (id)description;	// IMP=0x000000000029ce06
- (int)StringAsCertified:(id)arg1;	// IMP=0x000000000029cd74
- (id)certifiedAsString:(int)arg1;	// IMP=0x000000000029cd0e
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) _Bool hasVendorDetails;
@property(nonatomic) _Bool hasIsExpectedGSN;
@property(nonatomic) _Bool hasTimestamp;

@end

