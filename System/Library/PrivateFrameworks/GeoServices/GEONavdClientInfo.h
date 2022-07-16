//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOApplicationAuditToken, NSString;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_canonicalName;	// 8 = 0x8
    NSString *_uniqueClientId;	// 16 = 0x10
    GEOApplicationAuditToken *_auditToken;	// 24 = 0x18
}

+ (id)clientInfoForNavdPredictions;	// IMP=0x0000000000fa62e4
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000fa5d7a
- (void).cxx_destruct;	// IMP=0x0000000000fa65b7
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(copy, nonatomic) NSString *uniqueClientId; // @synthesize uniqueClientId=_uniqueClientId;
@property(copy, nonatomic) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
- (id)description;	// IMP=0x0000000000fa6558
- (unsigned long long)hash;	// IMP=0x0000000000fa6542
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fa64cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fa638c
- (_Bool)isNavdClientInfo;	// IMP=0x0000000000fa636f
- (_Bool)isCalendarClientInfo;	// IMP=0x0000000000fa6352
- (id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2;	// IMP=0x0000000000fa6148
- (id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2 auditToken:(id)arg3;	// IMP=0x0000000000fa5fa6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000fa5ec3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000fa5d82

@end
