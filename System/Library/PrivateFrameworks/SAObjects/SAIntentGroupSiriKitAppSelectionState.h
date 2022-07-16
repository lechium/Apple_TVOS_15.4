//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SASyncAppIdentifyingInfo;

@interface SAIntentGroupSiriKitAppSelectionState <SAAceSerializable>
{
}

+ (id)siriKitAppSelectionStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003c35f
+ (id)siriKitAppSelectionState;	// IMP=0x000000000003c34d
@property(retain, nonatomic) SASyncAppIdentifyingInfo *requestedApp;
@property(copy, nonatomic) NSArray *eligibleApps;
@property(copy, nonatomic) NSString *appCorrectionState;
@property(copy, nonatomic) NSString *appConfirmationState;
- (id)encodedClassName;	// IMP=0x000000000003c340
- (id)groupIdentifier;	// IMP=0x000000000003c32c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

