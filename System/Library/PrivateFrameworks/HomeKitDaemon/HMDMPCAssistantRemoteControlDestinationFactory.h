//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDMPCAssistantRemoteControlDestinationFactory-Protocol.h>

@interface HMDMPCAssistantRemoteControlDestinationFactory : NSObject <HMDMPCAssistantRemoteControlDestinationFactory>
{
}

- (id)mutableCopyForMPCDestination:(id)arg1;	// IMP=0x0000000000694142
- (void)resolveMPCDestination:(id)arg1 withHashedRouteIdentifiers:(id)arg2 audioRoutingInfo:(CDStruct_8024420c)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000694124
- (id)systemMediaApplicationDestination;	// IMP=0x000000000069410b
- (id)nowPlayingApplicationDestination;	// IMP=0x00000000006940f2

@end

