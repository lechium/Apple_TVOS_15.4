//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNContactSubsetCalculator : NSObject
{
}

+ (_Bool)_isLabel:(id)arg1 subsumableIntoLabel:(id)arg2 equivalencies:(id)arg3;	// IMP=0x00000000000a9dee
+ (_Bool)_isLabeledValue:(id)arg1 availableInLabeledValues:(id)arg2 claimedIndices:(id)arg3 forMultiValueProperty:(id)arg4;	// IMP=0x00000000000a9a1d
+ (_Bool)isContact:(id)arg1 subsetOfContact:(id)arg2 forMultiValueProperty:(id)arg3;	// IMP=0x00000000000a980b
+ (_Bool)isContact:(id)arg1 subsetOfContact:(id)arg2 forSingleValueProperty:(id)arg3;	// IMP=0x00000000000a96c0
+ (_Bool)isContact:(id)arg1 subsetOfContact:(id)arg2 ignoringProperties:(id)arg3;	// IMP=0x00000000000a92ac

@end
