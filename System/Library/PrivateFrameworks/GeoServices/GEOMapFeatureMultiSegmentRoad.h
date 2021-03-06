//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface GEOMapFeatureMultiSegmentRoad
{
    NSArray *_roadSegments;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000010c0304
@property(readonly, nonatomic) NSArray *roadSegments; // @synthesize roadSegments=_roadSegments;
- (id)coordinatesDescription;	// IMP=0x00000000010c0071
- (id)debugDescription;	// IMP=0x00000000010bfd46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010bfcf8
- (id)_junctionB;	// IMP=0x00000000010bfbfd
- (id)_junctionA;	// IMP=0x00000000010bfaff
- (id)endFeature;	// IMP=0x00000000010bfa59
- (id)startFeature;	// IMP=0x00000000010bf9b3
- (id)feature;	// IMP=0x00000000010bf944
- (struct _GEOTileKey)tileKey;	// IMP=0x00000000010bf8d2
- (CDStruct_39925896 *)coordinates3d;	// IMP=0x00000000010bf332
- (unsigned long long)roadID;	// IMP=0x00000000010bf2a0
- (id)initWithRoadSegments:(id)arg1;	// IMP=0x00000000010bf21e

@end

