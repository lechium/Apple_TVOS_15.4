//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRDExternalDeviceServerClientConnection, MRDIDSRemoteControlService, MRExternalDeviceTransportConnection;

@protocol MRDIDSRemoteControlServiceDelegate <NSObject>
- (MRDExternalDeviceServerClientConnection *)idsRemoteControlService:(MRDIDSRemoteControlService *)arg1 didAcceptConnection:(MRExternalDeviceTransportConnection *)arg2;
@end

