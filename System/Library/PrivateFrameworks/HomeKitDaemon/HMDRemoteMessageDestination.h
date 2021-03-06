//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageDestination.h>

#import <HomeKitDaemon/HMDRemoteAddressable-Protocol.h>

@class NSString;

@interface HMDRemoteMessageDestination : HMFMessageDestination <HMDRemoteAddressable>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000774e0f
+ (id)allMessageDestinations;	// IMP=0x0000000000774d67
- (id)remoteDestinationString;	// IMP=0x0000000000774cbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

