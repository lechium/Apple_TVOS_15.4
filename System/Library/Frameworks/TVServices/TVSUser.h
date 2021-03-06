//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/NSCopying-Protocol.h>
#import <TVServices/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface TVSUser : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_localAlias;	// 8 = 0x8
    _Bool _isHomeUserSharingSameiTunesAccount;	// 16 = 0x10
    _Bool _allowsAccess;	// 17 = 0x11
    NSString *_iTunesAltDSID;	// 24 = 0x18
    NSString *_homeUserID;	// 32 = 0x20
    NSString *_homeID;	// 40 = 0x28
    NSNumber *_iTunesDSID;	// 48 = 0x30
    NSString *_fullName;	// 56 = 0x38
    NSString *_firstName;	// 64 = 0x40
    NSString *_lastName;	// 72 = 0x48
    NSString *_pseudonymID;	// 80 = 0x50
    NSString *_iTunesUsername;	// 88 = 0x58
}

+ (id)accountPropertyKeyForGameCenterWithUserIdentifier:(id)arg1;	// IMP=0x0000000000008da7
+ (void)setActiveUsers:(id)arg1;	// IMP=0x0000000000008c66
+ (void)fetchActiveUsersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008a74
+ (id)activeUsers;	// IMP=0x00000000000087ff
+ (void)fetchAllUsersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008643
+ (id)allUsers;	// IMP=0x000000000000845c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000810b
+ (void)initialize;	// IMP=0x0000000000006e98
- (void).cxx_destruct;	// IMP=0x0000000000008e5d
@property(copy, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(nonatomic) _Bool allowsAccess; // @synthesize allowsAccess=_allowsAccess;
@property(readonly, nonatomic) _Bool isHomeUserSharingSameiTunesAccount; // @synthesize isHomeUserSharingSameiTunesAccount=_isHomeUserSharingSameiTunesAccount;
@property(copy, nonatomic) NSString *pseudonymID; // @synthesize pseudonymID=_pseudonymID;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) NSNumber *iTunesDSID; // @synthesize iTunesDSID=_iTunesDSID;
@property(readonly, nonatomic) NSString *homeID; // @synthesize homeID=_homeID;
@property(readonly, nonatomic) NSString *homeUserID; // @synthesize homeUserID=_homeUserID;
@property(readonly, nonatomic) NSString *iTunesAltDSID; // @synthesize iTunesAltDSID=_iTunesAltDSID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000824b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008113
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008100
- (id)debugDescription;	// IMP=0x0000000000007f73
- (id)description;	// IMP=0x0000000000007e73
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007d1e
- (unsigned long long)hash;	// IMP=0x0000000000007c91
@property(retain, nonatomic) NSString *localAlias;
@property(readonly, nonatomic) NSString *effectiveIdentifier;
- (void)_writeAccountProperty:(id)arg1 forKeyPrefix:(id)arg2;	// IMP=0x0000000000007740
- (void)_finishInitFromAccount:(id)arg1;	// IMP=0x00000000000073dc
- (id)initWithHomeUserID:(id)arg1 account:(id)arg2;	// IMP=0x000000000000731a

@end

