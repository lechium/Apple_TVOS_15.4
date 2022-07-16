//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSIndexPath, NSUUID;

@interface UICollectionViewUpdateItem : NSObject <NSCopying>
{
    struct _UICollectionUpdateIndexPair _initialIndexPair;	// 8 = 0x8
    struct _UICollectionUpdateIndexPair _finalIndexPair;	// 24 = 0x18
    struct _UICollectionUpdateIndexPair _indexPairForAction;	// 40 = 0x28
    struct {
        unsigned int isAppendingSectionInsert:1;
        unsigned int shouldReconfigure:1;
    } _updateItemFlags;	// 56 = 0x38
    NSIndexPath *_initialIndexPath;	// 64 = 0x40
    NSIndexPath *_finalIndexPath;	// 72 = 0x48
    long long _updateAction;	// 80 = 0x50
    NSUUID *_identifier;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x00000000008847c8
- (void).cxx_destruct;	// IMP=0x0000000000884795
@property(readonly, nonatomic) long long updateAction; // @synthesize updateAction=_updateAction;
@property(readonly, nonatomic) NSIndexPath *indexPathAfterUpdate; // @synthesize indexPathAfterUpdate=_finalIndexPath;
@property(readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate; // @synthesize indexPathBeforeUpdate=_initialIndexPath;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008846aa
- (long long)inverseCompareIndexPaths:(id)arg1;	// IMP=0x00000000008844a0
- (long long)compareIndexPaths:(id)arg1;	// IMP=0x000000000088440e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000088437f
- (id)description;	// IMP=0x0000000000883e36

@end
