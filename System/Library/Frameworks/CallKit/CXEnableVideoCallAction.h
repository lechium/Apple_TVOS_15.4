//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSSecureCoding-Protocol.h>

@interface CXEnableVideoCallAction <NSSecureCoding>
{
    _Bool _videoEnabled;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000037d45
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000037de6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000037d4d
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000037cbc
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037cb4
- (id)customDescription;	// IMP=0x0000000000037c3c
- (id)initWithCallUUID:(id)arg1 videoEnabled:(_Bool)arg2;	// IMP=0x0000000000037bfa

@end

