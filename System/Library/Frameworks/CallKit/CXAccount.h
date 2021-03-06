//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class CXHandle, NSString, NSUUID;

@interface CXAccount : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSString *_accountDescription;	// 16 = 0x10
    NSString *_shortLabel;	// 24 = 0x18
    CXHandle *_handle;	// 32 = 0x20
    NSString *_isoCountryCode;	// 40 = 0x28
    NSString *_serviceName;	// 48 = 0x30
}

+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003716f
+ (id)unarchivedObjectClasses;	// IMP=0x00000000000370ed
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003642a
- (void).cxx_destruct;	// IMP=0x000000000003723d
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(readonly, nonatomic) CXHandle *handle; // @synthesize handle=_handle;
@property(readonly, copy, nonatomic) NSString *shortLabel; // @synthesize shortLabel=_shortLabel;
@property(readonly, copy, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)archivedDataWithError:(id *)arg1;	// IMP=0x00000000000370c9
- (_Bool)isEqualToAccount:(id)arg1;	// IMP=0x0000000000036e1d
- (unsigned long long)hash;	// IMP=0x0000000000036cc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000036c6a
- (id)description;	// IMP=0x000000000003692c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000366c8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036432
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000036317
- (id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5 shortLabel:(id)arg6;	// IMP=0x000000000003606c
- (id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5;	// IMP=0x000000000003604a
- (id)init;	// IMP=0x000000000003601f

@end

