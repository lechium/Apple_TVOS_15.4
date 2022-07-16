//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDWakeConfigurationParameters, NSData, NSString;

@interface HMDWakeConfiguration : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_reserved;	// 8 = 0x8
    HMDWakeConfigurationParameters *_custom1;	// 16 = 0x10
    HMDWakeConfigurationParameters *_custom2;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000b04a28
- (void).cxx_destruct;	// IMP=0x0000000000b038b1
@property(retain, nonatomic) HMDWakeConfigurationParameters *custom2; // @synthesize custom2=_custom2;
@property(retain, nonatomic) HMDWakeConfigurationParameters *custom1; // @synthesize custom1=_custom1;
@property(retain, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b034b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b033fd
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000b02f77
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000b02ad4
- (id)initWithReserved:(id)arg1 custom1:(id)arg2 custom2:(id)arg3;	// IMP=0x0000000000b02a1d
- (id)init;	// IMP=0x0000000000b029ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
