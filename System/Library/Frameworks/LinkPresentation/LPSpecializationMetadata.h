//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>
#import <LinkPresentation/NSSecureCoding-Protocol.h>

@interface LPSpecializationMetadata : NSObject <NSSecureCoding, NSCopying>
{
    _Bool __dummyPropertyForObservation;	// 8 = 0x8
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;	// IMP=0x000000000000f117
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000f0cc
@property(readonly, nonatomic) _Bool _dummyPropertyForObservation; // @synthesize _dummyPropertyForObservation=__dummyPropertyForObservation;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f111
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f109
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f103
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f0d4

@end

