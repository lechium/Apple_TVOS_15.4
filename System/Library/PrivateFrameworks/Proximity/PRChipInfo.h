//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@interface PRChipInfo : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _prodMode;	// 8 = 0x8
    unsigned char _secureMode;	// 9 = 0x9
    unsigned char _securityDomain;	// 10 = 0xa
    unsigned short _chipID;	// 12 = 0xc
    unsigned short _boardID;	// 14 = 0xe
    unsigned short _chipRevision;	// 16 = 0x10
    unsigned int _bootMode;	// 20 = 0x14
    unsigned long long _ECID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001804
@property(readonly, nonatomic) unsigned short chipRevision; // @synthesize chipRevision=_chipRevision;
@property(readonly, nonatomic) unsigned char securityDomain; // @synthesize securityDomain=_securityDomain;
@property(readonly, nonatomic) unsigned char secureMode; // @synthesize secureMode=_secureMode;
@property(readonly, nonatomic) unsigned char prodMode; // @synthesize prodMode=_prodMode;
@property(readonly, nonatomic) unsigned int bootMode; // @synthesize bootMode=_bootMode;
@property(readonly, nonatomic) unsigned short boardID; // @synthesize boardID=_boardID;
@property(readonly, nonatomic) unsigned short chipID; // @synthesize chipID=_chipID;
@property(readonly, nonatomic) unsigned long long ECID; // @synthesize ECID=_ECID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000001b21
- (id)description;	// IMP=0x0000000000001aba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001a60
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000196b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000180c
- (id)initWithECID:(unsigned long long)arg1 chipID:(unsigned short)arg2 boardID:(unsigned short)arg3 bootMode:(unsigned int)arg4 prodMode:(unsigned char)arg5 secureMode:(unsigned char)arg6 securityDomain:(unsigned char)arg7 chipRevision:(unsigned short)arg8;	// IMP=0x0000000000001790

@end

