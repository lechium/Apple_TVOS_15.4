//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMApplicationLoginItemsDeclaration <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadAutoLaunchedApplicationDictionaryManaged;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withAutoLaunchedApplicationDictionaryManaged:(id)arg2;	// IMP=0x0000000000020386
+ (id)buildWithIdentifier:(id)arg1 withAutoLaunchedApplicationDictionaryManaged:(id)arg2;	// IMP=0x000000000002026d
+ (id)restrictionPayloadKeys;	// IMP=0x0000000000020225
+ (id)allowedPayloadKeys;	// IMP=0x0000000000020182
+ (id)profileType;	// IMP=0x0000000000020175
+ (id)registeredIdentifier;	// IMP=0x0000000000020168
+ (id)registeredClassName;	// IMP=0x000000000002015b
- (void).cxx_destruct;	// IMP=0x00000000000207c6
@property(copy, nonatomic) NSArray *payloadAutoLaunchedApplicationDictionaryManaged; // @synthesize payloadAutoLaunchedApplicationDictionaryManaged=_payloadAutoLaunchedApplicationDictionaryManaged;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002073f
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000020630
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002049f
- (id)assetReferences;	// IMP=0x0000000000020260
- (int)activationLevel;	// IMP=0x0000000000020255
- (_Bool)mustBeSupervised;	// IMP=0x000000000002024d
- (_Bool)multipleAllowed;	// IMP=0x0000000000020245

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

