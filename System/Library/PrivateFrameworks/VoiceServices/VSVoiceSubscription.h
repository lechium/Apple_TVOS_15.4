//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSString, VSVoiceAsset;

@interface VSVoiceSubscription : NSObject <NSSecureCoding>
{
    NSString *_clientID;	// 8 = 0x8
    NSString *_accessoryID;	// 16 = 0x10
    VSVoiceAsset *_voice;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000021816
- (void).cxx_destruct;	// IMP=0x0000000000021a02
@property(retain, nonatomic) VSVoiceAsset *voice; // @synthesize voice=_voice;
@property(retain, nonatomic) NSString *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000218a1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002181e
- (id)initWithClient:(id)arg1 accessory:(id)arg2 voice:(id)arg3;	// IMP=0x000000000002175f

@end

