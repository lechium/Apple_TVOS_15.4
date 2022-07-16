//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGMutableEffectComponent-Protocol.h>

@class NSMapTable, NSMutableSet;
@protocol PXGEffectComponentDelegate;

@interface PXGEffectComponent <PXGMutableEffectComponent>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_lock_effectById;	// 16 = 0x10
    NSMutableSet *_allEffects;	// 24 = 0x18
    id <PXGEffectComponentDelegate> _delegate;	// 32 = 0x20
}

+ (unsigned long long)elementSize;	// IMP=0x000000000089ade2
- (void).cxx_destruct;	// IMP=0x000000000089ad22
@property(nonatomic) __weak id <PXGEffectComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cleanupUnusedObjects;	// IMP=0x000000000089ab7d
- (void)didUseEffect:(id)arg1;	// IMP=0x000000000089ab08
- (id)effectForId:(unsigned int)arg1;	// IMP=0x000000000089aa6f
- (void)unregisterEffectId:(unsigned int)arg1;	// IMP=0x000000000089a9f2
- (void)registerEffect:(id)arg1 withEffectId:(unsigned int)arg2;	// IMP=0x000000000089a936
- (void)willDestroyEntities:(const CDStruct_6238c8e0 *)arg1 count:(long long)arg2;	// IMP=0x000000000089a8af
@property(readonly, nonatomic) unsigned int *mutableEffectIds;
@property(readonly, nonatomic) const unsigned int *effectIds;
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000089a7e8
- (id)initWithDataStore:(id)arg1;	// IMP=0x000000000089a747

@end
