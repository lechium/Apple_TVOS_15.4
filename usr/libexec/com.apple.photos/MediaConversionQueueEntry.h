//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, NSURL, PAMediaConversionServiceResourceURLCollection, VideoConversionTask;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MediaConversionQueueEntry : NSObject
{
    NSMutableArray *_clientRequests;	// 8 = 0x8
    struct os_unfair_lock_s _queueEntryStateLock;	// 16 = 0x10
    _Bool _cancelled;	// 20 = 0x14
    _Bool _taskTypeSupportsDeduplication;	// 21 = 0x15
    NSString *_identifier;	// 24 = 0x18
    NSString *_initialRequestIdentifier;	// 32 = 0x20
    NSDictionary *_initialRequestConversionOptions;	// 40 = 0x28
    NSURL *_temporaryFilesParentDirectoryURL;	// 48 = 0x30
    VideoConversionTask *_videoConversionTask;	// 56 = 0x38
    PAMediaConversionServiceResourceURLCollection *_sourceURLCollection;	// 64 = 0x40
    PAMediaConversionServiceResourceURLCollection *_temporaryDestinationURLCollection;	// 72 = 0x48
    NSObject<OS_os_transaction> *_transaction;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000000ad80
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property _Bool taskTypeSupportsDeduplication; // @synthesize taskTypeSupportsDeduplication=_taskTypeSupportsDeduplication;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain) PAMediaConversionServiceResourceURLCollection *temporaryDestinationURLCollection; // @synthesize temporaryDestinationURLCollection=_temporaryDestinationURLCollection;
@property(retain) PAMediaConversionServiceResourceURLCollection *sourceURLCollection; // @synthesize sourceURLCollection=_sourceURLCollection;
@property(retain) VideoConversionTask *videoConversionTask; // @synthesize videoConversionTask=_videoConversionTask;
@property(retain) NSURL *temporaryFilesParentDirectoryURL; // @synthesize temporaryFilesParentDirectoryURL=_temporaryFilesParentDirectoryURL;
@property(retain) NSDictionary *initialRequestConversionOptions; // @synthesize initialRequestConversionOptions=_initialRequestConversionOptions;
@property(retain) NSString *initialRequestIdentifier; // @synthesize initialRequestIdentifier=_initialRequestIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)allRequestsAreBackground;	// IMP=0x001000000000aba1
- (_Bool)allRequestsAreOptional;	// IMP=0x001000000000ab02
- (_Bool)allRequestsHaveRequestPriority:(long long)arg1;	// IMP=0x001000000000aa5c
- (long long)compareProcessingOrderToEntry:(id)arg1;	// IMP=0x001000000000a86d
@property(readonly) NSArray *clientRequestsSnapshot;
- (void)videoConversionTask:(id)arg1 didUpdateFractionCompleted:(double)arg2;	// IMP=0x001000000000a6ce
- (id)requestIdentifiersForConnectionIdentifier:(id)arg1;	// IMP=0x001000000000a5f0
- (id)anyDestinationURLCollection;	// IMP=0x001000000000a51d
- (id)clientRequestForIdentifier:(id)arg1;	// IMP=0x001000000000a409
- (id)removeAndReturnClientRequestWithIdentifier:(id)arg1 remainingRequestCount:(long long *)arg2;	// IMP=0x001000000000a1cc
- (_Bool)clientRequestIsDuplicate:(id)arg1 identicalDestination:(_Bool *)arg2;	// IMP=0x001000000000a0df
- (void)didDequeueAndStartProcessingQueueEntry;	// IMP=0x001000000000a0c6
- (void)withLockEnumerateClientRequests:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a01a
- (void)addClientRequest:(id)arg1;	// IMP=0x0010000000009f3b
- (id)description;	// IMP=0x0010000000009e6a
- (void)dealloc;	// IMP=0x0010000000009d41
- (id)initWithIdentifier:(id)arg1 initialConversionOptions:(id)arg2;	// IMP=0x0010000000009c0d

@end
