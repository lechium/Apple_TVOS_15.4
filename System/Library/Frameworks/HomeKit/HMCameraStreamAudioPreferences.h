//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSSet;

@interface HMCameraStreamAudioPreferences : NSObject <NSSecureCoding>
{
    NSSet *_codecs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003713a
- (void).cxx_destruct;	// IMP=0x000000000003712a
@property(copy) NSSet *codecs; // @synthesize codecs=_codecs;
- (unsigned long long)hash;	// IMP=0x00000000000370c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000036ffa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036f81
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036e52
- (id)description;	// IMP=0x0000000000036de6

@end

