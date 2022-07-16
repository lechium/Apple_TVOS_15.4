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

@interface _UIHypersphere : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>
{
    double *__center;	// 8 = 0x8
    unsigned long long __dimensions;	// 16 = 0x10
    double __radius;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffectingSelf;	// IMP=0x000000000021f54b
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021f1dd
@property(nonatomic, setter=_setRadius:) double _radius; // @synthesize _radius=__radius;
@property(readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021f427
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021f320
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021f2aa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021f1e5
- (void)_closestPoint:(double *)arg1 toPoint:(const double *)arg2;	// IMP=0x000000000021f14f
- (void)_mutateCenter:(CDUnknownBlockType)arg1;	// IMP=0x000000000021f073
@property(readonly, nonatomic) const double *_center;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000021efaf
- (id)initWithDimensions:(unsigned long long)arg1;	// IMP=0x000000000021ef57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

