//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Speech/NSCopying-Protocol.h>
#import <Speech/NSSecureCoding-Protocol.h>

@class SFAcousticFeature;

@interface SFVoiceAnalytics : NSObject <NSCopying, NSSecureCoding>
{
    SFAcousticFeature *_jitter;	// 8 = 0x8
    SFAcousticFeature *_shimmer;	// 16 = 0x10
    SFAcousticFeature *_pitch;	// 24 = 0x18
    SFAcousticFeature *_voicing;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000023cd
- (void).cxx_destruct;	// IMP=0x0000000000002769
@property(readonly, copy, nonatomic) SFAcousticFeature *voicing; // @synthesize voicing=_voicing;
@property(readonly, copy, nonatomic) SFAcousticFeature *pitch; // @synthesize pitch=_pitch;
@property(readonly, copy, nonatomic) SFAcousticFeature *shimmer; // @synthesize shimmer=_shimmer;
@property(readonly, copy, nonatomic) SFAcousticFeature *jitter; // @synthesize jitter=_jitter;
- (id)description;	// IMP=0x00000000000026b9
- (id)_initWithJitter:(id)arg1 shimmer:(id)arg2 pitch:(id)arg3 voicing:(id)arg4;	// IMP=0x00000000000025ac
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000246a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000023d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000023c2

@end

