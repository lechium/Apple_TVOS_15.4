//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface DSIDRecord : NSObject <NSCopying>
{
    _Bool _dirty;	// 8 = 0x8
    int _nextReconcileTimestamp;	// 12 = 0xc
    _Bool _accountIsT13;	// 16 = 0x10
    _Bool _accountIsU13;	// 17 = 0x11
    _Bool _accountIsU18;	// 18 = 0x12
    _Bool _accountAgeUnknown;	// 19 = 0x13
    _Bool _isActiveRecord;	// 20 = 0x14
    _Bool _isRestrictedByEU_GDPR;	// 21 = 0x15
    _Bool _isDPIDManatee;	// 22 = 0x16
    _Bool _isPlaceholderAccount;	// 23 = 0x17
    _Bool _lastSentPersonalizedAdsStatus;	// 24 = 0x18
    _Bool _notificationRequired;	// 25 = 0x19
    int _personalizedAdsTimestamp;	// 28 = 0x1c
    int _segmentDataTimestamp;	// 32 = 0x20
    int _lastSentSegmentDataTimestamp;	// 36 = 0x24
    int _lastSegmentServedTimestamp;	// 40 = 0x28
    int _lastSentPersonalizedAdsTimestamp;	// 44 = 0x2c
    NSString *_DSID;	// 48 = 0x30
    NSString *_iCloudDSID;	// 56 = 0x38
    NSString *_segmentData;	// 64 = 0x40
    NSString *_iAdIDBeforeReset;	// 72 = 0x48
    NSMutableDictionary *_ADIDRecords;	// 80 = 0x50
    long long _lastJingleAccountStatus;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000010121
@property(nonatomic) _Bool notificationRequired; // @synthesize notificationRequired=_notificationRequired;
@property(nonatomic) int lastSentPersonalizedAdsTimestamp; // @synthesize lastSentPersonalizedAdsTimestamp=_lastSentPersonalizedAdsTimestamp;
@property(nonatomic) _Bool lastSentPersonalizedAdsStatus; // @synthesize lastSentPersonalizedAdsStatus=_lastSentPersonalizedAdsStatus;
@property(nonatomic) long long lastJingleAccountStatus; // @synthesize lastJingleAccountStatus=_lastJingleAccountStatus;
@property(retain) NSMutableDictionary *ADIDRecords; // @synthesize ADIDRecords=_ADIDRecords;
@property(nonatomic) _Bool isPlaceholderAccount; // @synthesize isPlaceholderAccount=_isPlaceholderAccount;
@property(nonatomic) int lastSegmentServedTimestamp; // @synthesize lastSegmentServedTimestamp=_lastSegmentServedTimestamp;
@property(nonatomic) int lastSentSegmentDataTimestamp; // @synthesize lastSentSegmentDataTimestamp=_lastSentSegmentDataTimestamp;
@property(nonatomic) int segmentDataTimestamp; // @synthesize segmentDataTimestamp=_segmentDataTimestamp;
@property(nonatomic) int personalizedAdsTimestamp; // @synthesize personalizedAdsTimestamp=_personalizedAdsTimestamp;
@property(nonatomic) _Bool isDPIDManatee; // @synthesize isDPIDManatee=_isDPIDManatee;
@property(retain, nonatomic) NSString *iAdIDBeforeReset; // @synthesize iAdIDBeforeReset=_iAdIDBeforeReset;
@property(readonly, nonatomic) _Bool isRestrictedByEU_GDPR; // @synthesize isRestrictedByEU_GDPR=_isRestrictedByEU_GDPR;
@property(retain, nonatomic) NSString *segmentData; // @synthesize segmentData=_segmentData;
@property(readonly, nonatomic) _Bool isActiveRecord; // @synthesize isActiveRecord=_isActiveRecord;
@property(nonatomic) _Bool accountAgeUnknown; // @synthesize accountAgeUnknown=_accountAgeUnknown;
@property(nonatomic) _Bool accountIsU18; // @synthesize accountIsU18=_accountIsU18;
@property(nonatomic) _Bool accountIsU13; // @synthesize accountIsU13=_accountIsU13;
@property(nonatomic) _Bool accountIsT13; // @synthesize accountIsT13=_accountIsT13;
@property(retain, nonatomic) NSString *iCloudDSID; // @synthesize iCloudDSID=_iCloudDSID;
@property(retain, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(nonatomic) int nextReconcileTimestamp;
- (_Bool)shouldSendNotification;	// IMP=0x000000000000fd9a
@property(nonatomic) _Bool dirty;
- (_Bool)iAdIDRecordsDirty;	// IMP=0x000000000000fc7b
@property(readonly, nonatomic) _Bool isRestrictedByApple;
- (id)idAccountsDictionaryRepresentation;	// IMP=0x000000000000f8ac
- (id)_parseItunesFlags;	// IMP=0x000000000000f484
- (id)dictionaryRepresentation;	// IMP=0x000000000000ee10
- (id)description;	// IMP=0x000000000000ed6a
- (id)encryptedIDForClientType:(long long)arg1;	// IMP=0x000000000000eca5
- (void)setID:(id)arg1 forClientType:(long long)arg2;	// IMP=0x000000000000eba4
- (id)idForClientType:(long long)arg1;	// IMP=0x000000000000ead8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e792
- (id)initWithDSID:(id)arg1 serializedRecord:(id)arg2 version:(int)arg3;	// IMP=0x000000000000e07f

@end

