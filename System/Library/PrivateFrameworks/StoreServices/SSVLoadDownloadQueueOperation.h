//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSMutableArray, NSMutableOrderedSet, NSNumber, NSString, NSURL, SSURLRequestProperties;

@interface SSVLoadDownloadQueueOperation
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    NSMutableOrderedSet *_downloads;	// 16 = 0x10
    _Bool _needsAuthentication;	// 24 = 0x18
    NSMutableArray *_rangesToLoad;	// 32 = 0x20
    long long _reason;	// 40 = 0x28
    NSString *_requestIdentifier;	// 48 = 0x30
    SSURLRequestProperties *_requestProperties;	// 56 = 0x38
    NSString *_mdSyncState;	// 64 = 0x40
    NSLock *_lock;	// 72 = 0x48
    NSURL *_requestURL;	// 80 = 0x50
    NSString *_powerAssertionIdentifier;	// 88 = 0x58
    NSString *_storeCorrelationID;	// 96 = 0x60
}

+ (id)newLoadAutomaticDownloadQueueOperation;	// IMP=0x000000000017b58a
- (void).cxx_destruct;	// IMP=0x000000000017dadc
@property(copy, nonatomic) NSString *storeCorrelationID; // @synthesize storeCorrelationID=_storeCorrelationID;
@property(retain) NSString *powerAssertionIdentifier; // @synthesize powerAssertionIdentifier=_powerAssertionIdentifier;
@property(copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
- (id)_newURLOperationWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2 url:(id)arg3;	// IMP=0x000000000017d641
- (_Bool)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2 url:(id)arg3;	// IMP=0x000000000017ca21
- (void)_handleResponse:(id)arg1;	// IMP=0x000000000017c915
- (id)_account;	// IMP=0x000000000017c840
- (void)main;	// IMP=0x000000000017c190
- (void)unlock;	// IMP=0x000000000017c173
@property(copy) NSString *requestIdentifier;
@property long long reason;
- (void)setDownloadsMetadata:(id)arg1;	// IMP=0x000000000017bfa8
@property _Bool needsAuthentication;
@property(retain) NSNumber *accountIdentifier;
@property(readonly) SSURLRequestProperties *requestProperties;
- (id)resolveBagURLForKey:(id)arg1 bagContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000017bc43
- (void)lock;	// IMP=0x000000000017bb9e
- (void)importKeybagSync:(id)arg1;	// IMP=0x000000000017bb98
- (id)gzipData:(id)arg1;	// IMP=0x000000000017ba02
- (_Bool)featureEnabledForBagKey:(id)arg1 bagContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000017b89c
@property(readonly) NSMutableOrderedSet *downloads;
- (void)addGUIDToBody:(id)arg1;	// IMP=0x000000000017b7b9
- (void)addKeybagSyncToBody:(id)arg1;	// IMP=0x000000000017b7b3
- (id)initWithRequestProperties:(id)arg1;	// IMP=0x000000000017b493
- (id)init;	// IMP=0x000000000017b436

@end

