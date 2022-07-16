//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMDeviceHomeScreenLayoutDeclaration <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadDock;	// 16 = 0x10
    NSArray *_payloadPages;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withPages:(id)arg2;	// IMP=0x000000000003ae09
+ (id)buildWithIdentifier:(id)arg1 withDock:(id)arg2 withPages:(id)arg3;	// IMP=0x000000000003acc4
+ (id)restrictionPayloadKeys;	// IMP=0x000000000003ac7c
+ (id)allowedPayloadKeys;	// IMP=0x000000000003abce
+ (id)profileType;	// IMP=0x000000000003abc1
+ (id)registeredIdentifier;	// IMP=0x000000000003abb4
+ (id)registeredClassName;	// IMP=0x000000000003aba7
- (void).cxx_destruct;	// IMP=0x000000000003b598
@property(copy, nonatomic) NSArray *payloadPages; // @synthesize payloadPages=_payloadPages;
@property(copy, nonatomic) NSArray *payloadDock; // @synthesize payloadDock=_payloadDock;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b4bf
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000003b12a
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003af22
- (id)assetReferences;	// IMP=0x000000000003acb7
- (int)activationLevel;	// IMP=0x000000000003acac
- (_Bool)mustBeSupervised;	// IMP=0x000000000003aca4
- (_Bool)multipleAllowed;	// IMP=0x000000000003ac9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
