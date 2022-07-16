//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBServerConduitClientInterface-Protocol.h>

@class NSString, NSXPCConnection;

@interface BBServerConduit : NSObject <BBServerConduitClientInterface>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)sharedConduit;	// IMP=0x0000000000067808
+ (id)clientInterface;	// IMP=0x000000000006779c
+ (id)serverInterface;	// IMP=0x00000000000676db
- (void).cxx_destruct;	// IMP=0x0000000000067d63
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067c01
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(_Bool)arg2;	// IMP=0x0000000000067b88
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000000067af2
- (void)invalidate;	// IMP=0x0000000000067ac0
- (void)dealloc;	// IMP=0x0000000000067a7e
- (id)init;	// IMP=0x0000000000067899

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

