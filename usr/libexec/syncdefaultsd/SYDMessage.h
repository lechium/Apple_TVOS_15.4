//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SYDPeer;
@protocol OS_os_activity, OS_xpc_object;

@interface SYDMessage : NSObject
{
    SYDPeer *_peer;	// 8 = 0x8
    NSObject<OS_os_activity> *_activity;	// 16 = 0x10
    NSObject<OS_xpc_object> *_message;	// 24 = 0x18
    NSDictionary *_nsMessage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000591f3
@property(retain, nonatomic) NSDictionary *nsMessage; // @synthesize nsMessage=_nsMessage;
@property(retain, nonatomic) NSObject<OS_xpc_object> *message; // @synthesize message=_message;
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) SYDPeer *peer; // @synthesize peer=_peer;
- (void)sendReply:(id)arg1;	// IMP=0x0010000000058f13
@property(readonly, nonatomic) NSString *storeIdentifier;
@property(readonly, nonatomic) _Bool hasProposedAdditionalStores;
@property(readonly, nonatomic) NSString *proposedStoreIdentifier;
@property(readonly, nonatomic) NSString *proposedBundleIdentifier;
@property(readonly, nonatomic) id userInfo;
@property(readonly, nonatomic) NSString *messageName;
- (void)_translateMessageIfNecessary;	// IMP=0x0010000000058c5d
- (id)description;	// IMP=0x0010000000058c01
- (id)initWithPeer:(id)arg1 andMessage:(id)arg2 activity:(id)arg3;	// IMP=0x0010000000058b4a

@end

