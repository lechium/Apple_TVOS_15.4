//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitBroadcastEventKeyGeneration : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _certified;	// 16 = 0x10
    int _reason;	// 20 = 0x14
    AWDHomeKitVendorInformation *_vendorDetails;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int reason:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000618ecd
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000618ddc
- (unsigned long long)hash;	// IMP=0x0000000000618d48
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000618c32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000618b61
- (void)copyTo:(id)arg1;	// IMP=0x0000000000618abd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000618a10
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000618a03
- (id)dictionaryRepresentation;	// IMP=0x0000000000618802
- (id)description;	// IMP=0x0000000000618753
- (int)StringAsCertified:(id)arg1;	// IMP=0x00000000006186c1
- (id)certifiedAsString:(int)arg1;	// IMP=0x000000000061865b
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
- (int)StringAsReason:(id)arg1;	// IMP=0x0000000000618556
- (id)reasonAsString:(int)arg1;	// IMP=0x00000000006184ef
@property(nonatomic) _Bool hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) _Bool hasVendorDetails;
@property(nonatomic) _Bool hasTimestamp;

@end

