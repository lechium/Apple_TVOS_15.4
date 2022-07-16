//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@interface CTPlanTransferAttributes : NSObject <NSSecureCoding>
{
    _Bool _isSecuredFlow;	// 8 = 0x8
    unsigned long long _transferCapability;	// 16 = 0x10
    unsigned long long _transferStatus;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000123e9
@property(nonatomic) _Bool isSecuredFlow; // @synthesize isSecuredFlow=_isSecuredFlow;
@property(nonatomic) unsigned long long transferStatus; // @synthesize transferStatus=_transferStatus;
@property(nonatomic) unsigned long long transferCapability; // @synthesize transferCapability=_transferCapability;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001249b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000123f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001231d
- (id)description;	// IMP=0x000000000001223f
- (id)initWithTransferCapability:(unsigned long long)arg1 transferStatus:(unsigned long long)arg2 isSecuredFlow:(_Bool)arg3;	// IMP=0x00000000000121ec
- (id)init;	// IMP=0x00000000000121ad

@end

