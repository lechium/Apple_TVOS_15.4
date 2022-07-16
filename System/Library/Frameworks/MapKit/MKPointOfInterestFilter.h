//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class NSSet;

@interface MKPointOfInterestFilter : NSObject <NSSecureCoding, NSCopying>
{
    NSSet *_includedCategories;	// 8 = 0x8
    NSSet *_excludedCategories;	// 16 = 0x10
}

+ (id)filterExcludingAllCategories;	// IMP=0x0000000000082f03
+ (id)filterIncludingAllCategories;	// IMP=0x0000000000082ed2
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000082eca
- (void).cxx_destruct;	// IMP=0x0000000000083e1f
- (id)description;	// IMP=0x0000000000083d23
- (_Bool)_excludesAllCategories;	// IMP=0x0000000000083cf6
- (_Bool)_includesAllCategories;	// IMP=0x0000000000083cc9
- (id)_geoPOICategoryFilter;	// IMP=0x000000000008348b
- (_Bool)excludesCategory:(id)arg1;	// IMP=0x0000000000083426
- (_Bool)includesCategory:(id)arg1;	// IMP=0x00000000000833c1
- (_Bool)isEqualToPointOfInterestFilter:(id)arg1;	// IMP=0x000000000008334c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000832ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000832a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000083243
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008312c
- (id)initIncludingCategories:(id)arg1 excludingCategories:(id)arg2;	// IMP=0x0000000000083051
- (id)initExcludingCategories:(id)arg1;	// IMP=0x0000000000082fcf
- (id)initIncludingCategories:(id)arg1;	// IMP=0x0000000000082f4d
- (id)init;	// IMP=0x0000000000082f34

@end
