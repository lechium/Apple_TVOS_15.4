//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSProgressSubscriber-Protocol.h>

@class NSFileAccessNode, NSString, NSXPCConnection;
@protocol NSProgressSubscriber;

__attribute__((visibility("hidden")))
@interface NSProgressSubscriberProxy : NSObject <NSProgressSubscriber>
{
    id <NSProgressSubscriber> _forwarder;	// 8 = 0x8
    id _subscriberID;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSString *_lowerCaseCategoryName;	// 32 = 0x20
    NSFileAccessNode *_itemLocation;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
}

@property(copy) NSString *category; // @synthesize category=_lowerCaseCategoryName;
- (_Bool)isFromConnection:(id)arg1;	// IMP=0x000000000000241c
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndenting:(id)arg1;	// IMP=0x000000000000237b
- (oneway void)removePublisherForID:(id)arg1;	// IMP=0x0000000000002365
- (oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000000231c
- (oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;	// IMP=0x00000000000022d3
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(_Bool)arg4;	// IMP=0x00000000000022bd
@property NSFileAccessNode *itemLocation;
- (id)appBundleID;	// IMP=0x0000000000002237
- (void)dealloc;	// IMP=0x00000000000021b5
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 subscriberID:(id)arg3 appBundleID:(id)arg4;	// IMP=0x00000000000020f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

