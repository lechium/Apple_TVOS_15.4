//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasSecureElement;	// 8 = 0x8
    _Bool _hasRemoteDevices;	// 9 = 0x9
    _Bool _inFailForward;	// 10 = 0xa
    _Bool _canMakeRemotePayments;	// 11 = 0xb
    _Bool _isSRD;	// 12 = 0xc
    _Bool _canDecryptBAAEncryptedData;	// 13 = 0xd
    unsigned long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002461d0
@property(nonatomic) _Bool canDecryptBAAEncryptedData; // @synthesize canDecryptBAAEncryptedData=_canDecryptBAAEncryptedData;
@property(nonatomic) _Bool isSRD; // @synthesize isSRD=_isSRD;
@property(nonatomic) _Bool canMakeRemotePayments; // @synthesize canMakeRemotePayments=_canMakeRemotePayments;
@property(nonatomic, getter=isInFailForward) _Bool inFailForward; // @synthesize inFailForward=_inFailForward;
@property(nonatomic) _Bool hasRemoteDevices; // @synthesize hasRemoteDevices=_hasRemoteDevices;
@property(nonatomic) _Bool hasSecureElement; // @synthesize hasSecureElement=_hasSecureElement;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic, getter=_isDemoModeActive) _Bool _isDemoModeActive;
@property(readonly, nonatomic) _Bool canMakeLocalPayments;
@property(readonly, nonatomic) _Bool canMakePayments;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000246489
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002463c0
- (id)description;	// IMP=0x00000000002462be
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002461d8

@end

