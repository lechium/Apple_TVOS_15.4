//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSBuyParams, AppleIDAuthorizationRequestInfo, NSData, NSDictionary, NSNumber, NSString, NSURL, StoreKitClient;
@protocol ASDStoreKitPaymentProtocol;

@interface InAppTransactionTask
{
    AMSBuyParams *_buyParams;	// 8 = 0x8
    id <ASDStoreKitPaymentProtocol> _paymentDelegate;	// 16 = 0x10
    AppleIDAuthorizationRequestInfo *_siwaAuthorizationInfo;	// 24 = 0x18
    _Bool _excludeReceiptFromRequest;	// 32 = 0x20
    _Bool _forceAuthentication;	// 33 = 0x21
    _Bool _hideConfirmation;	// 34 = 0x22
    _Bool _privacyAcknowledgementRequired;	// 35 = 0x23
    _Bool _storeOriginated;	// 36 = 0x24
    _Bool _simulateAskToBuy;	// 37 = 0x25
    long long _apiVersion;	// 40 = 0x28
    StoreKitClient *_client;	// 48 = 0x30
    NSString *_logKey;	// 56 = 0x38
    NSString *_productIdentifier;	// 64 = 0x40
    unsigned long long _quantity;	// 72 = 0x48
    NSDictionary *_additionalBuyParams;	// 80 = 0x50
    NSString *_appAccountToken;	// 88 = 0x58
    NSString *_applicationUsername;	// 96 = 0x60
    NSDictionary *_customBuyParams;	// 104 = 0x68
    NSString *_discountIdentifier;	// 112 = 0x70
    NSString *_discountKeyIdentifier;	// 120 = 0x78
    NSString *_discountNonceString;	// 128 = 0x80
    NSString *_discountSignature;	// 136 = 0x88
    NSNumber *_discountTimestamp;	// 144 = 0x90
    NSString *_partnerIdentifier;	// 152 = 0x98
    NSString *_partnerTransactionIdentifier;	// 160 = 0xa0
    NSData *_requestData;	// 168 = 0xa8
    NSURL *_receiptInstallURL;	// 176 = 0xb0
    NSDictionary *_transaction;	// 184 = 0xb8
    NSDictionary *_response;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0020000000152a95
@property(retain, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(retain, nonatomic) NSDictionary *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSURL *receiptInstallURL; // @synthesize receiptInstallURL=_receiptInstallURL;
@property(nonatomic) _Bool simulateAskToBuy; // @synthesize simulateAskToBuy=_simulateAskToBuy;
@property(nonatomic, getter=isStoreOriginated) _Bool storeOriginated; // @synthesize storeOriginated=_storeOriginated;
@property(nonatomic) _Bool privacyAcknowledgementRequired; // @synthesize privacyAcknowledgementRequired=_privacyAcknowledgementRequired;
@property(nonatomic) _Bool hideConfirmation; // @synthesize hideConfirmation=_hideConfirmation;
@property(nonatomic) _Bool forceAuthentication; // @synthesize forceAuthentication=_forceAuthentication;
@property(nonatomic) _Bool excludeReceiptFromRequest; // @synthesize excludeReceiptFromRequest=_excludeReceiptFromRequest;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) NSString *partnerTransactionIdentifier; // @synthesize partnerTransactionIdentifier=_partnerTransactionIdentifier;
@property(retain, nonatomic) NSString *partnerIdentifier; // @synthesize partnerIdentifier=_partnerIdentifier;
@property(retain, nonatomic) NSNumber *discountTimestamp; // @synthesize discountTimestamp=_discountTimestamp;
@property(retain, nonatomic) NSString *discountSignature; // @synthesize discountSignature=_discountSignature;
@property(retain, nonatomic) NSString *discountNonceString; // @synthesize discountNonceString=_discountNonceString;
@property(retain, nonatomic) NSString *discountKeyIdentifier; // @synthesize discountKeyIdentifier=_discountKeyIdentifier;
@property(retain, nonatomic) NSString *discountIdentifier; // @synthesize discountIdentifier=_discountIdentifier;
@property(retain, nonatomic) NSDictionary *customBuyParams; // @synthesize customBuyParams=_customBuyParams;
@property(retain, nonatomic) NSString *applicationUsername; // @synthesize applicationUsername=_applicationUsername;
@property(retain, nonatomic) NSString *appAccountToken; // @synthesize appAccountToken=_appAccountToken;
@property(retain, nonatomic) NSDictionary *additionalBuyParams; // @synthesize additionalBuyParams=_additionalBuyParams;
@property(readonly, nonatomic) unsigned long long quantity; // @synthesize quantity=_quantity;
@property(readonly, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(readonly, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, copy, nonatomic) StoreKitClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
- (id)_processPurchaseResult:(id)arg1 authorizationResult:(id)arg2;	// IMP=0x0010000000151963
- (id)_urlTypeForURL:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x001000000015185e
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001515be
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000151354
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001510ea
- (id)_authenticateWithClientInfo:(id)arg1 accountInfo:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000150b0f
- (id)_buyParams;	// IMP=0x001000000014f9af
- (void)main;	// IMP=0x001000000014ddb3
- (id)initWithProductIdentifier:(id)arg1 quantity:(unsigned long long)arg2 client:(id)arg3 apiVersion:(long long)arg4 paymentDelegate:(id)arg5 siwaAuthorizationInfo:(id)arg6;	// IMP=0x001000000014dc2f
- (id)initWithBuyParams:(id)arg1 client:(id)arg2 apiVersion:(long long)arg3 paymentDelegate:(id)arg4 siwaAuthorizationInfo:(id)arg5;	// IMP=0x001000000014daf7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
