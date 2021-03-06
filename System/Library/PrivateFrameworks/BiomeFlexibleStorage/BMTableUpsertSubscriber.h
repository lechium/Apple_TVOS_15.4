//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeFlexibleStorage/BMTableSubscriber-Protocol.h>

@class BMTableStore, BPSSubscription, NSError, NSString;
@protocol BMFlexibleSimpleKeyValueStorage;

@interface BMTableUpsertSubscriber : NSObject <BMTableSubscriber>
{
    _Bool _tableSetupComplete;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSString *_tableName;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    BMTableStore *_store;	// 32 = 0x20
    BPSSubscription *_subscription;	// 40 = 0x28
    NSError *_tableSetupError;	// 48 = 0x30
    id <BMFlexibleSimpleKeyValueStorage> _keyValueStore;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000009805
@property(readonly, nonatomic) id <BMFlexibleSimpleKeyValueStorage> keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(retain, nonatomic) NSError *tableSetupError; // @synthesize tableSetupError=_tableSetupError;
@property(nonatomic) BPSSubscription *subscription; // @synthesize subscription=_subscription;
@property(nonatomic) _Bool tableSetupComplete; // @synthesize tableSetupComplete=_tableSetupComplete;
@property(readonly, nonatomic) BMTableStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (void)receiveSubscription:(id)arg1;	// IMP=0x0000000000009737
- (long long)receiveInput:(id)arg1;	// IMP=0x0000000000009433
- (id)newBookmark;	// IMP=0x000000000000911d
- (void)receiveCompletion:(id)arg1;	// IMP=0x0000000000008fcc
- (void)cancel;	// IMP=0x0000000000008f5c
- (id)initWithTableName:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000008f47
- (id)initWithTableName:(id)arg1 identifier:(id)arg2 keyValueStore:(id)arg3;	// IMP=0x0000000000008d9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

