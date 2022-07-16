//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDInstallConfigurationOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x002000000004e1c4
+ (id)requiredEntitlements;	// IMP=0x001000000004e1ac
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000004e17a
+ (id)_intersectionAliasToFeatures;	// IMP=0x001000000005039c
- (unsigned long long)queueGroup;	// IMP=0x001000000004e1b9
- (id)_intersectionFeatureForPayloadRestrictionKey:(id)arg1;	// IMP=0x0010000000050452
- (id)_applyHeuristicsToRestrictions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000050228
- (id)_mapMCRestrictionsFromPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f191
- (_Bool)_installRestrictionsPayload:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004eea8
- (void)_rollbackProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004ec38
- (_Bool)_installProfile:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004e8a7
- (void)runWithRequest:(id)arg1;	// IMP=0x001000000004e2ee

@end
