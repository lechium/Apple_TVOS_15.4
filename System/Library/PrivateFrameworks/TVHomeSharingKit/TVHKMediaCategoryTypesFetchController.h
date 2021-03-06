//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_queue_serial, TVHKMediaCategoryTypesFetchControllerDelegate;

@interface TVHKMediaCategoryTypesFetchController
{
    NSSet *_DMAPServerProtocols;	// 8 = 0x8
    id <TVHKMediaCategoryTypesFetchControllerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateDispatchQueue;	// 24 = 0x18
    NSMutableArray *_mutableMediaCategoryTypes;	// 32 = 0x20
    NSObject<OS_dispatch_queue_serial> *_accessQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000b3126
@property(readonly, nonatomic) NSObject<OS_dispatch_queue_serial> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) NSMutableArray *mutableMediaCategoryTypes; // @synthesize mutableMediaCategoryTypes=_mutableMediaCategoryTypes;
- (void)_notifyFetchDidFailWithError:(id)arg1;	// IMP=0x00000000000b301c
- (void)_notifyFetchDidCompleteWithResult:(id)arg1;	// IMP=0x00000000000b2f34
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b2e3b
- (void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b2c7d
- (void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000b2b0b
- (void)_didCancel;	// IMP=0x00000000000b2a97
- (id)_didCompleteQueryOperation:(id)arg1;	// IMP=0x00000000000b29ac
- (id)_queryOperationForQueryReason:(long long)arg1 withUserInfo:(id)arg2;	// IMP=0x00000000000b28d8
- (id)DMAPServerProtocols;	// IMP=0x00000000000b28c3
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateDispatchQueue; // @synthesize delegateDispatchQueue=_delegateDispatchQueue;
@property(nonatomic) __weak id <TVHKMediaCategoryTypesFetchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x00000000000b23af

@end

