//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CEMPredicateCompositeBudget_Monitors
{
    NSArray *_payloadApps;	// 16 = 0x10
    NSArray *_payloadWebSites;	// 24 = 0x18
    NSArray *_payloadCategories;	// 32 = 0x20
    NSArray *_payloadCategoriesVersion2;	// 40 = 0x28
}

+ (id)buildRequiredOnly;	// IMP=0x00000000000964cc
+ (id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3;	// IMP=0x0000000000096418
+ (id)buildWithApps:(id)arg1 withWebSites:(id)arg2 withCategories:(id)arg3 withCategoriesVersion2:(id)arg4;	// IMP=0x000000000009633a
+ (id)allowedPayloadKeys;	// IMP=0x0000000000096276
- (void).cxx_destruct;	// IMP=0x0000000000096bcf
@property(copy, nonatomic) NSArray *payloadCategoriesVersion2; // @synthesize payloadCategoriesVersion2=_payloadCategoriesVersion2;
@property(copy, nonatomic) NSArray *payloadCategories; // @synthesize payloadCategories=_payloadCategories;
@property(copy, nonatomic) NSArray *payloadWebSites; // @synthesize payloadWebSites=_payloadWebSites;
@property(copy, nonatomic) NSArray *payloadApps; // @synthesize payloadApps=_payloadApps;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096a72
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000968f9
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000964e5

@end

