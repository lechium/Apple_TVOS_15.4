//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class NSString, TULocked;
@protocol OS_dispatch_queue, TUIDSBatchIDQueryController, TUIDSIDQueryController;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <TUIDSIDQueryController> _queryController;	// 16 = 0x10
    TULocked *_idsFaceTimeVideoStatuses;	// 24 = 0x18
    TULocked *_idsFaceTimeAudioStatuses;	// 32 = 0x20
    TULocked *_idsFaceTimeMultiwayStatuses;	// 40 = 0x28
    TULocked *_idsModernStatuses;	// 48 = 0x30
    TULocked *_idsWebCapableStatuses;	// 56 = 0x38
    id <TUIDSBatchIDQueryController> _batchQuerySearchVideoController;	// 64 = 0x40
    id <TUIDSBatchIDQueryController> _batchQuerySearchAudioController;	// 72 = 0x48
    id <TUIDSBatchIDQueryController> _batchQuerySearchMultiwayController;	// 80 = 0x50
    CDUnknownBlockType _batchQueryControllerCreationBlock;	// 88 = 0x58
}

+ (long long)idsServiceAvailabilityForDestination:(id)arg1 usingCache:(id)arg2;	// IMP=0x00000000000791c4
+ (_Bool)isAnyDestinationAvailableInDestinations:(id)arg1 usingCache:(id)arg2;	// IMP=0x0000000000078ffa
+ (id)sharedManager;	// IMP=0x0000000000077840
- (void).cxx_destruct;	// IMP=0x000000000007ad5c
@property(copy, nonatomic) CDUnknownBlockType batchQueryControllerCreationBlock; // @synthesize batchQueryControllerCreationBlock=_batchQueryControllerCreationBlock;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchMultiwayController; // @synthesize batchQuerySearchMultiwayController=_batchQuerySearchMultiwayController;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchAudioController; // @synthesize batchQuerySearchAudioController=_batchQuerySearchAudioController;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchVideoController; // @synthesize batchQuerySearchVideoController=_batchQuerySearchVideoController;
@property(readonly, nonatomic) TULocked *idsWebCapableStatuses; // @synthesize idsWebCapableStatuses=_idsWebCapableStatuses;
@property(readonly, nonatomic) TULocked *idsModernStatuses; // @synthesize idsModernStatuses=_idsModernStatuses;
@property(readonly, nonatomic) TULocked *idsFaceTimeMultiwayStatuses; // @synthesize idsFaceTimeMultiwayStatuses=_idsFaceTimeMultiwayStatuses;
@property(readonly, nonatomic) TULocked *idsFaceTimeAudioStatuses; // @synthesize idsFaceTimeAudioStatuses=_idsFaceTimeAudioStatuses;
@property(readonly, nonatomic) TULocked *idsFaceTimeVideoStatuses; // @synthesize idsFaceTimeVideoStatuses=_idsFaceTimeVideoStatuses;
@property(readonly, nonatomic) id <TUIDSIDQueryController> queryController; // @synthesize queryController=_queryController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)queryHasEndpointWithCapabilities:(id)arg1 forMultiwayDestinations:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000007a52d
- (void)queryHasWebOnlyEndpointsForDestinations:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000007a42c
- (void)filteredDestinationForMultiway:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000079968
- (void)handleIDSQueryResultWithDestinationStatus:(id)arg1 onService:(id)arg2;	// IMP=0x000000000007940e
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;	// IMP=0x0000000000079327
- (void)postStatusChangedNotification;	// IMP=0x000000000007926d
- (void)beginCachedQueryWithDestinations:(id)arg1 onService:(id)arg2;	// IMP=0x0000000000078ca3
- (void)beginCachedQueryWithDestinations:(id)arg1;	// IMP=0x0000000000078b83
- (void)beginBatchQueryWithDestinations:(id)arg1;	// IMP=0x0000000000078905
- (void)beginQueryWithDestination:(id)arg1 onService:(id)arg2;	// IMP=0x0000000000078761
- (void)beginQueryWithDestinations:(id)arg1;	// IMP=0x0000000000078641
- (void)cancelQueries;	// IMP=0x00000000000783ef
- (_Bool)isWebCapableFaceTimeAvailableForDestination:(id)arg1;	// IMP=0x000000000007835a
- (_Bool)isModernFaceTimeAvailableForDestination:(id)arg1;	// IMP=0x00000000000782c5
- (long long)faceTimeMultiwayAvailabilityForDestination:(id)arg1;	// IMP=0x000000000007824c
- (long long)faceTimeVideoAvailabilityForDestination:(id)arg1;	// IMP=0x00000000000781d3
- (long long)faceTimeAudioAvailabilityForDestination:(id)arg1;	// IMP=0x000000000007815a
- (_Bool)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)arg1;	// IMP=0x00000000000780e1
- (_Bool)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)arg1;	// IMP=0x0000000000078068
- (_Bool)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)arg1;	// IMP=0x0000000000077fef
- (_Bool)isFaceTimeMultiwayAvailableForItem:(id)arg1;	// IMP=0x0000000000077f99
- (_Bool)isFaceTimeAudioAvailableForItem:(id)arg1;	// IMP=0x0000000000077f43
- (_Bool)isFaceTimeVideoAvailableForItem:(id)arg1;	// IMP=0x0000000000077eed
- (void)dealloc;	// IMP=0x0000000000077c39
- (id)initWithQueryController:(id)arg1;	// IMP=0x000000000007791f
- (id)init;	// IMP=0x00000000000778c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

