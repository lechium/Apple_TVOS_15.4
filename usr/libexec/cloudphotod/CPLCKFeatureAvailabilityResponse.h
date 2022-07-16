//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface CPLCKFeatureAvailabilityResponse : PBCodable
{
    NSMutableArray *_features;	// 8 = 0x8
}

+ (Class)featuresType;	// IMP=0x002000000008db51
- (void).cxx_destruct;	// IMP=0x001000000008e5df
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008e485
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008e3ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008e20b
- (void)copyTo:(id)arg1;	// IMP=0x001000000008e144
- (void)writeTo:(id)arg1;	// IMP=0x001000000008e014
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008e007
- (id)dictionaryRepresentation;	// IMP=0x001000000008dc11
@property(readonly, copy) NSString *description;
- (id)featuresAtIndex:(unsigned long long)arg1;	// IMP=0x001000000008db34
- (unsigned long long)featuresCount;	// IMP=0x001000000008db17
- (void)addFeatures:(id)arg1;	// IMP=0x001000000008daad
- (void)clearFeatures;	// IMP=0x001000000008da90
- (void)substituteRecordTransports:(id)arg1;	// IMP=0x0010000000090b7f
- (id)extractRecordTransports;	// IMP=0x0010000000090b72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
