//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIHyperregion_Internal-Protocol.h>

@class NSString;
@protocol _UIHyperregion;

@interface _UIAlignmentRegion : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>
{
    unsigned long long __dimensions;	// 8 = 0x8
    id <_UIHyperregion> __region;	// 16 = 0x10
    double __maximumDistance;	// 24 = 0x18
    double *__temp;	// 32 = 0x20
}

+ (id)keyPathsForValuesAffectingSelf;	// IMP=0x0000000000222b1a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000222650
- (void).cxx_destruct;	// IMP=0x0000000000222bc5
@property(readonly, nonatomic) double *_temp; // @synthesize _temp=__temp;
@property(nonatomic, setter=_setMaximumDistance:) double _maximumDistance; // @synthesize _maximumDistance=__maximumDistance;
@property(retain, nonatomic, setter=_setRegion:) id <_UIHyperregion> _region; // @synthesize _region=__region;
@property(readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000222962
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002227d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000222743
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000222658
- (_Bool)_isBoundaryCrossedFromPoint:(const double *)arg1 toPoint:(const double *)arg2;	// IMP=0x000000000022255a
- (void)_closestPoint:(double *)arg1 toPoint:(const double *)arg2;	// IMP=0x0000000000222548
- (_Bool)_isAlignedForClosestPoint:(double *)arg1 toPoint:(const double *)arg2;	// IMP=0x0000000000222472
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000222267
- (id)initWithDimensions:(unsigned long long)arg1;	// IMP=0x0000000000222201

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

