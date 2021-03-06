//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MSVMutableSectionedCollection
{
}

- (void)replaceItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002864c
- (void)replaceSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002854e
- (void)removeAllObjects;	// IMP=0x0000000000028513
- (void)appendItems:(id)arg1;	// IMP=0x00000000000283e9
- (void)appendItem:(id)arg1;	// IMP=0x0000000000028347
- (void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x00000000000281d8
- (void)replaceObjectAtIndexPath:(id)arg1 withObject:(id)arg2;	// IMP=0x000000000002810f
- (void)removeItemAtIndexPath:(id)arg1;	// IMP=0x0000000000028063
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000027f97
- (void)appendSection:(id)arg1;	// IMP=0x0000000000027f42
- (void)replaceSectionAtIndex:(long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000027f2c
- (void)moveSectionFromIndex:(long long)arg1 toIndex:(long long)arg2;	// IMP=0x0000000000027ea9
- (void)removeSectionAtIndex:(long long)arg1;	// IMP=0x0000000000027e30
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000027d94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027b76
- (void)_initializeAsEmptySectionedCollection;	// IMP=0x0000000000027b31

@end

