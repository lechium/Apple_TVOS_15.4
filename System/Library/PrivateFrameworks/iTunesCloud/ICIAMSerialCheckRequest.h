//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

@interface ICIAMSerialCheckRequest : PBRequest <NSCopying>
{
    long long _dSID;	// 8 = 0x8
    NSString *_deviceID;	// 16 = 0x10
    CDStruct_f07dd4d9 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000077429
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) long long dSID; // @synthesize dSID=_dSID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007738f
- (unsigned long long)hash;	// IMP=0x0000000000077345
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077280
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000771ef
- (void)copyTo:(id)arg1;	// IMP=0x000000000007718b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000077126
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000077119
- (id)dictionaryRepresentation;	// IMP=0x000000000007705a
- (id)description;	// IMP=0x0000000000076fab
@property(readonly, nonatomic) _Bool hasDeviceID;
@property(nonatomic) _Bool hasDSID;

@end

