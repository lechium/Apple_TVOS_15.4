//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface MLProbabilityDictionary : NSMutableDictionary
{
    struct vector<double, std::allocator<double>> _values;	// 8 = 0x8
}

+ (id)probabilityDictionaryForLabels:(id)arg1;	// IMP=0x000000000015c3ad
- (id).cxx_construct;	// IMP=0x000000000015c38d
- (void).cxx_destruct;	// IMP=0x000000000015c369
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000015c33a
- (id)classLabelOfMaxProbability:(id)arg1;	// IMP=0x000000000015c28d
- (void)replaceDoubleVectorWith:(const double *)arg1;	// IMP=0x000000000015c1a4

@end

