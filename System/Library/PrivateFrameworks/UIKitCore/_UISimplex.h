//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIHyperregion_Internal-Protocol.h>

@class NSArray, NSString;

@interface _UISimplex : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>
{
    double *__points;	// 8 = 0x8
    struct {
        unsigned int metadata:1;
    } _clean;	// 16 = 0x10
    int __cggetriWorkspaceSize;	// 20 = 0x14
    unsigned long long __dimensions;	// 24 = 0x18
    unsigned long long __pointCount;	// 32 = 0x20
    double *__projection;	// 40 = 0x28
    unsigned long long __missingNormalCount;	// 48 = 0x30
    double *__missingNormals;	// 56 = 0x38
    double *__facetNormals;	// 64 = 0x40
    double *__facetNormalOffsets;	// 72 = 0x48
    double *__incenter;	// 80 = 0x50
    NSArray *__facets;	// 88 = 0x58
    double *__cggetriWorkspace;	// 96 = 0x60
    double *__temp;	// 104 = 0x68
}

+ (id)keyPathsForValuesAffectingSelf;	// IMP=0x000000000022215a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000221d58
- (void).cxx_destruct;	// IMP=0x00000000002221f1
@property(readonly, nonatomic) double *_temp; // @synthesize _temp=__temp;
@property(readonly, nonatomic) double *_cggetriWorkspace; // @synthesize _cggetriWorkspace=__cggetriWorkspace;
@property(readonly, nonatomic) int _cggetriWorkspaceSize; // @synthesize _cggetriWorkspaceSize=__cggetriWorkspaceSize;
@property(readonly, nonatomic) NSArray *_facets; // @synthesize _facets=__facets;
@property(readonly, nonatomic) double *_incenter; // @synthesize _incenter=__incenter;
@property(readonly, nonatomic) double *_facetNormalOffsets; // @synthesize _facetNormalOffsets=__facetNormalOffsets;
@property(readonly, nonatomic) double *_facetNormals; // @synthesize _facetNormals=__facetNormals;
@property(readonly, nonatomic) double *_missingNormals; // @synthesize _missingNormals=__missingNormals;
@property(readonly, nonatomic) unsigned long long _missingNormalCount; // @synthesize _missingNormalCount=__missingNormalCount;
@property(readonly, nonatomic) double *_projection; // @synthesize _projection=__projection;
@property(readonly, nonatomic) unsigned long long _pointCount; // @synthesize _pointCount=__pointCount;
@property(readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000222032
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000221f10
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000221e96
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000221d60
- (void)_closestPoint:(double *)arg1 toPoint:(const double *)arg2;	// IMP=0x0000000000221b00
- (void)_mutatePoints:(CDUnknownBlockType)arg1;	// IMP=0x0000000000221a8a
@property(readonly, nonatomic) const double *_points;
- (void)_recomputeMetadata;	// IMP=0x00000000002215da
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000002214eb
- (id)initWithDimensions:(unsigned long long)arg1 pointCount:(unsigned long long)arg2;	// IMP=0x000000000022129b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

