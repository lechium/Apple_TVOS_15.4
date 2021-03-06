//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/PKPushRegistryDelegate-Protocol.h>

@class NSHashTable, NSString, PKPushRegistry;

@interface CKPKPushRegistry : NSObject <PKPushRegistryDelegate>
{
    NSHashTable *_delegates;	// 8 = 0x8
    PKPushRegistry *_pushRegistry;	// 16 = 0x10
}

+ (id)sharedPushRegistry;	// IMP=0x000000000009ef59
- (void).cxx_destruct;	// IMP=0x000000000009f4b0
@property(retain, nonatomic) PKPushRegistry *pushRegistry; // @synthesize pushRegistry=_pushRegistry;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000009f0fa
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;	// IMP=0x000000000009f0f4
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000009f059
- (void)addDelegate:(id)arg1;	// IMP=0x000000000009efbe
- (id)_init;	// IMP=0x000000000009ee42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

