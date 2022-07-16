//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFObject-Protocol.h>

@class MPCAssistantMutableRemoteControlDestination, NSArray, NSString;
@protocol HMDMPCAssistantRemoteControlDestinationFactory;

@interface HMDMPCResolveDestinationOperation : HMFOperation <HMFLogging, HMFObject>
{
    _Bool _forceSingleGroup;	// 8 = 0x8
    MPCAssistantMutableRemoteControlDestination *_resolvedDestination;	// 16 = 0x10
    NSArray *_hashedRouteIDs;	// 24 = 0x18
    CDUnknownBlockType _resolveDestinationCompletionBlock;	// 32 = 0x20
    id <HMDMPCAssistantRemoteControlDestinationFactory> _remoteControlDestinationFactory;	// 40 = 0x28
    long long _mediaApplicationDestination;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0000000000623d85
+ (id)shortDescription;	// IMP=0x0000000000623d78
- (void).cxx_destruct;	// IMP=0x000000000062383e
@property(readonly, nonatomic) _Bool forceSingleGroup; // @synthesize forceSingleGroup=_forceSingleGroup;
@property(readonly, nonatomic) long long mediaApplicationDestination; // @synthesize mediaApplicationDestination=_mediaApplicationDestination;
@property(retain) id <HMDMPCAssistantRemoteControlDestinationFactory> remoteControlDestinationFactory; // @synthesize remoteControlDestinationFactory=_remoteControlDestinationFactory;
@property(copy) CDUnknownBlockType resolveDestinationCompletionBlock; // @synthesize resolveDestinationCompletionBlock=_resolveDestinationCompletionBlock;
@property(readonly, copy, nonatomic) NSArray *hashedRouteIDs; // @synthesize hashedRouteIDs=_hashedRouteIDs;
@property(retain) MPCAssistantMutableRemoteControlDestination *resolvedDestination; // @synthesize resolvedDestination=_resolvedDestination;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000623513
- (void)main;	// IMP=0x000000000062327f
- (id)initWithHashedRouteIDs:(id)arg1 mediaApplicationDestination:(long long)arg2 forceSingleGroup:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 remoteControlDestinationFactory:(id)arg5;	// IMP=0x0000000000623171
- (id)initWithHashedRouteIDs:(id)arg1 mediaApplicationDestination:(long long)arg2 forceSingleGroup:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000006230d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

