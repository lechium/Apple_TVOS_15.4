//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpriteKit/NSSecureCoding-Protocol.h>

@class AVAudioNode;

@interface SKAudioNode <NSSecureCoding>
{
    void *_skcAudioNode;	// 96 = 0x60
    _Bool _autoplayLooped;	// 104 = 0x68
    _Bool _positional;	// 105 = 0x69
}

+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000ce5aa
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cd774
@property(nonatomic, getter=isPositional) _Bool positional; // @synthesize positional=_positional;
@property(nonatomic) _Bool autoplayLooped; // @synthesize autoplayLooped=_autoplayLooped;
- (void)_connectToScene:(id)arg1;	// IMP=0x00000000000ce988
- (void)_setAudioName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000ce6fb
- (void)_playLooped;	// IMP=0x00000000000ce37e
@property(retain, nonatomic) AVAudioNode *avAudioNode;
- (void)setAudioURL:(id)arg1;	// IMP=0x00000000000ce322
- (id)audioURL;	// IMP=0x00000000000ce306
- (void)setAudioFileName:(id)arg1;	// IMP=0x00000000000ce2e6
- (id)audioFileName;	// IMP=0x00000000000ce2ca
- (id)audioFile;	// IMP=0x00000000000ce2ae
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000ce188
- (id)initWithFileNamed:(id)arg1;	// IMP=0x00000000000ce102
- (id)initWithFileNamed:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000cdf75
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x00000000000cdcfd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cdbde
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cd8d2
- (id)initWithAVAudioNode:(id)arg1;	// IMP=0x00000000000cd7f6
- (id)init;	// IMP=0x00000000000cd7e1
- (void)commonInit;	// IMP=0x00000000000cd7db
- (void)_didMakeBackingNode;	// IMP=0x00000000000cd7b3
- (void *)_makeBackingNode;	// IMP=0x00000000000cd77c

@end

