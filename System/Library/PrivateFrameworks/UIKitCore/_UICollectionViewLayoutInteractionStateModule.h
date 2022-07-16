//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionViewLayoutInteractionStateProviding-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, UICollectionViewLayout;
@protocol _UICollectionViewLayoutInteractionStateModuleHost;

__attribute__((visibility("hidden")))
@interface _UICollectionViewLayoutInteractionStateModule : NSObject <_UICollectionViewLayoutInteractionStateProviding>
{
    NSMutableSet *_indexPathsWithBackgroundFillForInteraction;	// 8 = 0x8
    NSMutableDictionary *_processingCellsMap;	// 16 = 0x10
    Class _invalidationContextClass;	// 24 = 0x18
    UICollectionViewLayout<_UICollectionViewLayoutInteractionStateModuleHost> *_host;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000010e525d
@property(nonatomic) __weak UICollectionViewLayout<_UICollectionViewLayoutInteractionStateModuleHost> *host; // @synthesize host=_host;
@property(readonly, nonatomic) Class invalidationContextClass; // @synthesize invalidationContextClass=_invalidationContextClass;
- (id)_cellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000010e50fd
- (void)_noteCellDidFinishProcessingAtIndexPath:(id)arg1;	// IMP=0x00000000010e50e7
- (void)_noteCellWillBeginProcessing:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000010e4f63
- (_Bool)enumerateSectionsAfterSectionIndex:(long long)arg1 enumerator:(CDUnknownBlockType)arg2;	// IMP=0x00000000010e4c56
- (_Bool)_shouldAdjustLayoutToDrawTopSeparatorInSection:(long long)arg1;	// IMP=0x00000000010e4af5
- (_Bool)itemAtIndexPathIsBeingReordered:(id)arg1;	// IMP=0x00000000010e4a6c
- (_Bool)itemAtIndexPathIsHighlighted:(id)arg1;	// IMP=0x00000000010e49cc
- (_Bool)itemAtIndexPathIsSelected:(id)arg1;	// IMP=0x00000000010e492c
- (unsigned long long)selectionGroupingForItemAtIndexPath:(id)arg1;	// IMP=0x00000000010e413b
- (_Bool)_itemIsSelectedOrHighlightedAndHasBackgroundFillForGroupingAtIndexPath:(id)arg1 cellGroupingPreference:(out long long *)arg2 backgroundIsInset:(out _Bool *)arg3;	// IMP=0x00000000010e3bed
- (void)performPreferredAttributesProcessingBlock:(CDUnknownBlockType)arg1 withLayoutAttributes:(id)arg2 forView:(id)arg3;	// IMP=0x00000000010e3b07
- (void)processLayoutInvalidationWithContext:(id)arg1;	// IMP=0x00000000010e3aca
- (id)initWithHost:(id)arg1;	// IMP=0x00000000010e399c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
