//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPMutableSectionedCollection
{
}

- (void)replaceItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000612d6
- (void)replaceSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000611d8
- (void)removeAllObjects;	// IMP=0x000000000006119d
- (void)appendItems:(id)arg1;	// IMP=0x0000000000061073
- (void)appendItem:(id)arg1;	// IMP=0x0000000000060fd1
- (void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x0000000000060e62
- (void)replaceObjectAtIndexPath:(id)arg1 withObject:(id)arg2;	// IMP=0x0000000000060d99
- (void)removeItemAtIndexPath:(id)arg1;	// IMP=0x0000000000060ced
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000060c21
- (void)appendSection:(id)arg1;	// IMP=0x0000000000060bcc
- (void)replaceSectionAtIndex:(long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000060bb6
- (void)moveSectionFromIndex:(long long)arg1 toIndex:(long long)arg2;	// IMP=0x0000000000060b33
- (void)removeSectionAtIndex:(long long)arg1;	// IMP=0x0000000000060aba
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000060a1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000060810
- (void)_initializeAsEmptySectionedCollection;	// IMP=0x00000000000607cb

@end

