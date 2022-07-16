//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HMDSleepConfigurationWakePacketTypeWrapper : NSObject <NSCopying, HAPTLVProtocol>
{
    long long _value;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029b25d
@property(nonatomic) long long value; // @synthesize value=_value;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029b135
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029b0e4
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000029b0ca
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029af9f
- (id)initWithValue:(long long)arg1;	// IMP=0x000000000029af62
- (id)init;	// IMP=0x000000000029af26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
