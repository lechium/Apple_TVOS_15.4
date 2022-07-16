//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKModifyBadgeOperationInfo;

@interface CKModifyBadgeOperation
{
    CDUnknownBlockType _modifyBadgeCompletionBlock;	// 8 = 0x8
    unsigned long long _badgeValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015e1eb
@property(nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (id)activityCreate;	// IMP=0x000000000015e1a0
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000015dd7e
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x000000000015dcf5
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x000000000015dc79
- (void)performCKOperation;	// IMP=0x000000000015d8aa
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x000000000015d846
@property(copy, nonatomic) CDUnknownBlockType modifyBadgeCompletionBlock; // @synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock;
- (id)initWithBadgeValue:(unsigned long long)arg1;	// IMP=0x000000000015d47f
- (id)init;	// IMP=0x000000000015d450

// Remaining properties
@property(readonly, nonatomic) CKModifyBadgeOperationInfo *operationInfo; // @dynamic operationInfo;

@end

