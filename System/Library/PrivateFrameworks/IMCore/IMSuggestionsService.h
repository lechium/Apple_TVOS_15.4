//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSDictionary, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue, SGSuggestionsServiceContactsProtocol;

@interface IMSuggestionsService : NSObject
{
    NSObject<SGSuggestionsServiceContactsProtocol> *_connection;	// 8 = 0x8
    NSCache *_cache;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableDictionary *_pending;	// 32 = 0x20
    NSDictionary *_localTable;	// 40 = 0x28
    NSHashTable *_handlesToRetry;	// 48 = 0x30
    id _newContactNotificationToken;	// 56 = 0x38
    struct __CFRunLoopObserver *_notificationObserver;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000000001e4b1
- (void).cxx_destruct;	// IMP=0x000000000001fe3f
- (id)personNameComponentsForHandle:(id)arg1;	// IMP=0x000000000001fd3f
- (id)fetchCNContactForSuggestedHandle:(id)arg1;	// IMP=0x000000000001fb76
- (id)_contactForSGContactMatch:(id)arg1;	// IMP=0x000000000001f919
- (void)scheduleFetchIfNecessaryForHandle:(id)arg1;	// IMP=0x000000000001f3b7
- (void)_startRequestForDisplayNameCallbackWithSuggestedName:(id)arg1 displayName:(id)arg2 queue:(id)arg3;	// IMP=0x000000000001f08b
- (void)_startRequestForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3;	// IMP=0x000000000001edd1
- (void)fetchSuggestedRealNameForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e762
- (id)suggestedNameFromCache:(id)arg1 wasFound:(_Bool *)arg2;	// IMP=0x000000000001e69c
- (void)stopUsingLocalLookups;	// IMP=0x000000000001e617
- (void)startUsingLocalLookupsWithTable:(id)arg1;	// IMP=0x000000000001e541
- (_Bool)isBusiness:(id)arg1;	// IMP=0x000000000001e534
- (_Bool)_maybeEmailAddress:(id)arg1;	// IMP=0x000000000001e527
- (_Bool)_maybePhoneNumber:(id)arg1;	// IMP=0x000000000001e51a
- (id)serviceConnection;	// IMP=0x000000000001e4a3
- (void)dealloc;	// IMP=0x000000000001e45d
- (id)init;	// IMP=0x000000000001df56

@end

