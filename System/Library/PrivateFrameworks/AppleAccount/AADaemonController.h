//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AADaemonProtocol-Protocol.h>
#import <AppleAccount/AAFXPCSessionDelegate-Protocol.h>

@class AAFXPCSession, NSString;

@interface AADaemonController : NSObject <AAFXPCSessionDelegate, AADaemonProtocol>
{
    AAFXPCSession *_remoteService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000fa5e
@property(retain, nonatomic) AAFXPCSession *remoteService; // @synthesize remoteService=_remoteService;
- (void)configureRemoteInterface:(id)arg1;	// IMP=0x000000000000f948
- (void)handleAppleAccountDeleteForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f550
- (id)init;	// IMP=0x000000000000f48f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
