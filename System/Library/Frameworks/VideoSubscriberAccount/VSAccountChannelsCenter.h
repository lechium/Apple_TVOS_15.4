//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSUndoManager, VSAccountStore;
@protocol OS_dispatch_queue;

@interface VSAccountChannelsCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    VSAccountStore *_accountStore;	// 24 = 0x18
    NSString *_fileName;	// 32 = 0x20
    NSURL *_directoryURL;	// 40 = 0x28
    CDUnknownBlockType _identityProviderFetchOperationBlock;	// 48 = 0x30
}

+ (id)_defaultFileName;	// IMP=0x000000000004ab80
+ (id)_defaultDirectoryURL;	// IMP=0x000000000004ab67
+ (id)_accountChannelsWithProviderID:(id)arg1;	// IMP=0x000000000004a55f
+ (void)_startOperationAndWaitForCompletion:(id)arg1;	// IMP=0x000000000004a482
+ (id)sharedCenter;	// IMP=0x00000000000485bc
- (void).cxx_destruct;	// IMP=0x000000000004b667
@property(copy, nonatomic) CDUnknownBlockType identityProviderFetchOperationBlock; // @synthesize identityProviderFetchOperationBlock=_identityProviderFetchOperationBlock;
@property(copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)fetchAccountChannelsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ac4f
@property(retain, nonatomic) NSUndoManager *undoManager;
- (void)_removeSavedAccountChannelsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a7db
- (void)_saveAccountChannels:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a5b5
- (id)_saveAccountChannels:(id)arg1;	// IMP=0x0000000000049c19
- (void)_enqueueSaveAccountChannelsAndWait:(id)arg1;	// IMP=0x0000000000049a67
- (id)_removeSavedAccountChannels;	// IMP=0x0000000000049838
- (void)_enqueueRemoveSavedAccountChannelsAndWait;	// IMP=0x00000000000496c4
- (id)_savedAccountChannels;	// IMP=0x000000000004911c
- (id)_savedAccountChannelsForIdentityProviderID:(id)arg1 storeIdentityProvider:(id)arg2;	// IMP=0x0000000000048bd1
- (id)_storeIdentityProviderForAccount:(id)arg1;	// IMP=0x000000000004886b
- (void)_snapshotPreviousChannels;	// IMP=0x0000000000048662
- (id)initWithAccountStore:(id)arg1;	// IMP=0x0000000000048509
- (id)init;	// IMP=0x000000000004849a

@end
