//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject <NSSecureCoding>
{
    TTSSpeechVoice *_voice;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a1e8
@property(retain, nonatomic) TTSSpeechVoice *voice; // @synthesize voice=_voice;
- (void)dealloc;	// IMP=0x000000000000a303
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a282
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a24a
- (id)initWithVoice:(id)arg1;	// IMP=0x000000000000a1f0

@end

