//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPAudioStreamCodecConfiguration, NSString;

@interface HAPSelectedAudioStreamConfiguration : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPAudioStreamCodecConfiguration *_configuration;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ef15
- (void).cxx_destruct;	// IMP=0x000000000004ef05
@property(retain, nonatomic) HAPAudioStreamCodecConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004ed47
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004ecde
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000004eabc
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004e7f7
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000004e78c
- (id)init;	// IMP=0x000000000004e75d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
