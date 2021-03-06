//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSFilePresenterXPCInterface-Protocol.h>

@class NSFilePresenterProxy, NSString;
@protocol NSFilePresenter, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFilePresenterXPCMessenger : NSObject <NSFilePresenterXPCInterface>
{
    id <NSFilePresenter> _filePresenter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSFilePresenterProxy *_filePresenterProxy;	// 24 = 0x18
}

- (void)_makePresenter:(id)arg1 validateRelinquishmentToSubitemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f905c
- (void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001f8a34
- (void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 purposeID:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001f87b4
- (void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 purposeID:(id)arg3 ifNecessaryUsingSelector:(SEL)arg4 recordingRelinquishment:(id)arg5 continuer:(CDUnknownBlockType)arg6;	// IMP=0x00000000001f7b95
- (id)_writeRelinquishment;	// IMP=0x00000000001f7b25
- (id)_readRelinquishment;	// IMP=0x00000000001f7ab5
- (void)_makePresenter:(id)arg1 setProviderPurposeIdentifier:(id)arg2;	// IMP=0x00000000001f797c
- (void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2;	// IMP=0x00000000001f7837
- (void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5;	// IMP=0x00000000001f72d1
- (void)_makePresenter:(id)arg1 observeChangeOfUbiquityAttributes:(id)arg2;	// IMP=0x00000000001f71e4
- (void)_makePresenter:(id)arg1 observeSharingChangeWithSubitemURL:(id)arg2;	// IMP=0x00000000001f6f74
- (void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2;	// IMP=0x00000000001f6d04
- (void)_makePresenterObserveReconnection:(id)arg1;	// IMP=0x00000000001f6b89
- (void)_makePresenterObserveDisconnection:(id)arg1;	// IMP=0x00000000001f6a0e
- (void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3;	// IMP=0x00000000001f66a1
- (void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2;	// IMP=0x00000000001f6437
- (void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f60ed
- (void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f5ab8
- (void)_makePresenter:(id)arg1 validateRemoteDeletionRecordingRelinquishment:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f56c7
- (void)_makePresenter:(id)arg1 reportUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f5346
- (void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f4fe6
- (oneway void)logSuspensionWarning;	// IMP=0x00000000001f4f6a
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f4f3b
- (oneway void)setProviderPurposeIdentifier:(id)arg1;	// IMP=0x00000000001f4e8a
- (oneway void)updateLastEventID:(unsigned long long)arg1;	// IMP=0x00000000001f4dd9
- (oneway void)observePresenterChange:(_Bool)arg1 forSubitemAtURL:(id)arg2;	// IMP=0x00000000001f4bac
- (oneway void)observeVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4;	// IMP=0x00000000001f4ad3
- (oneway void)observeChangeOfUbiquityAttributes:(id)arg1;	// IMP=0x00000000001f4a22
- (oneway void)observeSharingChangeWithSubitemURL:(id)arg1;	// IMP=0x00000000001f4943
- (oneway void)observeUbiquityChangeWithSubitemURL:(id)arg1;	// IMP=0x00000000001f4864
- (oneway void)observeReconnection;	// IMP=0x00000000001f47b6
- (oneway void)observeDisconnection;	// IMP=0x00000000001f4708
- (oneway void)observeMoveToURL:(id)arg1 withSubitemURL:(id)arg2 byWriterWithPurposeID:(id)arg3;	// IMP=0x00000000001f4590
- (oneway void)observeChangeWithSubitemURL:(id)arg1;	// IMP=0x00000000001f44b1
- (void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f42fc
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f4176
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f4002
- (oneway void)reacquireFromReadingClaimForID:(id)arg1;	// IMP=0x00000000001f3ea2
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001f3afd
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001f3889
- (void)invalidate;	// IMP=0x00000000001f3851
- (void)dealloc;	// IMP=0x00000000001f37db
- (id)initWithFilePresenterProxy:(id)arg1;	// IMP=0x00000000001f3768
- (id)initWithFilePresenter:(id)arg1 queue:(id)arg2;	// IMP=0x00000000001f36e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

