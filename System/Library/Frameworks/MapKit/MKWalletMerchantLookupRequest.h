//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation, GEOMapServiceTraits, NSDate, NSNumber, NSString;

@interface MKWalletMerchantLookupRequest : NSObject
{
    NSString *_merchantCode;	// 8 = 0x8
    NSString *_rawMerchantCode;	// 16 = 0x10
    NSString *_relyingPartyIdentifier;	// 24 = 0x18
    NSString *_industryCategory;	// 32 = 0x20
    NSNumber *_industryCode;	// 40 = 0x28
    NSString *_paymentNetwork;	// 48 = 0x30
    NSDate *_transactionDate;	// 56 = 0x38
    GEOLocation *_location;	// 64 = 0x40
    NSString *_terminalId;	// 72 = 0x48
    NSString *_transactionCurrencyCode;	// 80 = 0x50
    unsigned long long _transactionType;	// 88 = 0x58
    NSString *_transactionId;	// 96 = 0x60
    NSString *_warsawMerchantDomain;	// 104 = 0x68
    NSString *_warsawMerchantName;	// 112 = 0x70
    NSString *_warsawMerchantId;	// 120 = 0x78
    NSString *_adamId;	// 128 = 0x80
    NSString *_merchantId;	// 136 = 0x88
    NSString *_merchantDoingBizAsName;	// 144 = 0x90
    NSString *_merchantEnhancedName;	// 152 = 0x98
    NSString *_merchantCity;	// 160 = 0xa0
    NSString *_merchantRawCity;	// 168 = 0xa8
    NSString *_merchantState;	// 176 = 0xb0
    NSString *_merchantRawState;	// 184 = 0xb8
    NSString *_merchantZip;	// 192 = 0xc0
    NSString *_merchantAddress;	// 200 = 0xc8
    NSString *_merchantRawAddress;	// 208 = 0xd0
    NSString *_merchantCountryCode;	// 216 = 0xd8
    NSString *_merchantType;	// 224 = 0xe0
    NSNumber *_merchantCleanConfidenceLevel;	// 232 = 0xe8
    NSString *_merchantAdditionalData;	// 240 = 0xf0
    NSString *_merchantCanl;	// 248 = 0xf8
    NSNumber *_fuzzyMatched;	// 256 = 0x100
    NSNumber *_coarseLocationUsed;	// 264 = 0x108
    GEOMapServiceTraits *_traits;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00000000001aacda
@property(copy, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(copy, nonatomic) NSNumber *coarseLocationUsed; // @synthesize coarseLocationUsed=_coarseLocationUsed;
@property(copy, nonatomic) NSNumber *fuzzyMatched; // @synthesize fuzzyMatched=_fuzzyMatched;
@property(copy, nonatomic) NSString *merchantCanl; // @synthesize merchantCanl=_merchantCanl;
@property(copy, nonatomic) NSString *merchantAdditionalData; // @synthesize merchantAdditionalData=_merchantAdditionalData;
@property(copy, nonatomic) NSNumber *merchantCleanConfidenceLevel; // @synthesize merchantCleanConfidenceLevel=_merchantCleanConfidenceLevel;
@property(copy, nonatomic) NSString *merchantType; // @synthesize merchantType=_merchantType;
@property(copy, nonatomic) NSString *merchantCountryCode; // @synthesize merchantCountryCode=_merchantCountryCode;
@property(copy, nonatomic) NSString *merchantRawAddress; // @synthesize merchantRawAddress=_merchantRawAddress;
@property(copy, nonatomic) NSString *merchantAddress; // @synthesize merchantAddress=_merchantAddress;
@property(copy, nonatomic) NSString *merchantZip; // @synthesize merchantZip=_merchantZip;
@property(copy, nonatomic) NSString *merchantRawState; // @synthesize merchantRawState=_merchantRawState;
@property(copy, nonatomic) NSString *merchantState; // @synthesize merchantState=_merchantState;
@property(copy, nonatomic) NSString *merchantRawCity; // @synthesize merchantRawCity=_merchantRawCity;
@property(copy, nonatomic) NSString *merchantCity; // @synthesize merchantCity=_merchantCity;
@property(copy, nonatomic) NSString *merchantEnhancedName; // @synthesize merchantEnhancedName=_merchantEnhancedName;
@property(copy, nonatomic) NSString *merchantDoingBizAsName; // @synthesize merchantDoingBizAsName=_merchantDoingBizAsName;
@property(copy, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(copy, nonatomic) NSString *adamId; // @synthesize adamId=_adamId;
@property(copy, nonatomic) NSString *warsawMerchantId; // @synthesize warsawMerchantId=_warsawMerchantId;
@property(copy, nonatomic) NSString *warsawMerchantName; // @synthesize warsawMerchantName=_warsawMerchantName;
@property(copy, nonatomic) NSString *warsawMerchantDomain; // @synthesize warsawMerchantDomain=_warsawMerchantDomain;
@property(copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(nonatomic) unsigned long long transactionType; // @synthesize transactionType=_transactionType;
@property(copy, nonatomic) NSString *transactionCurrencyCode; // @synthesize transactionCurrencyCode=_transactionCurrencyCode;
@property(copy, nonatomic) NSString *terminalId; // @synthesize terminalId=_terminalId;
@property(copy, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic) NSNumber *industryCode; // @synthesize industryCode=_industryCode;
@property(copy, nonatomic) NSString *industryCategory; // @synthesize industryCategory=_industryCategory;
@property(copy, nonatomic) NSString *relyingPartyIdentifier; // @synthesize relyingPartyIdentifier=_relyingPartyIdentifier;
@property(copy, nonatomic) NSString *rawMerchantCode; // @synthesize rawMerchantCode=_rawMerchantCode;
@property(copy, nonatomic) NSString *merchantCode; // @synthesize merchantCode=_merchantCode;

@end

