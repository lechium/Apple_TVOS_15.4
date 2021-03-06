//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, PSSpecifierGroupIndex, PSSpecifierUpdateContext;

@interface PSSpecifierUpdates : NSObject <NSCopying>
{
    NSMutableArray *_currentSpecifiers;	// 8 = 0x8
    NSMutableArray *_updates;	// 16 = 0x10
    PSSpecifierGroupIndex *_groupIndex;	// 24 = 0x18
    _Bool _wantsDebugCallbacks;	// 32 = 0x20
    NSArray *_originalSpecifiers;	// 40 = 0x28
    PSSpecifierUpdateContext *_context;	// 48 = 0x30
}

+ (id)updatesByDiffingSpecifiers:(id)arg1 withSpecifiers:(id)arg2 changedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044a74
+ (void)_assertSpecifierIDsAreUnique:(id)arg1;	// IMP=0x00000000000448c5
+ (_Bool)_wantsDebugCallbacks;	// IMP=0x00000000000411b1
+ (Class)_groupIndexClass;	// IMP=0x0000000000040e56
+ (id)updatesWithSpecifiers:(id)arg1;	// IMP=0x0000000000040a80
- (void).cxx_destruct;	// IMP=0x0000000000045b1a
@property(copy, nonatomic) PSSpecifierUpdateContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSArray *originalSpecifiers; // @synthesize originalSpecifiers=_originalSpecifiers;
- (id)specifiersAfterApplyingUpdatesToIndex:(unsigned long long)arg1;	// IMP=0x00000000000459ba
- (id)stepByStepDescription;	// IMP=0x00000000000457d7
- (id)description;	// IMP=0x0000000000045730
- (_Bool)swapSpecifier:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x00000000000446f1
- (_Bool)swapSpecifierAtIndex:(unsigned long long)arg1 withSpecifierAtIndex:(unsigned long long)arg2;	// IMP=0x000000000004465a
- (_Bool)moveSpecifier:(id)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x00000000000444ff
- (_Bool)moveSpecifierAtIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x000000000004429b
- (_Bool)moveSpecifierAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x00000000000440c7
- (_Bool)reloadSpecifiersInRange:(struct _NSRange)arg1;	// IMP=0x0000000000043f69
- (_Bool)reloadSpecifierAtIndexPath:(id)arg1;	// IMP=0x0000000000043e0e
- (_Bool)reloadSpecifierAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000043cb4
- (_Bool)reloadSpecifiersWithIDs:(id)arg1;	// IMP=0x0000000000043c0b
- (_Bool)reloadSpecifierWithID:(id)arg1;	// IMP=0x0000000000043a0f
- (_Bool)reloadSpecifiersInGroupWithID:(id)arg1;	// IMP=0x00000000000438ab
- (_Bool)reloadSpecifiersInGroup:(id)arg1;	// IMP=0x0000000000043734
- (_Bool)reloadSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1;	// IMP=0x000000000004352b
- (_Bool)reloadSpecifiers:(id)arg1;	// IMP=0x0000000000043482
- (_Bool)reloadSpecifier:(id)arg1;	// IMP=0x0000000000043331
- (_Bool)removeSpecifiersInGroupWithID:(id)arg1;	// IMP=0x00000000000431cd
- (_Bool)removeSpecifiersInGroup:(id)arg1;	// IMP=0x000000000004303e
- (_Bool)removeSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1;	// IMP=0x0000000000042dcb
- (_Bool)removeSpecifierAtIndexPath:(id)arg1;	// IMP=0x0000000000042c70
- (_Bool)removeSpecifiersInRange:(struct _NSRange)arg1;	// IMP=0x0000000000042ab6
- (_Bool)_removeOneSpecifierOnlyAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004295c
- (_Bool)removeSpecifierAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000042802
- (_Bool)removeSpecifiersWithIDs:(id)arg1;	// IMP=0x0000000000042759
- (_Bool)removeSpecifierWithID:(id)arg1;	// IMP=0x000000000004255d
- (_Bool)removeSpecifiers:(id)arg1;	// IMP=0x00000000000424b4
- (_Bool)removeSpecifier:(id)arg1;	// IMP=0x000000000004236a
- (_Bool)appendSpecifiers:(id)arg1 toGroupWithID:(id)arg2;	// IMP=0x000000000004217c
- (_Bool)appendSpecifier:(id)arg1 toGroupWithID:(id)arg2;	// IMP=0x00000000000420a2
- (_Bool)appendSpecifiers:(id)arg1 toGroup:(id)arg2;	// IMP=0x0000000000041eb4
- (_Bool)appendSpecifier:(id)arg1 toGroup:(id)arg2;	// IMP=0x0000000000041dda
- (_Bool)appendSpecifiers:(id)arg1 toGroupAtGroupIndex:(unsigned long long)arg2;	// IMP=0x0000000000041b94
- (_Bool)appendSpecifier:(id)arg1 toGroupAtGroupIndex:(unsigned long long)arg2;	// IMP=0x0000000000041ad3
- (_Bool)appendSpecifiers:(id)arg1;	// IMP=0x0000000000041a6e
- (_Bool)appendSpecifier:(id)arg1;	// IMP=0x0000000000041a07
- (_Bool)insertContiguousSpecifiers:(id)arg1 afterSpecifierWithID:(id)arg2;	// IMP=0x000000000004199c
- (_Bool)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;	// IMP=0x0000000000041931
- (_Bool)insertContiguousSpecifiers:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000041873
- (_Bool)insertSpecifier:(id)arg1 afterSpecifierWithID:(id)arg2;	// IMP=0x00000000000416fc
- (_Bool)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;	// IMP=0x0000000000041585
- (_Bool)insertSpecifier:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000413fc
- (_Bool)insertSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000041290
- (_Bool)_addAndApplyOperation:(id)arg1;	// IMP=0x00000000000411c5
- (void)_didApplyOperation:(id)arg1;	// IMP=0x00000000000411bf
- (void)_operationFailed:(id)arg1 reason:(id)arg2;	// IMP=0x00000000000411b9
- (_Bool)_enumerateArrayWithConjuctionalResult:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041051
- (id)specifierForID:(id)arg1;	// IMP=0x000000000004103b
- (unsigned long long)indexOfSpecifierWithID:(id)arg1;	// IMP=0x0000000000041025
- (unsigned long long)indexOfSpecifier:(id)arg1;	// IMP=0x000000000004100f
- (void)enumerateUpdatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040f52
@property(readonly, copy, nonatomic) NSArray *updates;
@property(readonly, copy, nonatomic) NSArray *currentSpecifiers;
@property(readonly, copy, nonatomic) PSSpecifierGroupIndex *groupIndex;
- (id)_groupIndexCreatingIfNecessary;	// IMP=0x0000000000040e67
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040dd3
- (id)_initForCopyWithOriginalSpecifiers:(id)arg1 currentSpecifiers:(id)arg2 updates:(id)arg3;	// IMP=0x0000000000040cfe
- (id)initWithSpecifiers:(id)arg1 applyUpdates:(id)arg2;	// IMP=0x0000000000040b90
- (id)initWithSpecifiers:(id)arg1;	// IMP=0x0000000000040b7c
- (id)init;	// IMP=0x0000000000040b20
- (id)_init;	// IMP=0x0000000000040ac9

@end

