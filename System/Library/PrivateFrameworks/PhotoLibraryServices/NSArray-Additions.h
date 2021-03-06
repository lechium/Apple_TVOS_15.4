//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (Additions)
- (unsigned long long)pl_indexOfLastObjectInRange:(struct _NSRange)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000030eda4
- (unsigned long long)pl_indexOfLastObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000030ed46
- (unsigned long long)pl_indexOfFirstObjectInRange:(struct _NSRange)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000030ebcd
- (unsigned long long)pl_indexOfFirstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000030eb6f
- (id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1;	// IMP=0x000000000030e80d
- (unsigned long long)pl_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000030e696
- (id)pl_shortDescription;	// IMP=0x000000000030e43e
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;	// IMP=0x0000000000420f6f
- (id)_pl_indexBy:(CDUnknownBlockType)arg1;	// IMP=0x0000000000420dac
- (id)_pl_groupBy:(CDUnknownBlockType)arg1;	// IMP=0x0000000000420b60
- (_Bool)_pl_any:(CDUnknownBlockType)arg1;	// IMP=0x0000000000420a26
- (id)_pl_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000004208d0
- (id)_pl_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x00000000004207f2
- (id)_pl_filter:(CDUnknownBlockType)arg1;	// IMP=0x000000000042072b
- (id)_pl_map:(CDUnknownBlockType)arg1;	// IMP=0x00000000004205c9
@end

