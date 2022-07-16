//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/NSSecureCoding-Protocol.h>

@class GEOFeatureStyleAttributes;
@protocol VKCustomFeatureDataSource;

@interface VKCustomFeature : NSObject <NSSecureCoding>
{
    struct shared_ptr<md::LabelExternalFeature> _feature;	// 8 = 0x8
    id <VKCustomFeatureDataSource> _dataSource;	// 24 = 0x18
    _Bool _isGlobalFeature;	// 32 = 0x20
    struct _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        GEOFeatureStyleAttributes *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _featureStyleAttributesPtr;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000046f9fa
- (id).cxx_construct;	// IMP=0x0000000000470536
- (void).cxx_destruct;	// IMP=0x00000000004704e1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000046fe3b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000046fa02
- (void)setBuildingFaceAzimuth:(float)arg1;	// IMP=0x000000000046f9a9
- (void)setBuildingHeight:(float)arg1;	// IMP=0x000000000046f958
- (void)setPlaceholderIconWithSize:(struct CGSize)arg1 anchorPoint:(struct CGPoint)arg2 isRound:(_Bool)arg3;	// IMP=0x000000000046f6af
- (void)setAnnotationText:(id)arg1 locale:(id)arg2;	// IMP=0x000000000046f5dd
- (short)venueFloorOrdinal;	// IMP=0x000000000046f5a1
- (void)setVenueFloorOrdinal:(short)arg1;	// IMP=0x000000000046f55d
- (unsigned long long)venueComponentID;	// IMP=0x000000000046f522
- (void)setVenueComponentID:(unsigned long long)arg1;	// IMP=0x000000000046f4df
- (unsigned long long)venueLevelID;	// IMP=0x000000000046f4a4
- (void)setVenueLevelID:(unsigned long long)arg1;	// IMP=0x000000000046f461
- (unsigned long long)venueBuildingID;	// IMP=0x000000000046f426
- (void)setVenueBuildingID:(unsigned long long)arg1;	// IMP=0x000000000046f3e3
- (unsigned long long)venueID;	// IMP=0x000000000046f3a8
- (void)setVenueID:(unsigned long long)arg1;	// IMP=0x000000000046f365
- (unsigned long long)businessID;	// IMP=0x000000000046f32d
- (void)setBusinessID:(unsigned long long)arg1;	// IMP=0x000000000046f2ed
- (_Bool)isInjectedFeature;	// IMP=0x000000000046f2dc
- (void *)feature;	// IMP=0x000000000046f2d2
- (void)setText:(id)arg1 locale:(id)arg2;	// IMP=0x000000000046f224
- (void)setTextDisplayMode:(unsigned char)arg1;	// IMP=0x000000000046f20b
- (void)setSortKey:(int)arg1;	// IMP=0x000000000046f1fe
- (void)setMaxZoom:(float)arg1;	// IMP=0x000000000046f1ef
- (void)setMinZoom:(float)arg1;	// IMP=0x000000000046f1e0
- (id)styleAttributes;	// IMP=0x000000000046f1d6
- (void)setStyleAttributes:(id)arg1;	// IMP=0x000000000046f0f7
- (unsigned long long)featureID;	// IMP=0x000000000046f0e9
- (void)setFeatureID:(unsigned long long)arg1;	// IMP=0x000000000046f0db
- (id)dataSource;	// IMP=0x000000000046f0d1
- (void)setDataSource:(id)arg1;	// IMP=0x000000000046f0c7
- (id)initLineWithCoordinates:(const CDStruct_071ac149 *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000046ed9d
- (id)_initInternalFeatureWithCoordinate:(CDStruct_071ac149)arg1;	// IMP=0x000000000046ed89
- (id)init;	// IMP=0x000000000046ed52
- (id)initWithCoordinate3D:(CDStruct_071ac149)arg1;	// IMP=0x000000000046ed3b
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000046ecf2
- (id)_initWithCoordinate:(CDStruct_071ac149)arg1 isInjected:(_Bool)arg2;	// IMP=0x000000000046eb52
- (void *)lineFeature;	// IMP=0x000000000046eb3e
- (void *)pointFeature;	// IMP=0x000000000046eb2a
- (_Bool)isGlobalFeature;	// IMP=0x000000000046eb21
- (_Bool)isLineFeature;	// IMP=0x000000000046eb10
- (_Bool)isPointFeature;	// IMP=0x000000000046eaff

@end
