//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNSNotificationRepositoryObserver-Protocol.h>
#import <UserNotificationsServer/UNSPendingNotificationRepositoryObserver-Protocol.h>

@class NSString, UNSAttachmentsRepository, UNSNotificationRepository, UNSNotificationSchedulingService, UNSPendingNotificationRepository;
@protocol OS_dispatch_queue;

@interface UNSAttachmentsService : NSObject <UNSNotificationRepositoryObserver, UNSPendingNotificationRepositoryObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    UNSAttachmentsRepository *_attachmentsRepository;	// 16 = 0x10
    UNSNotificationRepository *_notificationRepository;	// 24 = 0x18
    UNSNotificationSchedulingService *_notificationSchedulingService;	// 32 = 0x20
    UNSPendingNotificationRepository *_pendingNotificationRepository;	// 40 = 0x28
}

+ (id)_attachmentURLsRemovedByReplaceUpdate:(id)arg1;	// IMP=0x000000000000daaa
+ (id)_notificationIdentifiersForNotificationRecords:(id)arg1;	// IMP=0x000000000000da79
+ (id)_stagingDirectory;	// IMP=0x000000000000da23
- (void).cxx_destruct;	// IMP=0x000000000000dcba
- (void)_notificationIdentifiersForBundleIdentifier:(id)arg1 replyOnQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d851
- (void)_repositoryDidPerformUpdates:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000000d349
- (void)_beginObservingNotificationChanges;	// IMP=0x000000000000d2f9
- (void)pendingNotificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x000000000000d2e1
- (void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x000000000000d2c9
- (void)_queue_applicationDidUninstall:(id)arg1;	// IMP=0x000000000000d24a
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;	// IMP=0x000000000000d0fa
- (void)notificationSourcesDidUninstall:(id)arg1;	// IMP=0x000000000000d050
- (void)_queue_deleteAttachmentDataForNotificationRecord:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000000ce37
- (void)_queue_deleteAttachmentDataForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000000ccba
- (id)_temporaryAttachmentFileURL;	// IMP=0x000000000000cc0a
- (id)_queue_resolvedFileURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id *)arg5;	// IMP=0x000000000000c3b6
- (id)_queue_validatedRepositoryURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id *)arg5;	// IMP=0x000000000000c0f1
- (id)_queue_resolvedURLForNotificationAttachment:(id)arg1 request:(id)arg2 bundleIdentifier:(id)arg3 bundleProxy:(id)arg4 error:(id *)arg5;	// IMP=0x000000000000bf3a
- (id)_queue_resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 continueOnFailure:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000000b147
- (id)resolveAttachmentsSkippingErrorsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3;	// IMP=0x000000000000ae5a
- (id)resolveAttachmentsForRequest:(id)arg1 bundleIdentifier:(id)arg2 bundleProxy:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000aa98
- (void)_queue_ensureIntegrityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a63a
- (void)ensureIntegrityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a477
- (void)contentProtectionStateChangedForFirstUnlock:(_Bool)arg1;	// IMP=0x000000000000a40b
- (id)initWithAttachmentsRepository:(id)arg1 notificationRepository:(id)arg2 notificationSchedulingService:(id)arg3 pendingNotificationRepository:(id)arg4;	// IMP=0x000000000000a2d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

