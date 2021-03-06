//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INFindDeviceAndPlaySoundIntentExport-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface INFindDeviceAndPlaySoundIntent <INFindDeviceAndPlaySoundIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000004194a2
- (id)parametersByName;	// IMP=0x0000000000419490
- (void)setVerb:(id)arg1;	// IMP=0x000000000041948a
- (id)verb;	// IMP=0x000000000041947d
- (void)setDomain:(id)arg1;	// IMP=0x0000000000419477
- (id)domain;	// IMP=0x000000000041946a
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000419403
- (id)_dictionaryRepresentation;	// IMP=0x00000000004192b8
- (void)setIsStopRequest:(id)arg1;	// IMP=0x0000000000419230
@property(readonly, copy, nonatomic) NSNumber *isStopRequest;
- (void)setDevices:(id)arg1;	// IMP=0x00000000004190ee
@property(readonly, copy, nonatomic) NSArray *devices;
- (id)initWithDevices:(id)arg1 isStopRequest:(id)arg2;	// IMP=0x0000000000418fdd
- (id)_categoryVerb;	// IMP=0x0000000000418fd0
- (long long)_intentCategory;	// IMP=0x0000000000418fc5
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000418f53
- (id)_metadata;	// IMP=0x0000000000418f03
- (id)_typedBackingStore;	// IMP=0x0000000000418eac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

