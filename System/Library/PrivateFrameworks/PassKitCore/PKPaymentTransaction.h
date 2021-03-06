//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSDecimalNumber, NSDictionary, NSNumber, NSOrderedSet, NSSet, NSString, NSTimeZone, NSURL, NSUUID, PKAccountEvent, PKCreditInstallmentPlan, PKCreditInstallmentPlanPayment, PKCurrencyAmount, PKMerchant, PKPaymentTransactionFees, PKPaymentTransactionForeignExchangeInformation, PKPaymentTransactionRewards, PKTransactionAuthenticationContext, PKTransactionReleasedData;

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    _Bool _coarseLocation;	// 8 = 0x8
    _Bool _enRoute;	// 9 = 0x9
    _Bool _shouldSuppressDate;	// 10 = 0xa
    _Bool _suppressNotifications;	// 11 = 0xb
    _Bool _deviceScoreIdentifiersRequired;	// 12 = 0xc
    _Bool _deviceScoreIdentifiersSubmitted;	// 13 = 0xd
    _Bool _processedForLocation;	// 14 = 0xe
    _Bool _processedForMerchantCleanup;	// 15 = 0xf
    _Bool _requiresMerchantReprocessing;	// 16 = 0x10
    _Bool _processedForStations;	// 17 = 0x11
    _Bool _hasAssociatedPaymentApplication;	// 18 = 0x12
    _Bool _hasNotificationServiceData;	// 19 = 0x13
    _Bool _originatedByDevice;	// 20 = 0x14
    _Bool _fuzzyMatched;	// 21 = 0x15
    _Bool _hasAdditionalOffers;	// 22 = 0x16
    _Bool _isCloudKitArchived;	// 23 = 0x17
    NSString *_identifier;	// 24 = 0x18
    NSString *_serviceIdentifier;	// 32 = 0x20
    NSString *_paymentHash;	// 40 = 0x28
    NSDecimalNumber *_amount;	// 48 = 0x30
    NSDecimalNumber *_subtotalAmount;	// 56 = 0x38
    NSString *_currencyCode;	// 64 = 0x40
    NSArray *_amounts;	// 72 = 0x48
    NSArray *_plans;	// 80 = 0x50
    NSDate *_transactionDate;	// 88 = 0x58
    NSDate *_transactionStatusChangedDate;	// 96 = 0x60
    NSDate *_expirationDate;	// 104 = 0x68
    PKMerchant *_merchant;	// 112 = 0x70
    NSString *_locality;	// 120 = 0x78
    NSString *_administrativeArea;	// 128 = 0x80
    NSTimeZone *_timeZone;	// 136 = 0x88
    NSDate *_locationDate;	// 144 = 0x90
    double _locationLatitude;	// 152 = 0x98
    double _locationLongitude;	// 160 = 0xa0
    double _locationAltitude;	// 168 = 0xa8
    double _locationHorizontalAccuracy;	// 176 = 0xb0
    double _locationVerticalAccuracy;	// 184 = 0xb8
    long long _transitType;	// 192 = 0xc0
    unsigned long long _transitModifiers;	// 200 = 0xc8
    NSString *_stationCodeProvider;	// 208 = 0xd0
    NSNumber *_cityCode;	// 216 = 0xd8
    NSData *_startStationCode;	// 224 = 0xe0
    NSString *_startStation;	// 232 = 0xe8
    double _startStationLatitude;	// 240 = 0xf0
    double _startStationLongitude;	// 248 = 0xf8
    NSData *_endStationCode;	// 256 = 0x100
    NSString *_endStation;	// 264 = 0x108
    double _endStationLatitude;	// 272 = 0x110
    double _endStationLongitude;	// 280 = 0x118
    long long _adjustmentType;	// 288 = 0x120
    long long _adjustmentTypeReason;	// 296 = 0x128
    long long _peerPaymentType;	// 304 = 0x130
    long long _accountType;	// 312 = 0x138
    NSString *_peerPaymentCounterpartHandle;	// 320 = 0x140
    NSString *_peerPaymentMemo;	// 328 = 0x148
    NSDate *_peerPaymentMessageReceivedDate;	// 336 = 0x150
    PKPaymentTransactionForeignExchangeInformation *_foreignExchangeInformation;	// 344 = 0x158
    PKPaymentTransactionFees *_fees;	// 352 = 0x160
    NSDecimalNumber *_primaryFundingSourceAmount;	// 360 = 0x168
    NSString *_primaryFundingSourceCurrencyCode;	// 368 = 0x170
    NSDecimalNumber *_secondaryFundingSourceAmount;	// 376 = 0x178
    NSString *_secondaryFundingSourceCurrencyCode;	// 384 = 0x180
    long long _secondaryFundingSourceNetwork;	// 392 = 0x188
    NSString *_secondaryFundingSourceDPANSuffix;	// 400 = 0x190
    NSString *_secondaryFundingSourceFPANIdentifier;	// 408 = 0x198
    NSString *_secondaryFundingSourceDescription;	// 416 = 0x1a0
    long long _secondaryFundingSourceType;	// 424 = 0x1a8
    NSUUID *_requestDeviceScoreIdentifier;	// 432 = 0x1b0
    NSUUID *_sendDeviceScoreIdentifier;	// 440 = 0x1b8
    NSString *_merchantProvidedTitle;	// 448 = 0x1c0
    NSString *_merchantProvidedDescription;	// 456 = 0x1c8
    NSDecimalNumber *_rewardsTotalAmount;	// 464 = 0x1d0
    NSString *_rewardsTotalCurrencyCode;	// 472 = 0x1d8
    unsigned long long _rewardsEligibilityReason;	// 480 = 0x1e0
    PKPaymentTransactionRewards *_rewards;	// 488 = 0x1e8
    unsigned long long _cardType;	// 496 = 0x1f0
    NSString *_accountIdentifier;	// 504 = 0x1f8
    NSString *_altDSID;	// 512 = 0x200
    NSString *_lifecycleIdentifier;	// 520 = 0x208
    NSString *_authNetworkData;	// 528 = 0x210
    NSString *_clearingNetworkData;	// 536 = 0x218
    NSString *_cardIdentifier;	// 544 = 0x220
    NSString *_dpanIdentifier;	// 552 = 0x228
    NSString *_cardNumberSuffix;	// 560 = 0x230
    NSString *_referenceIdentifier;	// 568 = 0x238
    unsigned long long _suppressBehavior;	// 576 = 0x240
    long long _redemptionType;	// 584 = 0x248
    NSSet *_questions;	// 592 = 0x250
    NSOrderedSet *_servicingEvents;	// 600 = 0x258
    NSArray *_payments;	// 608 = 0x260
    PKAccountEvent *_redemptionEvent;	// 616 = 0x268
    PKCreditInstallmentPlanPayment *_installmentPayment;	// 624 = 0x270
    PKCreditInstallmentPlan *_installmentPlan;	// 632 = 0x278
    NSDictionary *_metadata;	// 640 = 0x280
    NSDate *_lastMerchantReprocessingDate;	// 648 = 0x288
    NSString *_receiptProviderIdentifier;	// 656 = 0x290
    NSString *_receiptIdentifier;	// 664 = 0x298
    NSURL *_receiptProviderURL;	// 672 = 0x2a0
    NSString *_barcodeIdentifier;	// 680 = 0x2a8
    PKTransactionAuthenticationContext *_authenticationContext;	// 688 = 0x2b0
    NSString *_primaryFundingSourceDescription;	// 696 = 0x2b8
    NSDecimalNumber *_nominalAmount;	// 704 = 0x2c0
    NSArray *_awards;	// 712 = 0x2c8
    NSArray *_amountModifiers;	// 720 = 0x2d0
    NSString *_issueReportIdentifier;	// 728 = 0x2d8
    long long _transactionStatus;	// 736 = 0x2e0
    long long _transactionType;	// 744 = 0x2e8
    long long _technologyType;	// 752 = 0x2f0
    unsigned long long _transactionSource;	// 760 = 0x2f8
    long long _transactionDeclinedReason;	// 768 = 0x300
    unsigned long long _updateReasons;	// 776 = 0x308
    NSString *_transactionSourceIdentifier;	// 784 = 0x310
    PKTransactionReleasedData *_releasedData;	// 792 = 0x318
}

+ (id)formattedBalanceAdjustmentForAmount:(id)arg1 transactionType:(long long)arg2 adjustmentType:(long long)arg3 peerPaymentType:(long long)arg4;	// IMP=0x00000000003a3b66
+ (id)transactionNotificationStatusStringForTransaction:(id)arg1 personContact:(id)arg2;	// IMP=0x00000000003a31e4
+ (_Bool)updateReasonIsInitialDownload:(unsigned long long)arg1;	// IMP=0x00000000003a28a2
+ (id)recordNamePrefix;	// IMP=0x00000000003a0b54
+ (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1 serviceIdentifier:(id)arg2;	// IMP=0x00000000003a09cd
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000039befd
+ (id)paymentTransactionWithSource:(unsigned long long)arg1 dictionary:(id)arg2 unitDictionary:(id)arg3 balanceLabelDictionary:(id)arg4 planLabelDictionary:(id)arg5 hasNotificationServiceData:(_Bool)arg6;	// IMP=0x00000000003979f8
+ (id)paymentTransactionWithSource:(unsigned long long)arg1;	// IMP=0x00000000003979c0
+ (id)paymentTransactionFromSource:(unsigned long long)arg1;	// IMP=0x00000000003a5be1
- (void).cxx_destruct;	// IMP=0x00000000003a5822
@property(retain, nonatomic) PKTransactionReleasedData *releasedData; // @synthesize releasedData=_releasedData;
@property(nonatomic) _Bool isCloudKitArchived; // @synthesize isCloudKitArchived=_isCloudKitArchived;
@property(copy, nonatomic) NSString *transactionSourceIdentifier; // @synthesize transactionSourceIdentifier=_transactionSourceIdentifier;
@property(readonly, nonatomic) unsigned long long updateReasons; // @synthesize updateReasons=_updateReasons;
@property(nonatomic) long long transactionDeclinedReason; // @synthesize transactionDeclinedReason=_transactionDeclinedReason;
@property(nonatomic) unsigned long long transactionSource; // @synthesize transactionSource=_transactionSource;
@property(nonatomic) long long technologyType; // @synthesize technologyType=_technologyType;
@property(nonatomic) long long transactionType; // @synthesize transactionType=_transactionType;
@property(nonatomic) long long transactionStatus; // @synthesize transactionStatus=_transactionStatus;
@property(copy, nonatomic) NSString *issueReportIdentifier; // @synthesize issueReportIdentifier=_issueReportIdentifier;
@property(retain, nonatomic) NSArray *amountModifiers; // @synthesize amountModifiers=_amountModifiers;
@property(retain, nonatomic) NSArray *awards; // @synthesize awards=_awards;
@property(nonatomic) _Bool hasAdditionalOffers; // @synthesize hasAdditionalOffers=_hasAdditionalOffers;
@property(copy, nonatomic) NSDecimalNumber *nominalAmount; // @synthesize nominalAmount=_nominalAmount;
@property(copy, nonatomic) NSString *primaryFundingSourceDescription; // @synthesize primaryFundingSourceDescription=_primaryFundingSourceDescription;
@property(retain, nonatomic) PKTransactionAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(copy, nonatomic) NSString *barcodeIdentifier; // @synthesize barcodeIdentifier=_barcodeIdentifier;
@property(retain, nonatomic) NSURL *receiptProviderURL; // @synthesize receiptProviderURL=_receiptProviderURL;
@property(copy, nonatomic) NSString *receiptIdentifier; // @synthesize receiptIdentifier=_receiptIdentifier;
@property(copy, nonatomic) NSString *receiptProviderIdentifier; // @synthesize receiptProviderIdentifier=_receiptProviderIdentifier;
@property(nonatomic, getter=isFuzzyMatched) _Bool fuzzyMatched; // @synthesize fuzzyMatched=_fuzzyMatched;
@property(nonatomic) _Bool originatedByDevice; // @synthesize originatedByDevice=_originatedByDevice;
@property(nonatomic) _Bool hasNotificationServiceData; // @synthesize hasNotificationServiceData=_hasNotificationServiceData;
@property(nonatomic) _Bool hasAssociatedPaymentApplication; // @synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication;
@property(nonatomic) _Bool processedForStations; // @synthesize processedForStations=_processedForStations;
@property(retain, nonatomic) NSDate *lastMerchantReprocessingDate; // @synthesize lastMerchantReprocessingDate=_lastMerchantReprocessingDate;
@property(nonatomic) _Bool requiresMerchantReprocessing; // @synthesize requiresMerchantReprocessing=_requiresMerchantReprocessing;
@property(nonatomic) _Bool processedForMerchantCleanup; // @synthesize processedForMerchantCleanup=_processedForMerchantCleanup;
@property(nonatomic) _Bool processedForLocation; // @synthesize processedForLocation=_processedForLocation;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) PKCreditInstallmentPlan *installmentPlan; // @synthesize installmentPlan=_installmentPlan;
@property(retain, nonatomic) PKCreditInstallmentPlanPayment *installmentPayment; // @synthesize installmentPayment=_installmentPayment;
@property(retain, nonatomic) PKAccountEvent *redemptionEvent; // @synthesize redemptionEvent=_redemptionEvent;
@property(retain, nonatomic) NSArray *payments; // @synthesize payments=_payments;
@property(retain, nonatomic) NSOrderedSet *servicingEvents; // @synthesize servicingEvents=_servicingEvents;
@property(retain, nonatomic) NSSet *questions; // @synthesize questions=_questions;
@property(nonatomic) long long redemptionType; // @synthesize redemptionType=_redemptionType;
@property(nonatomic) unsigned long long suppressBehavior; // @synthesize suppressBehavior=_suppressBehavior;
@property(copy, nonatomic) NSString *referenceIdentifier; // @synthesize referenceIdentifier=_referenceIdentifier;
@property(retain, nonatomic) NSString *cardNumberSuffix; // @synthesize cardNumberSuffix=_cardNumberSuffix;
@property(retain, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
@property(retain, nonatomic) NSString *cardIdentifier; // @synthesize cardIdentifier=_cardIdentifier;
@property(copy, nonatomic) NSString *clearingNetworkData; // @synthesize clearingNetworkData=_clearingNetworkData;
@property(copy, nonatomic) NSString *authNetworkData; // @synthesize authNetworkData=_authNetworkData;
@property(copy, nonatomic) NSString *lifecycleIdentifier; // @synthesize lifecycleIdentifier=_lifecycleIdentifier;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) PKPaymentTransactionRewards *rewards; // @synthesize rewards=_rewards;
@property(nonatomic) unsigned long long rewardsEligibilityReason; // @synthesize rewardsEligibilityReason=_rewardsEligibilityReason;
@property(retain, nonatomic) NSString *rewardsTotalCurrencyCode; // @synthesize rewardsTotalCurrencyCode=_rewardsTotalCurrencyCode;
@property(retain, nonatomic) NSDecimalNumber *rewardsTotalAmount; // @synthesize rewardsTotalAmount=_rewardsTotalAmount;
@property(copy, nonatomic) NSString *merchantProvidedDescription; // @synthesize merchantProvidedDescription=_merchantProvidedDescription;
@property(copy, nonatomic) NSString *merchantProvidedTitle; // @synthesize merchantProvidedTitle=_merchantProvidedTitle;
@property(nonatomic) _Bool deviceScoreIdentifiersSubmitted; // @synthesize deviceScoreIdentifiersSubmitted=_deviceScoreIdentifiersSubmitted;
@property(nonatomic) _Bool deviceScoreIdentifiersRequired; // @synthesize deviceScoreIdentifiersRequired=_deviceScoreIdentifiersRequired;
@property(copy, nonatomic) NSUUID *sendDeviceScoreIdentifier; // @synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier;
@property(copy, nonatomic) NSUUID *requestDeviceScoreIdentifier; // @synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier;
@property(nonatomic) long long secondaryFundingSourceType; // @synthesize secondaryFundingSourceType=_secondaryFundingSourceType;
@property(copy, nonatomic) NSString *secondaryFundingSourceDescription; // @synthesize secondaryFundingSourceDescription=_secondaryFundingSourceDescription;
@property(copy, nonatomic) NSString *secondaryFundingSourceFPANIdentifier; // @synthesize secondaryFundingSourceFPANIdentifier=_secondaryFundingSourceFPANIdentifier;
@property(copy, nonatomic) NSString *secondaryFundingSourceDPANSuffix; // @synthesize secondaryFundingSourceDPANSuffix=_secondaryFundingSourceDPANSuffix;
@property(nonatomic) long long secondaryFundingSourceNetwork; // @synthesize secondaryFundingSourceNetwork=_secondaryFundingSourceNetwork;
@property(copy, nonatomic) NSString *secondaryFundingSourceCurrencyCode; // @synthesize secondaryFundingSourceCurrencyCode=_secondaryFundingSourceCurrencyCode;
@property(copy, nonatomic) NSDecimalNumber *secondaryFundingSourceAmount; // @synthesize secondaryFundingSourceAmount=_secondaryFundingSourceAmount;
@property(copy, nonatomic) NSString *primaryFundingSourceCurrencyCode; // @synthesize primaryFundingSourceCurrencyCode=_primaryFundingSourceCurrencyCode;
@property(copy, nonatomic) NSDecimalNumber *primaryFundingSourceAmount; // @synthesize primaryFundingSourceAmount=_primaryFundingSourceAmount;
@property(retain, nonatomic) PKPaymentTransactionFees *fees; // @synthesize fees=_fees;
@property(retain, nonatomic) PKPaymentTransactionForeignExchangeInformation *foreignExchangeInformation; // @synthesize foreignExchangeInformation=_foreignExchangeInformation;
@property(copy, nonatomic) NSDate *peerPaymentMessageReceivedDate; // @synthesize peerPaymentMessageReceivedDate=_peerPaymentMessageReceivedDate;
@property(copy, nonatomic) NSString *peerPaymentMemo; // @synthesize peerPaymentMemo=_peerPaymentMemo;
@property(copy, nonatomic) NSString *peerPaymentCounterpartHandle; // @synthesize peerPaymentCounterpartHandle=_peerPaymentCounterpartHandle;
@property(nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(nonatomic) long long peerPaymentType; // @synthesize peerPaymentType=_peerPaymentType;
@property(nonatomic) long long adjustmentTypeReason; // @synthesize adjustmentTypeReason=_adjustmentTypeReason;
@property(nonatomic) long long adjustmentType; // @synthesize adjustmentType=_adjustmentType;
@property(nonatomic) _Bool suppressNotifications; // @synthesize suppressNotifications=_suppressNotifications;
@property(nonatomic) _Bool shouldSuppressDate; // @synthesize shouldSuppressDate=_shouldSuppressDate;
@property(nonatomic) double endStationLongitude; // @synthesize endStationLongitude=_endStationLongitude;
@property(nonatomic) double endStationLatitude; // @synthesize endStationLatitude=_endStationLatitude;
@property(copy, nonatomic) NSString *endStation; // @synthesize endStation=_endStation;
@property(copy, nonatomic) NSData *endStationCode; // @synthesize endStationCode=_endStationCode;
@property(nonatomic) double startStationLongitude; // @synthesize startStationLongitude=_startStationLongitude;
@property(nonatomic) double startStationLatitude; // @synthesize startStationLatitude=_startStationLatitude;
@property(copy, nonatomic) NSString *startStation; // @synthesize startStation=_startStation;
@property(copy, nonatomic) NSData *startStationCode; // @synthesize startStationCode=_startStationCode;
@property(copy, nonatomic) NSNumber *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *stationCodeProvider; // @synthesize stationCodeProvider=_stationCodeProvider;
@property(nonatomic) _Bool enRoute; // @synthesize enRoute=_enRoute;
@property(nonatomic) unsigned long long transitModifiers; // @synthesize transitModifiers=_transitModifiers;
@property(nonatomic) long long transitType; // @synthesize transitType=_transitType;
@property(nonatomic, getter=isCoarseLocation) _Bool coarseLocation; // @synthesize coarseLocation=_coarseLocation;
@property(nonatomic) double locationVerticalAccuracy; // @synthesize locationVerticalAccuracy=_locationVerticalAccuracy;
@property(nonatomic) double locationHorizontalAccuracy; // @synthesize locationHorizontalAccuracy=_locationHorizontalAccuracy;
@property(nonatomic) double locationAltitude; // @synthesize locationAltitude=_locationAltitude;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(retain, nonatomic) NSDate *locationDate; // @synthesize locationDate=_locationDate;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) PKMerchant *merchant; // @synthesize merchant=_merchant;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSDate *transactionStatusChangedDate; // @synthesize transactionStatusChangedDate=_transactionStatusChangedDate;
@property(copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(copy, nonatomic) NSArray *plans; // @synthesize plans=_plans;
@property(copy, nonatomic) NSArray *amounts; // @synthesize amounts=_amounts;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *subtotalAmount; // @synthesize subtotalAmount=_subtotalAmount;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *paymentHash; // @synthesize paymentHash=_paymentHash;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_latestDisputeEvent;	// IMP=0x00000000003a4ad4
@property(readonly, nonatomic) unsigned long long disputeType;
@property(readonly, nonatomic) unsigned long long disputeStatus;
@property(readonly, nonatomic) _Bool reviewed;
- (void)answeredQuestion:(unsigned long long)arg1;	// IMP=0x00000000003a4751
@property(readonly, nonatomic) NSSet *unansweredQuestions;
@property(readonly, nonatomic) NSSet *answeredQuestionsOnThisDevice;
- (id)formattedTransitTransactionMessageForPass:(id)arg1 suppressNoChargeAmount:(_Bool)arg2;	// IMP=0x00000000003a4130
- (id)_commutePlanInformationForPass:(id)arg1;	// IMP=0x00000000003a3e8c
@property(retain, nonatomic) CLLocation *endStationLocation;
@property(retain, nonatomic) CLLocation *startStationLocation;
- (id)_formatBalanceAdjustmentAmount:(id)arg1;	// IMP=0x00000000003a3d11
@property(readonly, nonatomic) NSString *formattedBalanceAdjustmentAbsoluteAmount;
@property(readonly, nonatomic) NSString *formattedBalanceAdjustmentSubtotalAmount;
@property(readonly, nonatomic) NSString *formattedBalanceAdjustmentAmount;
- (id)formattedAwards;	// IMP=0x00000000003a378a
@property(readonly, nonatomic) PKCurrencyAmount *rewardsTotalCurrencyAmount;
@property(readonly, nonatomic) PKCurrencyAmount *secondaryFundingSourceCurrencyAmount;
@property(readonly, nonatomic) PKCurrencyAmount *primaryFundingSourceCurrencyAmount;
@property(readonly, nonatomic) PKCurrencyAmount *subtotalCurrencyAmount;
@property(readonly, nonatomic) PKCurrencyAmount *nominalCurrencyAmount;
@property(readonly, nonatomic) PKCurrencyAmount *currencyAmount;
- (id)_transitSubtypeString;	// IMP=0x00000000003a300c
- (id)_transactionTypeString;	// IMP=0x00000000003a2f08
- (id)_transactionSourceString;	// IMP=0x00000000003a2e6c
- (id)description;	// IMP=0x00000000003a2b34
- (id)updateReasonsDescription;	// IMP=0x00000000003a28be
- (void)addUpdateReasons:(unsigned long long)arg1;	// IMP=0x00000000003a28b1
@property(readonly, nonatomic) _Bool updateReasonIsInitialDownload;
@property(readonly, nonatomic) NSString *associatedReceiptUniqueID;
@property(readonly, nonatomic) _Bool fullyProcessed;
@property(readonly, nonatomic) _Bool supportsFuzzyMatching;
@property(readonly, nonatomic) _Bool hasBackingData;
@property(readonly, nonatomic) _Bool hasEffectiveTransactionSource;
@property(readonly, nonatomic) unsigned long long effectiveTransactionSource;
@property(readonly, nonatomic) _Bool hasTransactionSource;
@property(nonatomic) long long peerPaymentStatus;
@property(readonly, nonatomic) CLLocation *preferredLocation;
@property(retain, nonatomic) CLLocation *location;
@property(readonly, nonatomic) __weak NSString *displayLocation;
- (_Bool)isZeroTransaction;	// IMP=0x00000000003a208b
- (id)_preformattedStringForMultipleAmounts;	// IMP=0x00000000003a1e4e
- (id)_preformattedStringForMultiplePlans;	// IMP=0x00000000003a1c8b
- (id)formattedStringForMultipleAmountsForPass:(id)arg1;	// IMP=0x00000000003a1a24
- (id)dictionaryOfFormattedMultipleAmountTotalsByRealCurrency;	// IMP=0x00000000003a1405
- (id)transactionAmountsForMultipleAmounts;	// IMP=0x00000000003a0b6f
- (id)primaryIdentifier;	// IMP=0x00000000003a0b61
- (unsigned long long)itemType;	// IMP=0x00000000003a0b49
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;	// IMP=0x00000000003a09a0
- (void)_encodeServerDataWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;	// IMP=0x000000000039fd7e
- (void)_encodeDeviceDataWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;	// IMP=0x000000000039f4d7
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;	// IMP=0x000000000039f469
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;	// IMP=0x000000000039e14a
- (id)initWithCloudStoreCoder:(id)arg1;	// IMP=0x000000000039e033
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000039d591
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000039bf05
- (_Bool)hasCloudArchivableDeviceData;	// IMP=0x000000000039bd69
- (_Bool)isCloudArchivableDeviceDataEqual:(id)arg1;	// IMP=0x000000000039babe
- (_Bool)isEqualToPaymentTransaction:(id)arg1;	// IMP=0x000000000039b23f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000039b1d7
- (unsigned long long)hash;	// IMP=0x000000000039aae1
- (id)dictionaryRepresentation;	// IMP=0x000000000039930a
- (id)init;	// IMP=0x0000000000399276

@end

