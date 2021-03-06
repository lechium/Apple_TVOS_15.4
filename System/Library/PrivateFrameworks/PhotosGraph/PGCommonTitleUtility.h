//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGCommonTitleUtility : NSObject
{
}

+ (unsigned long long)dimensionForLabel:(id)arg1;	// IMP=0x00000000001a31f0
+ (id)locationLabelForDimension:(unsigned long long)arg1;	// IMP=0x00000000001a307a
+ (id)titleWithLineBreakForTitle:(id)arg1;	// IMP=0x00000000001a2e2a
+ (id)titleWithLineBreakForTitle:(id)arg1 andUsedNames:(id)arg2;	// IMP=0x00000000001a2198
+ (id)titleWithNoLineBreakSpaceForTitle:(id)arg1 andUsedNames:(id)arg2;	// IMP=0x00000000001a1fdb
+ (struct _NSRange)_closestSpaceMatchFromMatches:(id)arg1 withUsedNameRange:(struct _NSRange)arg2 searchForward:(_Bool)arg3;	// IMP=0x00000000001a1ced
+ (void)startAndEndDateNodeFromDateNodes:(id)arg1 startDateNode:(id *)arg2 endDateNode:(id *)arg3;	// IMP=0x00000000001a19ef
+ (id)bestAddressNodeForMomentNodes:(id)arg1;	// IMP=0x00000000001a1774
+ (id)dateNodesFromMomentNodes:(id)arg1;	// IMP=0x00000000001a15b9
+ (id)holidayNameForDateNodes:(id)arg1;	// IMP=0x00000000001a12bb
+ (_Bool)containsCelebrationForDateNodes:(id)arg1 holidayName:(id *)arg2 titleGenerationContext:(id)arg3 graph:(id)arg4;	// IMP=0x00000000001a0cd2
+ (_Bool)isLargeCountryForAddressNode:(id)arg1 locationHelper:(id)arg2;	// IMP=0x00000000001a0c30
+ (id)addressNodesFromMomentNodes:(id)arg1;	// IMP=0x00000000001a0b25

@end

