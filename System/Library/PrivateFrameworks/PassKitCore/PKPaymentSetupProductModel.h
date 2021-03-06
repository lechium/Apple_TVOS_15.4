//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PKPaymentSetupProductModel : NSObject
{
    NSMutableDictionary *_paymentSetupProducts;	// 8 = 0x8
    NSMutableArray *_allSections;	// 16 = 0x10
    NSString *_localizedTitle;	// 24 = 0x18
    NSString *_localizedSubtitle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000413925
@property(readonly, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id)description;	// IMP=0x000000000041380e
- (void)_updatePaymentSetupProduct:(id)arg1 displayName:(id)arg2 localizedDescription:(id)arg3 partnerDictionary:(id)arg4 productIdentifier:(id)arg5 paymentOptions:(id)arg6 termsURL:(id)arg7 provisioningMethods:(id)arg8 readerModeMetadata:(id)arg9 requiredFields:(id)arg10 imageAssets:(id)arg11 minimumOSVersion:(id)arg12 region:(id)arg13 hsa2Requirement:(id)arg14 suppressPendingPurchases:(id)arg15 supportedTransitNetworkIdentifiers:(id)arg16 onboardingItems:(id)arg17 actionBaseURL:(id)arg18 productState:(id)arg19 minimumProductAge:(id)arg20 maximumProductAge:(id)arg21 minimumTargetUserSupportedAge:(id)arg22 associatedStoreIdentifiers:(id)arg23 appLaunchURL:(id)arg24 regionIdentifier:(id)arg25 type:(id)arg26 localizedNotificationTitle:(id)arg27 localizedNotificationMessage:(id)arg28 clientInfo:(id)arg29 searchTerms:(id)arg30 featureIdentifier:(id)arg31;	// IMP=0x0000000000412e04
- (id)_paymentSetupProductsWithPartners:(id)arg1 products:(id)arg2 existingPaymentSetupProducts:(id)arg3;	// IMP=0x0000000000411004
- (void)updateWithPaymentSetupProductsResponse:(id)arg1 productsFilter:(CDUnknownBlockType)arg2 sectionsFilter:(CDUnknownBlockType)arg3;	// IMP=0x00000000004102aa
- (id)productsForFeatureIdentifier:(unsigned long long)arg1;	// IMP=0x00000000004100a1
- (id)productsForProductIdentifiers:(id)arg1;	// IMP=0x000000000040fec2
- (id)setupProductsOfType:(unsigned long long)arg1;	// IMP=0x000000000040fcb9
- (id)productForProductIdentifier:(id)arg1;	// IMP=0x000000000040fca3
- (id)allSetupProducts;	// IMP=0x000000000040fc8d
- (void)setPaymentSetupProducts:(id)arg1;	// IMP=0x000000000040fc2e
- (void)removePaymentSetupProducts:(id)arg1;	// IMP=0x000000000040faa5
- (void)updatePaymentSetupProducts:(id)arg1;	// IMP=0x000000000040f90a
- (void)setAllSections:(id)arg1;	// IMP=0x000000000040f8dd
- (id)allSections;	// IMP=0x000000000040f8bf
- (id)init;	// IMP=0x000000000040f84a

@end

