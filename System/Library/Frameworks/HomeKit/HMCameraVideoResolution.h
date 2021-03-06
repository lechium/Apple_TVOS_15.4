//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMCameraVideoResolution : NSObject <NSSecureCoding>
{
    unsigned long long _videoResolution;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c865b
+ (_Bool)isValid:(unsigned long long)arg1;	// IMP=0x00000000000c864b
@property(readonly, nonatomic) unsigned long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c85d8
- (unsigned long long)hash;	// IMP=0x00000000000c85c6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c856d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c84fd
- (id)initWithVideoResolutionType:(unsigned long long)arg1;	// IMP=0x00000000000c8484

@end

