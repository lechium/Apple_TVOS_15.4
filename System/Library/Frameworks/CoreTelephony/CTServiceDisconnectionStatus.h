//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CTServiceDisconnectionStatus : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _activationFailure;	// 8 = 0x8
    int _contextType;	// 12 = 0xc
    int _error;	// 16 = 0x10
    NSString *_apnName;	// 24 = 0x18
    NSNumber *_connectionMask;	// 32 = 0x20
    NSNumber *_rawCauseCode;	// 40 = 0x28
    NSNumber *_pdp;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000141b8
- (void).cxx_destruct;	// IMP=0x0000000000014262
@property(retain, nonatomic) NSNumber *pdp; // @synthesize pdp=_pdp;
@property(retain, nonatomic) NSNumber *rawCauseCode; // @synthesize rawCauseCode=_rawCauseCode;
@property(nonatomic) int error; // @synthesize error=_error;
@property(retain, nonatomic) NSNumber *connectionMask; // @synthesize connectionMask=_connectionMask;
@property(nonatomic) _Bool activationFailure; // @synthesize activationFailure=_activationFailure;
@property(retain, nonatomic) NSString *apnName; // @synthesize apnName=_apnName;
@property(nonatomic) int contextType; // @synthesize contextType=_contextType;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014031
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000013eaf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013cdc
- (id)description;	// IMP=0x0000000000013b1c

@end

