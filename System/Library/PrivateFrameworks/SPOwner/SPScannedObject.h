//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSData, NSDate, SPAccessoryInformation, SPIndexInformation;

@interface SPScannedObject : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _status;	// 8 = 0x8
    NSDate *_scanDate;	// 16 = 0x10
    NSData *_address;	// 24 = 0x18
    NSData *_advertisement;	// 32 = 0x20
    NSData *_optional;	// 40 = 0x28
    long long _rssi;	// 48 = 0x30
    SPAccessoryInformation *_accessoryInformation;	// 56 = 0x38
    SPIndexInformation *_indexInformation;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000042ba6
- (void).cxx_destruct;	// IMP=0x000000000004323c
@property(readonly, copy, nonatomic) SPIndexInformation *indexInformation; // @synthesize indexInformation=_indexInformation;
@property(readonly, copy, nonatomic) SPAccessoryInformation *accessoryInformation; // @synthesize accessoryInformation=_accessoryInformation;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSData *optional; // @synthesize optional=_optional;
@property(nonatomic) unsigned char status; // @synthesize status=_status;
@property(copy, nonatomic) NSData *advertisement; // @synthesize advertisement=_advertisement;
@property(copy, nonatomic) NSData *address; // @synthesize address=_address;
@property(copy, nonatomic) NSDate *scanDate; // @synthesize scanDate=_scanDate;
- (id)description;	// IMP=0x000000000004302b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000042e80
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000042d92
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000042cdd
- (id)initWithScanDate:(id)arg1 address:(id)arg2 advertisement:(id)arg3 status:(unsigned char)arg4 optional:(id)arg5 rssi:(long long)arg6 indexInformation:(id)arg7 acccessoryInformation:(id)arg8;	// IMP=0x0000000000042bae

@end
