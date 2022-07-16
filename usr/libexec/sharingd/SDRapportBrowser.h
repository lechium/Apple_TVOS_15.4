//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, RPPeopleDiscovery, SDXPCHelperConnection;

__attribute__((visibility("hidden")))
@interface SDRapportBrowser : NSObject
{
    long long _startCount;	// 8 = 0x8
    NSMutableDictionary *_cachedNodes;	// 16 = 0x10
    RPPeopleDiscovery *_peopleDiscovery;	// 24 = 0x18
    SDXPCHelperConnection *_helperConnection;	// 32 = 0x20
}

+ (id)deviceTypeFromModelIdentifier:(id)arg1;	// IMP=0x00200000000860e7
+ (id)deviceImageNameFromModelIdentifier:(id)arg1;	// IMP=0x0010000000085bf9
+ (_Bool)deviceIsEligibleForAirDrop:(id)arg1;	// IMP=0x0010000000085b15
+ (_Bool)personHasAirDropEligibleDevice:(id)arg1;	// IMP=0x00100000000859c4
+ (id)identifiersForPerson:(id)arg1;	// IMP=0x00100000000858ca
+ (unsigned long long)defaultSFNodeFlags;	// IMP=0x0010000000084f6f
+ (void)updateRangingMeasurementForDevice:(id)arg1 inNode:(struct __SFNode *)arg2;	// IMP=0x0010000000084ee3
+ (void)updateRangingMeasurementForPerson:(id)arg1 inNode:(struct __SFNode *)arg2;	// IMP=0x0010000000084c23
+ (id)sharedRapportBrowser;	// IMP=0x00100000000836b0
- (void).cxx_destruct;	// IMP=0x0020000000086223
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
- (struct __SFNode *)createSFNodeFromMyRPDevice:(id)arg1;	// IMP=0x001000000008576e
- (struct __SFNode *)createSFNodeFromRPPerson:(id)arg1;	// IMP=0x00100000000854c6
- (struct __SFNode *)createSFNodeFromCNContacts:(id)arg1 identifier:(id)arg2 device:(id)arg3;	// IMP=0x0010000000084f7a
- (void)resumeHandoffAdvertisingIfAppropriate;	// IMP=0x0010000000084b90
- (void)stopHandoffAdvertisingIfAppropriate;	// IMP=0x0000000000084afd
- (_Bool)shouldStopHandoffAdvertising;	// IMP=0x0010000000084ae2
- (id)assertionIdentifier;	// IMP=0x0010000000084aba
- (void)removeNodesForPerson:(id)arg1;	// IMP=0x0010000000084a3f
- (void)addOrUpdateNodesForPerson:(id)arg1 withChanges:(unsigned int)arg2;	// IMP=0x00100000000844d1
@property(readonly, copy) NSArray *nodes;
- (void)removeObservers;	// IMP=0x0010000000084468
- (void)addObservers;	// IMP=0x0010000000084401
- (void)contactsChanged:(id)arg1;	// IMP=0x0010000000084273
- (void)_stop;	// IMP=0x00100000000841ca
- (void)_start;	// IMP=0x00100000000838a8
- (void)stop;	// IMP=0x00100000000837ea
- (void)start;	// IMP=0x0010000000083734
- (id)init;	// IMP=0x0010000000083705

@end

