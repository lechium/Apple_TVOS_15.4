//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface PBSMediaRemoteSiriContext : NSObject <NSSecureCoding>
{
    _Bool _isListening;	// 8 = 0x8
    _Bool _isSourcePTTEligible;	// 9 = 0x9
    NSString *_sourceName;	// 16 = 0x10
    NSString *_requestorBundleID;	// 24 = 0x18
    NSDictionary *_testingContext;	// 32 = 0x20
    NSString *_deviceID;	// 40 = 0x28
    long long _bluetoothRemoteType;	// 48 = 0x30
    unsigned long long _buttonDownMachTime;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000683d0
- (void).cxx_destruct;	// IMP=0x00000000000689e0
@property(nonatomic) _Bool isSourcePTTEligible; // @synthesize isSourcePTTEligible=_isSourcePTTEligible;
@property(nonatomic) _Bool isListening; // @synthesize isListening=_isListening;
@property(nonatomic) unsigned long long buttonDownMachTime; // @synthesize buttonDownMachTime=_buttonDownMachTime;
@property(nonatomic) long long bluetoothRemoteType; // @synthesize bluetoothRemoteType=_bluetoothRemoteType;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic, setter=_setTestingContext:) NSDictionary *testingContext; // @synthesize testingContext=_testingContext;
@property(copy, nonatomic, setter=_setRequestorBundleID:) NSString *requestorBundleID; // @synthesize requestorBundleID=_requestorBundleID;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
- (id)init;	// IMP=0x0000000000068750
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000684f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000683f0

@end

