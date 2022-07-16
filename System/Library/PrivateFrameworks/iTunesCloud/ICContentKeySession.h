//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/AVContentKeySessionDelegate-Protocol.h>

@class AVContentKeySession, ICAVContentKeySessionReusable, ICFileContentKeyStore, ICStoreRequestContext, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSURL;
@protocol ICContentKeySessionDelegateProtocol, ICContentKeyStoreProtocol, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface ICContentKeySession : NSObject <AVContentKeySessionDelegate>
{
    NSURL *_keyServerURL;	// 8 = 0x8
    NSURL *_keyCertificateURL;	// 16 = 0x10
    AVContentKeySession *_contentKeySession;	// 24 = 0x18
    ICAVContentKeySessionReusable *_contentKeySessionReusable;	// 32 = 0x20
    ICStoreRequestContext *_requestContext;	// 40 = 0x28
    NSNumber *_adamID;	// 48 = 0x30
    id <ICContentKeyStoreProtocol> _keyStore;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_accessQueue;	// 64 = 0x40
    NSMutableSet *_pendingKeyIdentifiers;	// 72 = 0x48
    NSObject<OS_dispatch_semaphore> *_waitForKeysSemaphore;	// 80 = 0x50
    NSString *_playbackToken;	// 88 = 0x58
    NSSet *_prefetchKeyIdentifiers;	// 96 = 0x60
    NSURL *_prefetchKeyServerURL;	// 104 = 0x68
    NSURL *_prefetchKeyCertificateURL;	// 112 = 0x70
    ICFileContentKeyStore *_prefetchedContentKeyStore;	// 120 = 0x78
    NSMutableDictionary *_keyRenewalDates;	// 128 = 0x80
    NSMutableDictionary *_keyRequestsPendingRenewal;	// 136 = 0x88
    NSObject<OS_dispatch_source> *_keyRenewalTimer;	// 144 = 0x90
    id <ICContentKeySessionDelegateProtocol> _delegate;	// 152 = 0x98
    _Bool _bypassCache;	// 160 = 0xa0
    _Bool _requestOfflineKeys;	// 161 = 0xa1
    long long _keyServerProtocolType;	// 168 = 0xa8
}

+ (id)enhancedAudioSharedContentKeyPath;	// IMP=0x000000000016a49b
- (void).cxx_destruct;	// IMP=0x00000000001685af
@property(nonatomic) long long keyServerProtocolType; // @synthesize keyServerProtocolType=_keyServerProtocolType;
@property(nonatomic) _Bool requestOfflineKeys; // @synthesize requestOfflineKeys=_requestOfflineKeys;
@property(nonatomic) _Bool bypassCache; // @synthesize bypassCache=_bypassCache;
@property(copy, nonatomic) NSString *playbackToken; // @synthesize playbackToken=_playbackToken;
@property(copy, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(copy, nonatomic) NSURL *keyCertificateURL; // @synthesize keyCertificateURL=_keyCertificateURL;
@property(copy, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property(readonly, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
- (void)_processKeyWithIdentifier:(id)arg1;	// IMP=0x0000000000168414
- (void)_renewExpiredKeys;	// IMP=0x0000000000168220
- (void)_scheduleKeyRefreshTimer;	// IMP=0x0000000000167f6b
- (void)_performKeyDeliveryRequestForContentKeyRequest:(id)arg1 persistResponse:(_Bool)arg2 isRenewal:(_Bool)arg3;	// IMP=0x0000000000167cf9
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x0000000000167bd4
- (void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;	// IMP=0x0000000000167b71
- (void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;	// IMP=0x0000000000167999
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;	// IMP=0x00000000001673a8
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;	// IMP=0x0000000000166fdd
- (void)didReceiveFairPlayError:(id)arg1;	// IMP=0x0000000000166f67
- (void)waitForAllKeysToProcessWithTimeout:(double)arg1;	// IMP=0x0000000000166c3d
- (void)waitForAllKeysToProcess;	// IMP=0x0000000000166c28
- (void)resumeAutomaticKeyRenewal;	// IMP=0x0000000000166b60
- (void)pauseAutomaticKeyRenewal;	// IMP=0x0000000000166a98
- (void)processKeyWithIdentifier:(id)arg1;	// IMP=0x0000000000166a0b
- (void)removeAsset:(id)arg1;	// IMP=0x00000000001669f5
- (void)addAsset:(id)arg1 shouldPreloadKeys:(_Bool)arg2;	// IMP=0x00000000001668c9
- (void)addAsset:(id)arg1;	// IMP=0x00000000001668b5
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000001667de
- (id)initWithRequestContext:(id)arg1 keyStore:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000166298
- (id)initWithRequestContext:(id)arg1 keyStore:(id)arg2;	// IMP=0x0000000000166283
- (id)initWithRequestContext:(id)arg1;	// IMP=0x000000000016626f
- (id)init;	// IMP=0x00000000001661e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
