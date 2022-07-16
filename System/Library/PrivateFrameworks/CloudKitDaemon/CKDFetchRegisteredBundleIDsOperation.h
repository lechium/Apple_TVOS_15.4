//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKDFetchRegisteredBundleIDsOperation
{
    NSArray *_bundleIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000273c
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)main;	// IMP=0x0000000000001ed4
- (int)operationType;	// IMP=0x0000000000001ec9
- (id)activityCreate;	// IMP=0x0000000000001ea0
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000001e71

// Remaining properties
@property(retain, nonatomic) id <CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end
