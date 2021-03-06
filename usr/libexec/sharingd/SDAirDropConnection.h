//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSMutableDictionary, NSProgress, NSString, NSURL, SDAirDropFileZipper, SDStatusMonitor;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_transaction, SDAirDropConnectionDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropConnection : NSObject
{
    _Bool _discover;	// 8 = 0x8
    _Bool _personAdded;	// 9 = 0x9
    _Bool _stopDeferred;	// 10 = 0xa
    _Bool _userAccepted;	// 11 = 0xb
    _Bool _senderTrusted;	// 12 = 0xc
    _Bool _delayedFinish;	// 13 = 0xd
    _Bool _queueSuspended;	// 14 = 0xe
    _Bool _endEncountered;	// 15 = 0xf
    _Bool _connectionClosed;	// 16 = 0x10
    _Bool _transactionStarted;	// 17 = 0x11
    struct __SFNode *_person;	// 24 = 0x18
    NSURL *_destination;	// 32 = 0x20
    char *_requestBuffer;	// 40 = 0x28
    NSProgress *_progress;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    struct __SecTrust *_clientTrust;	// 64 = 0x40
    double _startTime;	// 72 = 0x48
    SDStatusMonitor *_monitor;	// 80 = 0x50
    long long _lastEvent;	// 88 = 0x58
    NSMutableData *_requestData;	// 96 = 0x60
    struct __CFReadStream *_readStream;	// 104 = 0x68
    SDAirDropFileZipper *_zipper;	// 112 = 0x70
    NSMutableDictionary *_properties;	// 120 = 0x78
    unsigned int _powerAssertionID;	// 128 = 0x80
    NSObject<OS_dispatch_semaphore> *_askSemaphore;	// 136 = 0x88
    struct _CFHTTPServerRequest *_askRequest;	// 144 = 0x90
    struct _CFHTTPServerRequest *_uploadRequest;	// 152 = 0x98
    struct _CFHTTPServerRequest *_discoverRequest;	// 160 = 0xa0
    struct _CFHTTPServerConnection *_connection;	// 168 = 0xa8
    NSData *_mediaCapabilities;	// 176 = 0xb0
    NSObject<OS_os_transaction> *_transaction;	// 184 = 0xb8
    _Bool _contactsOnly;	// 192 = 0xc0
    _Bool _shouldExtractMediaFromPhotosBundles;	// 193 = 0xc1
    NSString *_sessionID;	// 200 = 0xc8
    id <SDAirDropConnectionDelegate> _delegate;	// 208 = 0xd0
}

+ (id)disambiguatedModelName;	// IMP=0x002000000013ba33
+ (id)validatedItemsArray:(id)arg1;	// IMP=0x0010000000136277
+ (id)validatedFilesArray:(id)arg1;	// IMP=0x0010000000135fa7
+ (id)validatedFileInfo:(id)arg1;	// IMP=0x0010000000135bb1
+ (id)fileInfoExpectedClassForKeyMap;	// IMP=0x0010000000135a54
- (void).cxx_destruct;	// IMP=0x002000000013c194
@property __weak id <SDAirDropConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSURL *destination; // @synthesize destination=_destination;
@property _Bool contactsOnly; // @synthesize contactsOnly=_contactsOnly;
- (void)stop;	// IMP=0x001000000013be37
- (_Bool)accept;	// IMP=0x001000000013bd1b
- (void)start;	// IMP=0x001000000013bb69
- (void)startPublishingProgressForPlaceholderFiles:(id)arg1;	// IMP=0x001000000013bb63
- (void)schedule;	// IMP=0x001000000013bb36
- (void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void *)arg3;	// IMP=0x001000000013b8a3
- (_Bool)transferIsOverPrebufferLimit;	// IMP=0x001000000013b844
- (void)setCombinedFileURLsAndItems:(id)arg1;	// IMP=0x001000000013b772
- (void)setSpotlightMetadata:(id)arg1;	// IMP=0x001000000013b76c
- (id)whereFromInfo;	// IMP=0x001000000013b6cd
- (void)handleClosedConnection;	// IMP=0x001000000013b4ef
- (void)didFailToSendResponse:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x001000000013b435
- (void)didSendResponse:(struct _CFHTTPServerResponse *)arg1 forRequest:(struct _CFHTTPServerRequest *)arg2;	// IMP=0x001000000013b0a7
- (void)finishOperation;	// IMP=0x001000000013acc4
- (void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2;	// IMP=0x001000000013ab88
- (long long)getStatusCode:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x001000000013ab43
- (void)didReceiveRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x001000000013a05a
- (void)enqueueBadResponseForRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x0010000000139ecc
- (void)makeDestinationDirectory;	// IMP=0x0010000000139cdb
- (_Bool)oneHundredContinue:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x0010000000139c8d
- (void)enqueueResponse:(struct _CFHTTPServerRequest *)arg1 code:(long long)arg2 body:(struct __CFData *)arg3;	// IMP=0x0010000000139c18
- (void)silentlyCancelRequest;	// IMP=0x0010000000139b3f
- (_Bool)senderInfoAvailable;	// IMP=0x0010000000139abc
- (_Bool)thereIsEnoughFreeSpace;	// IMP=0x001000000013999e
- (_Bool)startReceivingFile:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x00100000001395b8
- (id)compressionType;	// IMP=0x00100000001394f0
- (_Bool)startReceivingBody:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x001000000013934c
- (void)handleReadStreamEvent:(struct __CFReadStream *)arg1 event:(unsigned long long)arg2;	// IMP=0x00100000001391c4
- (void)processRequest;	// IMP=0x0010000000139102
- (void)cancelAndDecline;	// IMP=0x001000000013904e
- (void)handleAskRequest;	// IMP=0x0010000000138bae
- (void)adjustPropertiesForPhotosBundles;	// IMP=0x00100000001388aa
- (void)adjustPropertiesForAutoAcceptSenderIsMe:(_Bool)arg1;	// IMP=0x00100000001387a1
- (_Bool)transferContainsPhotosAssetBundles;	// IMP=0x00000000001385fe
- (_Bool)allowAskRequestFromPerson:(struct __SFNode *)arg1;	// IMP=0x001000000013852b
- (void)parseAskRequest;	// IMP=0x0010000000138317
- (void)handleDiscoverRequest;	// IMP=0x0010000000138183
- (void)parseDiscoverRequest;	// IMP=0x0010000000138050
- (void)convertURLStringsToURLs;	// IMP=0x0010000000137e95
- (void)silentlyCancelRequestOnMainThread;	// IMP=0x0010000000137e34
- (_Bool)senderIsMe;	// IMP=0x0010000000137c09
- (_Bool)senderIsTrusted:(id)arg1;	// IMP=0x0010000000137a4b
- (_Bool)senderIsBlocked;	// IMP=0x0010000000137a43
- (void)logSenderIsBlocked;	// IMP=0x00100000001379e6
- (struct __SFNode *)createPersonForAskRequest;	// IMP=0x001000000013756c
- (void)sendUploadResponse:(long long)arg1;	// IMP=0x0010000000137371
- (void)releaseIdleSleepAssertion;	// IMP=0x0010000000137268
- (void)sendAskResponse:(long long)arg1;	// IMP=0x0010000000136ee6
- (void)sendDiscoverResponse:(long long)arg1 forKnownAlias:(id)arg2;	// IMP=0x00100000001369c1
- (void)storeIconValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001368e5
- (void)storeBooleanValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x001000000013684e
- (void)storeNumberValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001367b7
- (void)storeStringValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000136720
- (void)storeDataValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000136689
- (void)storeRequestValue:(struct _CFHTTPServerRequest *)arg1 forKey:(struct __CFString *)arg2 convertToNumber:(_Bool)arg3;	// IMP=0x0010000000136522
- (void)storeArrayValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x001000000013638a
- (void)setProperty:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000135a38
- (void)didReceiveError:(struct __CFError *)arg1;	// IMP=0x001000000013594b
- (void)notifyClientForEvent:(long long)arg1;	// IMP=0x0010000000134fa3
- (void)performBlockForAllProgresses:(CDUnknownBlockType)arg1;	// IMP=0x0010000000134f91
- (double)getTransferSize;	// IMP=0x0010000000134f2c
- (double)getTransferRate;	// IMP=0x0010000000134e9a
- (void)notifyClient:(long long)arg1 withResults:(id)arg2;	// IMP=0x0010000000134e10
- (void)handleTerminalCallBack;	// IMP=0x0010000000134da9
- (void)removeObservers;	// IMP=0x0010000000134d56
- (void)addObservers;	// IMP=0x0010000000134cef
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x0010000000134c06
- (void)systemWillSleep:(id)arg1;	// IMP=0x0010000000134b36
- (void)didCloseConnection;	// IMP=0x0010000000134acd
- (void)dealloc;	// IMP=0x001000000013499e
- (id)initWithConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x001000000013481c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

