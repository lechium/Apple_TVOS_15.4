//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessCodeValue, HMAccessory, HMAccessoryAccessCode, NSError;

@interface HMAccessCodeModificationResponse : NSObject
{
    HMAccessory *_accessory;	// 8 = 0x8
    HMAccessoryAccessCode *_accessoryAccessCode;	// 16 = 0x10
    HMAccessCodeValue *_accessCodeValue;	// 24 = 0x18
    long long _operationType;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
}

+ (id)responseWithValue:(id)arg1 accessory:(id)arg2;	// IMP=0x00000000000e8d65
- (void).cxx_destruct;	// IMP=0x00000000000e8d27
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) long long operationType; // @synthesize operationType=_operationType;
@property(copy) HMAccessCodeValue *accessCodeValue; // @synthesize accessCodeValue=_accessCodeValue;
@property(retain) HMAccessoryAccessCode *accessoryAccessCode; // @synthesize accessoryAccessCode=_accessoryAccessCode;
@property(readonly) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (id)initWithAccessory:(id)arg1 accessoryAccessCode:(id)arg2 accessCodeValue:(id)arg3 operationType:(long long)arg4 error:(id)arg5;	// IMP=0x00000000000e8b8e

@end

