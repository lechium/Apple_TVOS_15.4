//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

#import <TVMLKit/TVJSUbiquitousKeyValueStore-Protocol.h>

@class NSUbiquitousKeyValueStore;

__attribute__((visibility("hidden")))
@interface TVJSUbiquitousKeyValueStore : IKJSObject <TVJSUbiquitousKeyValueStore>
{
    NSUbiquitousKeyValueStore *_kvs;	// 8 = 0x8
    id _observer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000020abf
@property(readonly) long long ACCOUNT_CHANGED_REASON;
@property(readonly) long long QUOTA_VIOLATION_REASON;
@property(readonly) long long INITIAL_SYNC_REASON;
@property(readonly) long long SERVER_CHANGED_REASON;
- (_Bool)synchronize;	// IMP=0x0000000000020a79
- (void)removeItem:(id)arg1;	// IMP=0x0000000000020a5c
- (void)setItem:(id)arg1:(id)arg2;	// IMP=0x0000000000020a36
- (id)getItem:(id)arg1;	// IMP=0x0000000000020a19
- (void)dealloc;	// IMP=0x000000000002096f
- (id)initWithAppContext:(id)arg1;	// IMP=0x00000000000205ca

@end

