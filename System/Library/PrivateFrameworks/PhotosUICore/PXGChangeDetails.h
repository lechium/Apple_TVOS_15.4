//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>

@class NSIndexSet, NSString, PXArrayChangeDetails;

@interface PXGChangeDetails : NSObject <NSCopying, PXGDiagnosticsProvider>
{
    unsigned int *_nextSpriteIndexByPreviousSpriteIndex;	// 8 = 0x8
    long long _nextSpriteIndexByPreviousSpriteIndexCapacity;	// 16 = 0x10
    NSIndexSet *_spriteIndexesThatWereRemoved;	// 24 = 0x18
    NSIndexSet *_spriteIndexesThatWereInserted;	// 32 = 0x20
    NSIndexSet *_spriteIndexesThatWereModified;	// 40 = 0x28
    _Bool _hasMoves;	// 48 = 0x30
    char *_tempBuffer;	// 56 = 0x38
    long long _tempBufferCapacity;	// 64 = 0x40
    PXArrayChangeDetails *_cachedArrayChangeDetails;	// 72 = 0x48
    unsigned int _numberOfSpritesAfterChange;	// 80 = 0x50
    unsigned int _numberOfSpritesBeforeChange;	// 84 = 0x54
    long long _layoutVersionBeforeChange;	// 88 = 0x58
    long long _layoutVersionAfterChange;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000841b30
@property(nonatomic) long long layoutVersionAfterChange; // @synthesize layoutVersionAfterChange=_layoutVersionAfterChange;
@property(nonatomic) long long layoutVersionBeforeChange; // @synthesize layoutVersionBeforeChange=_layoutVersionBeforeChange;
@property(readonly, nonatomic) unsigned int numberOfSpritesBeforeChange; // @synthesize numberOfSpritesBeforeChange=_numberOfSpritesBeforeChange;
@property(readonly, nonatomic) unsigned int numberOfSpritesAfterChange; // @synthesize numberOfSpritesAfterChange=_numberOfSpritesAfterChange;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008417ac
@property(readonly, nonatomic) PXArrayChangeDetails *arrayChangeDetails;
- (void)_invalidateCachedArrayChangeDetails;	// IMP=0x0000000000841515
- (void)applyToDictionary:(id)arg1 removalHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000084140d
- (void)applyToArray:(void *)arg1 elementSize:(unsigned long long)arg2 countAfterChanges:(unsigned long long)arg3 insertionHandler:(CDUnknownBlockType)arg4 modifiedHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000084118f
- (void)applyToSpriteIndexes:(unsigned int *)arg1 atIndexes:(id)arg2;	// IMP=0x0000000000841100
- (id)indexSetAfterApplyingChangeDetails:(id)arg1;	// IMP=0x0000000000840fb3
@property(readonly, nonatomic) const unsigned int *spriteIndexAfterChangeBySpriteIndexBeforeChange;
@property(readonly, nonatomic) NSIndexSet *modifiedSpriteIndexes;
@property(readonly, nonatomic) NSIndexSet *insertedSpriteIndexes;
@property(readonly, nonatomic) NSIndexSet *removedSpriteIndexes;
@property(readonly, nonatomic) _Bool hasAnyInsertionsRemovalsOrMoves;
- (void)_resizeStorageIfNeeded;	// IMP=0x0000000000840ebf
- (void)_invalidateLayoutVersions;	// IMP=0x0000000000840eb2
@property(readonly, nonatomic) PXGChangeDetails *inverse;
- (void)applySpriteTransferMap:(const unsigned int *)arg1;	// IMP=0x0000000000840ad1
- (struct _PXGSpriteIndexRange)splitIndexesIntoMovesToEndAndReinsertions:(id)arg1;	// IMP=0x00000000008408e2
- (void)increaseNumberOfSpritesBy:(unsigned int)arg1;	// IMP=0x0000000000840855
- (void)removeSpritesAtIndexes:(id)arg1;	// IMP=0x00000000008404a0
- (struct _PXGSpriteIndexRange)replaceRemovalsWithMovesToEndForIndexes:(id)arg1;	// IMP=0x0000000000840313
- (void)configureWithNumberOfSpritesAfterChange:(unsigned int)arg1 changeDetails:(id)arg2;	// IMP=0x000000000083fa83
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000083f907

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

