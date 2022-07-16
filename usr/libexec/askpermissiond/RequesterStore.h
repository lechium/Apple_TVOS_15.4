//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RequestStore;
@protocol OS_dispatch_queue;

@interface RequesterStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSMutableDictionary *_itemIdentifierStore;	// 16 = 0x10
    NSMutableDictionary *_requestIdentifierStore;	// 24 = 0x18
    RequestStore *_requestStore;	// 32 = 0x20
}

+ (id)sharedStore;	// IMP=0x0020000000001f13
- (void).cxx_destruct;	// IMP=0x0020000000003660
@property(readonly, nonatomic) RequestStore *requestStore; // @synthesize requestStore=_requestStore;
@property(readonly, nonatomic) NSMutableDictionary *requestIdentifierStore; // @synthesize requestIdentifierStore=_requestIdentifierStore;
@property(readonly, nonatomic) NSMutableDictionary *itemIdentifierStore; // @synthesize itemIdentifierStore=_itemIdentifierStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void)_loadItemsIntoMemory;	// IMP=0x00100000000031e1
- (void)_saveChanges;	// IMP=0x0010000000002e92
- (void)storeRequestWithItemIdentifier:(id)arg1 requestIdentifier:(id)arg2;	// IMP=0x0010000000002ba1
- (id)requestIdentifierWithItemIdentifier:(id)arg1;	// IMP=0x0010000000002aa6
- (void)removeRequestWithIdentifier:(id)arg1;	// IMP=0x0010000000002850
- (_Bool)containsRequestWithIdentifier:(id)arg1;	// IMP=0x00100000000027b3
- (void)clearRequests;	// IMP=0x0010000000002593
- (void)clearExpiredRequests;	// IMP=0x0010000000001f68
- (id)init;	// IMP=0x0010000000001dc7

@end
