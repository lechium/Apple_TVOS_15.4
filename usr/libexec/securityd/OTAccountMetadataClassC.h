//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString, OTAccountMetadataClassCAccountSettings;

__attribute__((visibility("hidden")))
@interface OTAccountMetadataClassC : PBCodable
{
    long long _epoch;	// 8 = 0x8
    unsigned long long _lastHealthCheckup;	// 16 = 0x10
    NSString *_altDSID;	// 24 = 0x18
    int _attemptedJoin;	// 32 = 0x20
    int _cdpState;	// 36 = 0x24
    int _icloudAccountState;	// 40 = 0x28
    NSString *_peerID;	// 48 = 0x30
    NSData *_secureElementIdentity;	// 56 = 0x38
    OTAccountMetadataClassCAccountSettings *_settings;	// 64 = 0x40
    NSData *_syncingPolicy;	// 72 = 0x48
    NSMutableArray *_tlkSharesForVouchedIdentitys;	// 80 = 0x50
    int _trustState;	// 88 = 0x58
    NSData *_voucher;	// 96 = 0x60
    NSData *_voucherSignature;	// 104 = 0x68
    _Bool _isInheritedAccount;	// 112 = 0x70
    _Bool _warmedEscrowCache;	// 113 = 0x71
    _Bool _warnedTooManyPeers;	// 114 = 0x72
    struct {
        unsigned int epoch:1;
        unsigned int lastHealthCheckup:1;
        unsigned int attemptedJoin:1;
        unsigned int cdpState:1;
        unsigned int icloudAccountState:1;
        unsigned int trustState:1;
        unsigned int isInheritedAccount:1;
        unsigned int warmedEscrowCache:1;
        unsigned int warnedTooManyPeers:1;
    } _has;	// 116 = 0x74
}

+ (Class)tlkSharesForVouchedIdentityType;	// IMP=0x0020000000028786
+ (id)loadFromKeychainForContainer:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009f333
+ (_Bool)deleteFromKeychainForContainer:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009eff8
- (void).cxx_destruct;	// IMP=0x00200000000286ef
@property(retain, nonatomic) OTAccountMetadataClassCAccountSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) _Bool warnedTooManyPeers; // @synthesize warnedTooManyPeers=_warnedTooManyPeers;
@property(nonatomic) _Bool warmedEscrowCache; // @synthesize warmedEscrowCache=_warmedEscrowCache;
@property(nonatomic) _Bool isInheritedAccount; // @synthesize isInheritedAccount=_isInheritedAccount;
@property(retain, nonatomic) NSData *secureElementIdentity; // @synthesize secureElementIdentity=_secureElementIdentity;
@property(retain, nonatomic) NSMutableArray *tlkSharesForVouchedIdentitys; // @synthesize tlkSharesForVouchedIdentitys=_tlkSharesForVouchedIdentitys;
@property(retain, nonatomic) NSData *voucherSignature; // @synthesize voucherSignature=_voucherSignature;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) NSData *syncingPolicy; // @synthesize syncingPolicy=_syncingPolicy;
@property(nonatomic) unsigned long long lastHealthCheckup; // @synthesize lastHealthCheckup=_lastHealthCheckup;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000028214
- (unsigned long long)hash;	// IMP=0x0010000000027fcc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000027c18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000027813
- (void)copyTo:(id)arg1;	// IMP=0x001000000002755a
- (void)writeTo:(id)arg1;	// IMP=0x0010000000027218
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000269c0
- (id)dictionaryRepresentation;	// IMP=0x0010000000026410
- (id);	// IMP=0x0010000000026361
@property(readonly, nonatomic) _Bool hasSettings;
@property(nonatomic) _Bool hasWarnedTooManyPeers;
@property(nonatomic) _Bool hasWarmedEscrowCache;
@property(nonatomic) _Bool hasIsInheritedAccount;
@property(readonly, nonatomic) _Bool hasSecureElementIdentity;
- (id)tlkSharesForVouchedIdentityAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000026235
- (unsigned long long)tlkSharesForVouchedIdentitysCount;	// IMP=0x0010000000026218
- (void)addTlkSharesForVouchedIdentity:(id)arg1;	// IMP=0x00100000000261ae
- (void)clearTlkSharesForVouchedIdentitys;	// IMP=0x0010000000026191
@property(readonly, nonatomic) _Bool hasVoucherSignature;
@property(readonly, nonatomic) _Bool hasVoucher;
@property(readonly, nonatomic) _Bool hasSyncingPolicy;
- (int)StringAsCdpState:(id)arg1;	// IMP=0x00100000000260c0
- (id)cdpStateAsString:(int)arg1;	// IMP=0x001000000002605a
@property(nonatomic) _Bool hasCdpState;
@property(nonatomic) int cdpState; // @synthesize cdpState=_cdpState;
- (int)StringAsAttemptedJoin:(id)arg1;	// IMP=0x0010000000025f5f
- (id)attemptedJoinAsString:(int)arg1;	// IMP=0x0010000000025ef9
@property(nonatomic) _Bool hasAttemptedJoin;
@property(nonatomic) int attemptedJoin; // @synthesize attemptedJoin=_attemptedJoin;
@property(nonatomic) _Bool hasLastHealthCheckup;
- (int)StringAsTrustState:(id)arg1;	// IMP=0x0010000000025db4
- (id)trustStateAsString:(int)arg1;	// IMP=0x0010000000025d4e
@property(nonatomic) _Bool hasTrustState;
@property(nonatomic) int trustState; // @synthesize trustState=_trustState;
@property(readonly, nonatomic) _Bool hasAltDSID;
@property(nonatomic) _Bool hasEpoch;
- (int)StringAsIcloudAccountState:(id)arg1;	// IMP=0x0010000000025bd8
- (id)icloudAccountStateAsString:(int)arg1;	// IMP=0x0010000000025b58
@property(nonatomic) _Bool hasIcloudAccountState;
@property(nonatomic) int icloudAccountState; // @synthesize icloudAccountState=_icloudAccountState;
@property(readonly, nonatomic) _Bool hasPeerID;
- (id)parsedSecureElementIdentity;	// IMP=0x001000000009ef83
- (void)setOctagonSecureElementIdentity:(id)arg1;	// IMP=0x001000000009ee9e
- (id)getTLKSharesPairedWithVoucher;	// IMP=0x001000000009ec89
- (void)setTLKSharesPairedWithVoucher:(id)arg1;	// IMP=0x001000000009ea44
- (id)getTPSyncingPolicy;	// IMP=0x001000000009e9a4
- (void)setTPSyncingPolicy:(id)arg1;	// IMP=0x001000000009e8e4
- (_Bool)saveToKeychainForContainer:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009e1cc

@end

