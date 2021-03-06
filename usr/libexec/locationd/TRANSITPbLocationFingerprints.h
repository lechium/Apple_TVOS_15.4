//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface TRANSITPbLocationFingerprints : PBCodable
{
    NSMutableArray *_locationFingerprints;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *locationFingerprints; // @synthesize locationFingerprints=_locationFingerprints;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000002db0dc
- (unsigned long long)hash;	// IMP=0x00100000002db0bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002db05b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002daeb9
- (void)copyTo:(id)arg1;	// IMP=0x00100000002dae22
- (void)writeTo:(id)arg1;	// IMP=0x00100000002dad1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000002dad0f
- (id)dictionaryRepresentation;	// IMP=0x00100000002da967
- (id)description;	// IMP=0x00100000002da8f0
- (id)locationFingerprintAtIndex:(unsigned long long)arg1;	// IMP=0x00100000002da8d3
- (unsigned long long)locationFingerprintsCount;	// IMP=0x00100000002da8b6
- (void)addLocationFingerprint:(id)arg1;	// IMP=0x00100000002da869
- (void)clearLocationFingerprints;	// IMP=0x00100000002da84c
- (void)dealloc;	// IMP=0x00100000002da80c

@end

