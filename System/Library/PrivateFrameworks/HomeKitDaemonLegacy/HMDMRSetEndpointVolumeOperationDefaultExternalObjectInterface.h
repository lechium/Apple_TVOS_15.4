//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDMRSetEndpointVolumeOperationExternalObjectInterface-Protocol.h>

@interface HMDMRSetEndpointVolumeOperationDefaultExternalObjectInterface : HMFObject <HMDMRSetEndpointVolumeOperationExternalObjectInterface>
{
}

- (id)getMRAVEndpointOutputDeviceUIDVolumeControlCapabilitiesForEndpoint:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3;	// IMP=0x000000000023cb93
- (id)setMRAVOutputDeviceVolume:(float)arg1 endpoint:(id)arg2 outputDeviceUID:(id)arg3 queue:(id)arg4;	// IMP=0x000000000023ca8f
- (id)copyMRAVEndpointOutputDevices:(id)arg1;	// IMP=0x000000000023ca6a
- (id)createAssistantConnection;	// IMP=0x000000000023ca51
- (id)createAssistantDiscovery;	// IMP=0x000000000023ca38

@end

