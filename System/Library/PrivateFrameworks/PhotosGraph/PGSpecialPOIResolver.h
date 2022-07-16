//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PGSpecialPOIResolver : NSObject
{
    NSArray *_momentNodes;	// 8 = 0x8
    NSMutableDictionary *_countBySpecialPOI;	// 16 = 0x10
}

+ (id)_nameBySpecialPOI;	// IMP=0x00000000004f07a4
+ (id)_regionsBySpecialPOI;	// IMP=0x00000000004f0774
+ (unsigned long long)specialPOIsWithNameInString:(id)arg1;	// IMP=0x00000000004f0668
+ (_Bool)specialPOINameIsInString:(id)arg1;	// IMP=0x00000000004f04da
+ (unsigned long long)specialPOIsContainingCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00000000004f03f5
+ (_Bool)specialPOIContainsCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00000000004f015b
- (void).cxx_destruct;	// IMP=0x00000000004efdcf
@property(retain, nonatomic) NSMutableDictionary *countBySpecialPOI; // @synthesize countBySpecialPOI=_countBySpecialPOI;
@property(readonly, nonatomic) NSArray *momentNodes; // @synthesize momentNodes=_momentNodes;
- (unsigned long long)_numberOfMomentsInRegions:(id)arg1 containingAOIName:(id)arg2;	// IMP=0x00000000004efae1
- (unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)arg1;	// IMP=0x00000000004ef96f
- (_Bool)anyMomentHasPOIAmusementPark;	// IMP=0x00000000004ef930
- (unsigned long long)specialPOIsWithMomentRatio:(double)arg1;	// IMP=0x00000000004ef8c8
- (unsigned long long)specialPOIsInAnyMoment;	// IMP=0x00000000004ef86a
- (_Bool)momentsContainSpecialPOI:(unsigned long long)arg1 withMomentRatio:(double)arg2;	// IMP=0x00000000004ef7e7
- (_Bool)anyMomentContainsSpecialPOI:(unsigned long long)arg1;	// IMP=0x00000000004ef7ce
- (id)initWithMomentNodes:(id)arg1;	// IMP=0x00000000004ef763

@end

