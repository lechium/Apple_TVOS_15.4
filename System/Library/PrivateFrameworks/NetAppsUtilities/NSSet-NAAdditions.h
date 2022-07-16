//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (NAAdditions)
+ (id)na_setWithSafeObject:(id)arg1;	// IMP=0x0000000000016728
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016929
- (id)na_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016766
- (id)na_setByDiffingWithSet:(id)arg1;	// IMP=0x000000000001665a
- (id)na_setByRemovingObjectsFromSet:(id)arg1;	// IMP=0x00000000000165f4
- (id)na_setByIntersectingWithSet:(id)arg1;	// IMP=0x000000000001658e
- (id)na_setByFlattening;	// IMP=0x0000000000016454
- (void)na_each:(CDUnknownBlockType)arg1;	// IMP=0x00000000000163b5
- (_Bool)na_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000001629e
- (_Bool)na_all:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016168
- (_Bool)na_any:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016051
- (id)na_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015ee4
- (id)na_filter:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015e35
- (id)na_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015c73
- (id)na_map:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015b36
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;	// IMP=0x000000000001599a
- (_Bool)na_safeContainsObject:(id)arg1;	// IMP=0x000000000001597f
@end
