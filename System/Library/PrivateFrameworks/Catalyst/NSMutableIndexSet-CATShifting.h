//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableIndexSet.h>

@interface NSMutableIndexSet (CATShifting)
- (void)cat_moveIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x000000000004a46a
- (void)cat_shiftAndRemoveIndexesInRange:(struct _NSRange)arg1;	// IMP=0x000000000004a422
- (void)cat_shiftAndRemoveIndex:(unsigned long long)arg1;	// IMP=0x000000000004a40b
- (void)cat_shiftAndAddIndexesInRange:(struct _NSRange)arg1;	// IMP=0x000000000004a3c9
- (void)cat_shiftAndAddIndex:(unsigned long long)arg1;	// IMP=0x000000000004a3b2
@end

