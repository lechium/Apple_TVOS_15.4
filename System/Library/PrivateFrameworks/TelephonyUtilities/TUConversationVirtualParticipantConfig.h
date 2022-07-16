//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface TUConversationVirtualParticipantConfig : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _serverCertValidationEnabled;	// 8 = 0x8
    unsigned long long _connectionRetryIntervalMillis;	// 16 = 0x10
    unsigned long long _connectionMaxAttempts;	// 24 = 0x18
    unsigned long long _rpcStreamRetryIntervalMillis;	// 32 = 0x20
    unsigned long long _rpcStreamMaxAttempts;	// 40 = 0x28
    NSString *_serverCertHostnameOverride;	// 48 = 0x30
    NSString *_serverCertLeafMarkerOIDOverride;	// 56 = 0x38
    NSData *_idsAliasingSalt;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006bdb2
+ (id)serverCertLeafMarkerOIDUserDefaultsKey;	// IMP=0x000000000006b4ce
+ (id)serverCertHostnameUserDefaultsKey;	// IMP=0x000000000006b4c1
+ (id)serverCertValidationEnabledUserDefaultsKey;	// IMP=0x000000000006b4b4
- (void).cxx_destruct;	// IMP=0x000000000006c35c
@property(copy, nonatomic) NSData *idsAliasingSalt; // @synthesize idsAliasingSalt=_idsAliasingSalt;
@property(readonly, copy, nonatomic) NSString *serverCertLeafMarkerOIDOverride; // @synthesize serverCertLeafMarkerOIDOverride=_serverCertLeafMarkerOIDOverride;
@property(readonly, copy, nonatomic) NSString *serverCertHostnameOverride; // @synthesize serverCertHostnameOverride=_serverCertHostnameOverride;
@property(readonly, nonatomic) _Bool serverCertValidationEnabled; // @synthesize serverCertValidationEnabled=_serverCertValidationEnabled;
@property(readonly, nonatomic) unsigned long long rpcStreamMaxAttempts; // @synthesize rpcStreamMaxAttempts=_rpcStreamMaxAttempts;
@property(readonly, nonatomic) unsigned long long rpcStreamRetryIntervalMillis; // @synthesize rpcStreamRetryIntervalMillis=_rpcStreamRetryIntervalMillis;
@property(readonly, nonatomic) unsigned long long connectionMaxAttempts; // @synthesize connectionMaxAttempts=_connectionMaxAttempts;
@property(readonly, nonatomic) unsigned long long connectionRetryIntervalMillis; // @synthesize connectionRetryIntervalMillis=_connectionRetryIntervalMillis;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006c053
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006bdba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006bc69
- (unsigned long long)hash;	// IMP=0x000000000006bb3a
- (_Bool)isEqualToConversationVirtualParticipantConfig:(id)arg1;	// IMP=0x000000000006b816
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006b7b9
- (id)description;	// IMP=0x000000000006b5a8
- (id)initWithConnectionRetryIntervalMillis:(unsigned long long)arg1 connectionMaxAttempts:(unsigned long long)arg2 rpcStreamRetryIntervalMillis:(unsigned long long)arg3 rpcStreamMaxAttempts:(unsigned long long)arg4 serverCertValidationEnabled:(_Bool)arg5 serverCertHostnameOverride:(id)arg6 serverCertLeafMarkerOIDOverride:(id)arg7;	// IMP=0x000000000006b4db

@end

