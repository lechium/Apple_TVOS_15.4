//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMCameraAudioCodec : NSObject <NSSecureCoding>
{
    unsigned long long _audioCodec;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005acf7
+ (_Bool)isValid:(unsigned long long)arg1;	// IMP=0x000000000005ace7
@property(readonly, nonatomic) unsigned long long audioCodec; // @synthesize audioCodec=_audioCodec;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005ac74
- (unsigned long long)hash;	// IMP=0x000000000005ac62
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005ac09
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005ab99
- (id)initWithAudioCodecType:(unsigned long long)arg1;	// IMP=0x000000000005ab20

@end
