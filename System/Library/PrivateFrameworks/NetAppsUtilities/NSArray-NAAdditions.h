//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (NAAdditions)
+ (id)na_arrayWithTerminator:(id)arg1 nullableObjects:(id)arg2;	// IMP=0x000000000000eea0
+ (id)na_arrayWithSafeObject:(id)arg1;	// IMP=0x000000000000ee62
+ (id)na_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000edca
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x000000000000eb81
- (id)na_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e9be
- (id)na_arrayByFlattening;	// IMP=0x000000000000e884
- (void)na_each:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e7e5
- (_Bool)na_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e6ce
- (_Bool)na_all:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e598
- (_Bool)na_any:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e481
- (id)na_filter:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e3ab
- (id)na_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e1e9
- (id)na_map:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e027
- (id)na_arrayWithResultsOfBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000def4
- (id)na_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dd87
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dbeb
- (_Bool)na_safeContainsObject:(id)arg1;	// IMP=0x000000000000dbd0
@end
