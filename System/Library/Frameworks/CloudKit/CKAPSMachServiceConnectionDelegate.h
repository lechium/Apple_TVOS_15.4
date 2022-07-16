//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/APSConnectionDelegate-Protocol.h>

@class APSConnection, CKAPSMachServiceConnectionKey, NSString;

@interface CKAPSMachServiceConnectionDelegate : NSObject <APSConnectionDelegate>
{
    APSConnection *_connection;	// 8 = 0x8
    CKAPSMachServiceConnectionKey *_key;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000feaeb
@property(copy, nonatomic) CKAPSMachServiceConnectionKey *key; // @synthesize key=_key;
@property(nonatomic) __weak APSConnection *connection; // @synthesize connection=_connection;
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x00000000000fe946
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x00000000000fe79e
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;	// IMP=0x00000000000fe5c4
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;	// IMP=0x00000000000fe421
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000fe247
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000000000fe0a4
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x00000000000fde92
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000000000fdcef
- (id)initWithConnection:(id)arg1 key:(id)arg2;	// IMP=0x00000000000fdc37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
