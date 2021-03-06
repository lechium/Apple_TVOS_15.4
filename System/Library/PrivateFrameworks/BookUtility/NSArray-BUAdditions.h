//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (BUAdditions)
- (id)bu_prettyDescription;	// IMP=0x0000000000026ba3
- (id)bu_dictionaryUsingPropertyAsKey:(id)arg1;	// IMP=0x000000000002697b
- (id)bu_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x00000000000268d0
- (id)bu_arrayByRemovingItemsWithDuplicateValuesForKey:(id)arg1;	// IMP=0x00000000000266b6
- (id)bu_arrayByRemovingDuplicates;	// IMP=0x000000000002665c
- (id)bu_arrayByInvokingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026503
- (id)bu_arrayByRemovingNSNulls;	// IMP=0x00000000000264ef
- (id)bu_arrayByRemovingNSNullsInvokingBlockForNulls:(CDUnknownBlockType)arg1;	// IMP=0x000000000002638f
- (CDUnknownBlockType)bu_sortDescriptorComparator;	// IMP=0x000000000002619e
- (id)arrayOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000002613f
- (id)objectsMatching:(CDUnknownBlockType)arg1;	// IMP=0x0000000000025f78
- (_Bool)containsLocalizedStringCaseInsensitive:(id)arg1;	// IMP=0x0000000000025e26
- (_Bool)containsStringCaseInsensitive:(id)arg1;	// IMP=0x0000000000025cd4
- (id)imReversedArray;	// IMP=0x0000000000025b64
- (long long)indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000025973
@end

