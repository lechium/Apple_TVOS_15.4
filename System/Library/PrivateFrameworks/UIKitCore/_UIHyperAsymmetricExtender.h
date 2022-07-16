//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIHyperExtender-Protocol.h>
#import <UIKitCore/_UIHyperExtender_Internal-Protocol.h>

@class NSString;

@interface _UIHyperAsymmetricExtender : NSObject <_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying>
{
    double *__extentBeyondMinimum;	// 8 = 0x8
    double *__extentBeyondMaximum;	// 16 = 0x10
    double *__temp;	// 24 = 0x18
    unsigned long long __dimensions;	// 32 = 0x20
}

+ (id)keyPathsForValuesAffectingSelf;	// IMP=0x000000000064846b
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000647f39
@property(readonly, nonatomic) unsigned long long _dimensions; // @synthesize _dimensions=__dimensions;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000648333
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006481b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000064813f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000647f41
- (void)_getExtentVector:(double *)arg1 forUnconstrainedPoint:(const double *)arg2 closestPoint:(const double *)arg3;	// IMP=0x0000000000647df2
- (void)_mutateExtentBeyondMaximum:(CDUnknownBlockType)arg1;	// IMP=0x0000000000647cfc
@property(readonly, nonatomic) const double *_extentBeyondMaximum;
- (void)_mutateExtentBeyondMinimum:(CDUnknownBlockType)arg1;	// IMP=0x0000000000647bfc
@property(readonly, nonatomic) const double *_extentBeyondMinimum;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000647afc
- (id)initWithDimensions:(unsigned long long)arg1;	// IMP=0x0000000000647a48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
