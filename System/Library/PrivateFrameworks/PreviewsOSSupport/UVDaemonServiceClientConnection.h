//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PreviewsOSSupport/UVBSClientConnection-Protocol.h>
#import <PreviewsOSSupport/UVDaemonServiceProtocol-Protocol.h>

@class NSString;

@interface UVDaemonServiceClientConnection <UVBSClientConnection, UVDaemonServiceProtocol>
{
}

+ (id)create:(id *)arg1;	// IMP=0x0000000000003240
- (oneway void)grantExecutePermissionToBundleID:(id)arg1 usingData:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003488
- (oneway void)copyURLToBundleID:(id)arg1 usingData:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000033af
- (oneway void)sendPreviewServiceMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000032f2
- (void)activate;	// IMP=0x000000000000327c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

