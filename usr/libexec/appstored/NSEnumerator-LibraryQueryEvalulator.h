//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@interface NSEnumerator (LibraryQueryEvalulator)
@property(readonly) long long resultComplexity;
- (id)lib_filter:(id)arg1;	// IMP=0x001000000024be3f
- (id)lib_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x001000000024bde3
- (id)lib_mapAndFilterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000024bc14
- (id)lib_flatMapAndFilterUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000024b97d
- (id)lib_firstResultApplyingTransform:(CDUnknownBlockType)arg1;	// IMP=0x001000000024b81f
- (id)lib_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000024b6c9
- (void)lib_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000024b54e
- (id)lib_categorizeItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000024b298
@end

