//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLLocationPushServiceExtensionRemoteXPCInterface-Protocol.h>

@interface CLLocationPushServiceExtensionRemoteContext <CLLocationPushServiceExtensionRemoteXPCInterface>
{
}

- (void)serviceExtensionPerformCleanup;	// IMP=0x00000000000650a2
- (void)serviceExtensionWillTerminate;	// IMP=0x0000000000064f11
- (void)didReceiveLocationPushPayload:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064d80
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;	// IMP=0x0000000000064c51

@end

