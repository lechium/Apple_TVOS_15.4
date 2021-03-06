//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSaveParkingLocationIntentExport-Protocol.h>

@class CLPlacemark, NSString;

@interface INSaveParkingLocationIntent <INSaveParkingLocationIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x00000000004718be
- (id)parametersByName;	// IMP=0x00000000004718ac
- (void)setVerb:(id)arg1;	// IMP=0x00000000004718a6
- (id)verb;	// IMP=0x0000000000471899
- (void)setDomain:(id)arg1;	// IMP=0x0000000000471893
- (id)domain;	// IMP=0x0000000000471886
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000471720
- (id)_dictionaryRepresentation;	// IMP=0x00000000004715d5
- (void)setParkingNote:(id)arg1;	// IMP=0x000000000047154a
@property(readonly, copy, nonatomic) NSString *parkingNote;
- (void)setParkingLocation:(id)arg1;	// IMP=0x000000000047144c
@property(readonly, copy, nonatomic) CLPlacemark *parkingLocation;
- (id)initWithParkingLocation:(id)arg1 parkingNote:(id)arg2;	// IMP=0x000000000047133b
- (void)_setMetadata:(id)arg1;	// IMP=0x00000000004712c9
- (id)_metadata;	// IMP=0x0000000000471279
- (id)_typedBackingStore;	// IMP=0x0000000000471222

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

