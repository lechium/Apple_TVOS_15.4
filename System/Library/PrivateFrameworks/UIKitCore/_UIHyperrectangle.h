//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIHyperregion-Protocol.h>
#import <UIKitCore/_UIHyperregion_Internal-Protocol.h>

@class NSString;

@interface _UIHyperrectangle : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying>
{
    double *__maximumPoint;	// 8 = 0x8
    double *__minimumPoint;	// 16 = 0x10
    unsigned long long __dimensions;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffectingSelf;	// IMP=0x000000000021ef21
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021eaa0
@property(readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021ede9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021ec6e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021ebf5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021eaa8
- (void)_closestPoint:(double *)arg1 toPoint:(const double *)arg2;	// IMP=0x000000000021ea35
- (void)_mutateMaximumPoint:(CDUnknownBlockType)arg1;	// IMP=0x000000000021e9c4
- (void)_mutateMinimumPoint:(CDUnknownBlockType)arg1;	// IMP=0x000000000021e953
@property(readonly, nonatomic) const double *_maximumPoint;
@property(readonly, nonatomic) const double *_minimumPoint;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000021e852
- (id)initWithDimensions:(unsigned long long)arg1;	// IMP=0x000000000021e7e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

