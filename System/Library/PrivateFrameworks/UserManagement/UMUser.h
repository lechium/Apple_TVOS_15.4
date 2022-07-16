//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserManagement/NSCopying-Protocol.h>
#import <UserManagement/NSMutableCopying-Protocol.h>

@class NSArray, NSDate, NSError, NSString, NSURL;

@interface UMUser : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_displayName;	// 8 = 0x8
    _Bool _shouldFetchAttributes;	// 16 = 0x10
    _Bool _isLoginUser;	// 17 = 0x11
    _Bool _isAuditor;	// 18 = 0x12
    _Bool _isDisabled;	// 19 = 0x13
    _Bool _isTransientUser;	// 20 = 0x14
    _Bool _hasManagedCredentials;	// 21 = 0x15
    _Bool _hasDataToSync;	// 22 = 0x16
    unsigned int _uid;	// 24 = 0x18
    unsigned int _gid;	// 28 = 0x1c
    NSString *_alternateDSID;	// 32 = 0x20
    NSURL *_homeDirectoryURL;	// 40 = 0x28
    NSString *_username;	// 48 = 0x30
    NSString *_givenName;	// 56 = 0x38
    NSString *_familyName;	// 64 = 0x40
    NSURL *_photoURL;	// 72 = 0x48
    NSString *_userAuxiliaryString;	// 80 = 0x50
    id __photo;	// 88 = 0x58
    NSDate *_creationDate;	// 96 = 0x60
    NSDate *_lastLoginDate;	// 104 = 0x68
    NSDate *_lastRemoteAuthDate;	// 112 = 0x70
    unsigned long long _passcodeType;	// 120 = 0x78
    unsigned long long _passcodeLockGracePeriod;	// 128 = 0x80
    NSArray *_languages;	// 136 = 0x88
    unsigned long long _dataQuota;	// 144 = 0x90
    unsigned long long _dataUsed;	// 152 = 0x98
    NSError *_errorCausingLogout;	// 160 = 0xa0
    NSError *_debugErrorCausingLogout;	// 168 = 0xa8
    NSDate *_firstLoginStartDate;	// 176 = 0xb0
    NSDate *_firstLoginEndDate;	// 184 = 0xb8
    NSDate *_lastCachedLoginStartDate;	// 192 = 0xc0
    NSDate *_lastCachedLoginEndDate;	// 200 = 0xc8
    NSDate *_lastLogoutStartDate;	// 208 = 0xd0
    NSDate *_lastLogoutEndDate;	// 216 = 0xd8
}

+ (id)userWithUID:(unsigned int)arg1;	// IMP=0x0000000000014b83
- (void).cxx_destruct;	// IMP=0x0000000000016042
@property(copy, nonatomic) NSDate *lastLogoutEndDate; // @synthesize lastLogoutEndDate=_lastLogoutEndDate;
@property(copy, nonatomic) NSDate *lastLogoutStartDate; // @synthesize lastLogoutStartDate=_lastLogoutStartDate;
@property(copy, nonatomic) NSDate *lastCachedLoginEndDate; // @synthesize lastCachedLoginEndDate=_lastCachedLoginEndDate;
@property(copy, nonatomic) NSDate *lastCachedLoginStartDate; // @synthesize lastCachedLoginStartDate=_lastCachedLoginStartDate;
@property(copy, nonatomic) NSDate *firstLoginEndDate; // @synthesize firstLoginEndDate=_firstLoginEndDate;
@property(copy, nonatomic) NSDate *firstLoginStartDate; // @synthesize firstLoginStartDate=_firstLoginStartDate;
@property(copy, nonatomic) NSError *debugErrorCausingLogout; // @synthesize debugErrorCausingLogout=_debugErrorCausingLogout;
@property(retain, nonatomic) NSError *errorCausingLogout; // @synthesize errorCausingLogout=_errorCausingLogout;
@property(nonatomic) _Bool hasDataToSync; // @synthesize hasDataToSync=_hasDataToSync;
@property(nonatomic) unsigned long long dataUsed; // @synthesize dataUsed=_dataUsed;
@property(nonatomic) unsigned long long dataQuota; // @synthesize dataQuota=_dataQuota;
@property(nonatomic) _Bool hasManagedCredentials; // @synthesize hasManagedCredentials=_hasManagedCredentials;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(nonatomic) unsigned long long passcodeLockGracePeriod; // @synthesize passcodeLockGracePeriod=_passcodeLockGracePeriod;
@property(nonatomic) _Bool isTransientUser; // @synthesize isTransientUser=_isTransientUser;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool isAuditor; // @synthesize isAuditor=_isAuditor;
@property(nonatomic) _Bool isLoginUser; // @synthesize isLoginUser=_isLoginUser;
@property(nonatomic) unsigned long long passcodeType; // @synthesize passcodeType=_passcodeType;
@property(copy, nonatomic) NSDate *lastRemoteAuthDate; // @synthesize lastRemoteAuthDate=_lastRemoteAuthDate;
@property(copy, nonatomic) NSDate *lastLoginDate; // @synthesize lastLoginDate=_lastLoginDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) id _photo; // @synthesize _photo=__photo;
@property(copy, nonatomic) NSString *userAuxiliaryString; // @synthesize userAuxiliaryString=_userAuxiliaryString;
@property(copy, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSURL *homeDirectoryURL; // @synthesize homeDirectoryURL=_homeDirectoryURL;
@property(copy, nonatomic) NSString *alternateDSID; // @synthesize alternateDSID=_alternateDSID;
@property(nonatomic) unsigned int gid; // @synthesize gid=_gid;
@property(nonatomic) _Bool shouldFetchAttributes; // @synthesize shouldFetchAttributes=_shouldFetchAttributes;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
- (id)userPersonaFromIdentityString:(id)arg1;	// IMP=0x0000000000015e2b
@property(readonly, nonatomic) __weak NSArray *allUserPersonas;
- (_Bool)commitChangesWithError:(id *)arg1;	// IMP=0x0000000000015d60
- (_Bool)commitChanges;	// IMP=0x0000000000015d4c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015d18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015ce4
- (void)setPropertiesFromUser:(id)arg1;	// IMP=0x0000000000015885
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x00000000000156bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015653
- (id)description;	// IMP=0x0000000000015605
@property(readonly, nonatomic) unsigned long long userType;
@property(copy, nonatomic) NSString *displayName;
- (struct dqblk)_diskQuota;	// IMP=0x00000000000151fc
@property(readonly, nonatomic) double passcodeBackOffInterval;
- (_Bool)inFirstLoginSession;	// IMP=0x0000000000014fba
- (void)fetchAttributesIfNeeded;	// IMP=0x0000000000014d42
- (_Bool)fetchAttributesWithOutError:(id *)arg1;	// IMP=0x0000000000014bf4
- (id)init;	// IMP=0x0000000000014bb4

@end

