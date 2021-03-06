//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSObject, NSOperation, NSOperationQueue;
@protocol OS_dispatch_group;

@interface MPModelStoreBrowseRequestOperation
{
    _Bool _didInitializeTimeoutIntervalAdditions;	// 8 = 0x8
    _Bool _errorReportingDisabled;	// 9 = 0x9
    NSOperation *_individualPendingNestedRequestOperation;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_nestedRequestOperationsGroup;	// 24 = 0x18
    NSOperationQueue *_nestedRequestsOperationQueue;	// 32 = 0x20
    unsigned long long _requestType;	// 40 = 0x28
    NSMapTable *_sectionsToPendingNestedRequestOperations;	// 48 = 0x30
    double _timeoutIntervalAdditions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000152174
- (void)_produceResponseWithParser:(id)arg1 results:(id)arg2 changeDetails:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000151f05
- (void)_produceRegularResponseWithParser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000151e54
- (void)_produceCarPlayResponseWithParser:(id)arg1 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001514da
- (id)_nestedRequestsOperationQueue;	// IMP=0x000000000015144e
- (double)adjustTimeoutInterval:(double)arg1;	// IMP=0x0000000000151353
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000150ca7
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015089d
- (void)execute;	// IMP=0x00000000001506ea
- (void)cancel;	// IMP=0x000000000015040a

@end

