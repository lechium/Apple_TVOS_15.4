//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

@interface IDSRealTimeEncryptionIdentity : NSObject
{
    NSString *_groupID;	// 8 = 0x8
    NSString *_sessionID;	// 16 = 0x10
    NSString *_participantID;	// 24 = 0x18
    NSString *_fromID;	// 32 = 0x20
    NSData *_pushToken;	// 40 = 0x28
    NSDate *_expirationDate;	// 48 = 0x30
    _Bool _isPublicKeyDistributed;	// 56 = 0x38
    NSData *_publicIdentityData;	// 64 = 0x40
    _Bool _isTestRunning;	// 72 = 0x48
    struct __SecKey *_fullIdentity;	// 80 = 0x50
    struct __SecKey *_publicIdentity;	// 88 = 0x58
    long long _wrapMode;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000687050
@property(nonatomic) _Bool isTestRunning; // @synthesize isTestRunning=_isTestRunning;
@property(nonatomic) long long wrapMode; // @synthesize wrapMode=_wrapMode;
@property(copy, nonatomic) NSData *publicIdentityData; // @synthesize publicIdentityData=_publicIdentityData;
@property(nonatomic) struct __SecKey *publicIdentity; // @synthesize publicIdentity=_publicIdentity;
@property(nonatomic) struct __SecKey *fullIdentity; // @synthesize fullIdentity=_fullIdentity;
@property(nonatomic) _Bool isPublicKeyDistributed; // @synthesize isPublicKeyDistributed=_isPublicKeyDistributed;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
@property(copy, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) NSData *publicKeyData;
- (void)dealloc;	// IMP=0x0010000000686610

@end

