//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSMutableArray, NSNumber, NSString;

@interface ASFReceipt : NSObject
{
    _Bool _verbose;	// 8 = 0x8
    NSMutableArray *_mutableIAPs;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSData *_bundleIDData;	// 40 = 0x28
    NSString *_bundleVersion;	// 48 = 0x30
    NSString *_cancellationReason;	// 56 = 0x38
    NSDate *_creationDate;	// 64 = 0x40
    NSString *_developerID;	// 72 = 0x48
    NSString *_downloadID;	// 80 = 0x50
    NSString *_frAppVersion;	// 88 = 0x58
    NSNumber *_frToolVersion;	// 96 = 0x60
    NSDate *_expirationDate;	// 104 = 0x68
    NSString *_hwtype;	// 112 = 0x70
    NSString *_installerVersionID;	// 120 = 0x78
    NSNumber *_itemID;	// 128 = 0x80
    NSArray *_iaps;	// 136 = 0x88
    NSData *_opaqueDSIDData;	// 144 = 0x90
    NSString *_opaqueDSIDString;	// 152 = 0x98
    NSString *_organizationDisplayName;	// 160 = 0xa0
    NSString *_parentalControls;	// 168 = 0xa8
    NSDate *_purchaseDate;	// 176 = 0xb0
    NSString *_receiptType;	// 184 = 0xb8
    NSDate *_renewalDate;	// 192 = 0xc0
    NSData *_sha1;	// 200 = 0xc8
}

+ (id)receiptWithData:(id)arg1;	// IMP=0x0000000000001c9d
+ (id)receiptWithContentsOfFile:(id)arg1;	// IMP=0x0000000000001c50
+ (id)_receiptURLFromRecordWithBundleURL:(id)arg1;	// IMP=0x0000000000001b37
+ (id)_receiptURLForBundleURL:(id)arg1;	// IMP=0x0000000000001b25
+ (id)receiptFromBundleAtURL:(id)arg1;	// IMP=0x0000000000001a59
+ (id)receiptFromBundleAtPath:(id)arg1;	// IMP=0x00000000000019f4
- (void).cxx_destruct;	// IMP=0x00000000000048e3
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSData *sha1; // @synthesize sha1=_sha1;
@property(readonly) NSDate *renewalDate; // @synthesize renewalDate=_renewalDate;
@property(readonly) NSString *receiptType; // @synthesize receiptType=_receiptType;
@property(readonly) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(readonly) NSString *parentalControls; // @synthesize parentalControls=_parentalControls;
@property(readonly) NSString *organizationDisplayName; // @synthesize organizationDisplayName=_organizationDisplayName;
@property(readonly) NSString *opaqueDSIDString; // @synthesize opaqueDSIDString=_opaqueDSIDString;
@property(readonly) NSData *opaqueDSIDData; // @synthesize opaqueDSIDData=_opaqueDSIDData;
@property(readonly) NSArray *iaps; // @synthesize iaps=_iaps;
@property(readonly) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly) NSString *installerVersionID; // @synthesize installerVersionID=_installerVersionID;
@property(readonly) NSString *hwtype; // @synthesize hwtype=_hwtype;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly) NSNumber *frToolVersion; // @synthesize frToolVersion=_frToolVersion;
@property(readonly) NSString *frAppVersion; // @synthesize frAppVersion=_frAppVersion;
@property(readonly) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property(readonly) NSString *developerID; // @synthesize developerID=_developerID;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly) NSString *cancellationReason; // @synthesize cancellationReason=_cancellationReason;
@property(readonly) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly) NSData *bundleIDData; // @synthesize bundleIDData=_bundleIDData;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr *)arg1 onDate:(id)arg2;	// IMP=0x000000000000432f
- (_Bool)_setPoliciesForTrust:(struct __SecTrust *)arg1;	// IMP=0x000000000000419c
- (void)_parseTokens:(id)arg1;	// IMP=0x0000000000002e6e
- (id)_parseIAPTokens:(id)arg1;	// IMP=0x0000000000002a4b
- (id)_parseIAPsFromData:(id)arg1;	// IMP=0x00000000000028b9
- (_Bool)_parseReceiptFromMessage:(struct SecCmsMessageStr *)arg1;	// IMP=0x0000000000002708
- (struct SecCmsSignedDataStr *)_extractSignedDataFromMessage:(struct SecCmsMessageStr *)arg1;	// IMP=0x000000000000269e
- (_Bool)_decodeReceiptData:(id)arg1 toDecodedMessage:(inout struct SecCmsMessageStr **)arg2;	// IMP=0x0000000000002484
- (_Bool)_decodeIAPReceiptData:(id)arg1;	// IMP=0x0000000000002431
- (struct __CFArray *)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr *)arg1;	// IMP=0x0000000000002397
@property(readonly) NSString *receiptDataString;
@property(readonly) NSData *receiptData;
@property(readonly) _Bool isVPPLicensed;
@property(readonly) _Bool isRevoked;
@property(readonly) _Bool isDSIDless;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000001eef
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000000001cea

@end

