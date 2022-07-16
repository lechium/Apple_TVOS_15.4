//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountGoogleDeclaration_CommunicationServiceRules
{
    CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers *_payloadDefaultServiceHandlers;	// 16 = 0x10
}

+ (id)buildRequiredOnly;	// IMP=0x0000000000004650
+ (id)buildWithDefaultServiceHandlers:(id)arg1;	// IMP=0x00000000000045fa
+ (id)allowedPayloadKeys;	// IMP=0x0000000000004557
- (void).cxx_destruct;	// IMP=0x000000000000498a
@property(copy, nonatomic) CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers *payloadDefaultServiceHandlers; // @synthesize payloadDefaultServiceHandlers=_payloadDefaultServiceHandlers;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004903
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000047f4
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004669

@end
