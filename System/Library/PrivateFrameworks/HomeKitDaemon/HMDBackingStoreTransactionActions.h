//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStore, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface HMDBackingStoreTransactionActions
{
    _Bool _postApplyActionsInvoked;	// 48 = 0x30
    NSMutableArray *_postApplyActions;	// 56 = 0x38
    NSMutableSet *_postApplyActionNames;	// 64 = 0x40
    _Bool _local;	// 72 = 0x48
    _Bool _changed;	// 73 = 0x49
    _Bool _saveToAssistant;	// 74 = 0x4a
    _Bool _saveToSharedUserAccount;	// 75 = 0x4b
    NSMutableDictionary *_userInfo;	// 80 = 0x50
    HMDBackingStore *_backingStore;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x00000000003989dc
- (void).cxx_destruct;	// IMP=0x000000000039898b
@property(readonly, nonatomic) __weak HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) _Bool saveToSharedUserAccount; // @synthesize saveToSharedUserAccount=_saveToSharedUserAccount;
@property(readonly, nonatomic) _Bool saveToAssistant; // @synthesize saveToAssistant=_saveToAssistant;
@property(readonly, nonatomic) _Bool changed; // @synthesize changed=_changed;
@property(readonly, nonatomic) _Bool local; // @synthesize local=_local;
- (id)description;	// IMP=0x0000000000398866
- (id)logIdentifier;	// IMP=0x0000000000398859
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)invokePostApplyActions;	// IMP=0x0000000000398699
- (_Bool)addPostApplyActionIfNotPresent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003985c2
- (void)addPostApplyActionUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000039850d
- (void)markSaveToSharedUserAccount;	// IMP=0x00000000003984fc
- (void)markSaveToAssistant;	// IMP=0x00000000003984eb
- (void)markChanged;	// IMP=0x00000000003984da
- (void)markLocalChanged;	// IMP=0x00000000003984c9
- (id)initWithBackingStore:(id)arg1 options:(id)arg2;	// IMP=0x00000000003983a5

@end

