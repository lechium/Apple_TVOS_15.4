//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVVCContextSettings : NSObject
{
    _Bool _announceCallsEnabled;	// 8 = 0x8
    long long _activationMode;	// 16 = 0x10
    NSString *_activationDeviceUID;	// 24 = 0x18
}

@property(nonatomic) _Bool announceCallsEnabled; // @synthesize announceCallsEnabled=_announceCallsEnabled;
@property(retain, nonatomic) NSString *activationDeviceUID; // @synthesize activationDeviceUID=_activationDeviceUID;
@property(nonatomic) long long activationMode; // @synthesize activationMode=_activationMode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000022903
- (void)dealloc;	// IMP=0x00000000000228bb
- (id)initWithMode:(long long)arg1 deviceUID:(id)arg2;	// IMP=0x0000000000022859

@end

