//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFSpeechRequestOptions;

@interface AFSetAudioSessionActiveContext : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _options;	// 8 = 0x8
    long long _reason;	// 16 = 0x10
    AFSpeechRequestOptions *_speechRequestOptions;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002e1fd
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e61a
- (void).cxx_destruct;	// IMP=0x000000000002e41f
@property(readonly, copy, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // @synthesize speechRequestOptions=_speechRequestOptions;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e326
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e205
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e1f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e106
- (unsigned long long)hash;	// IMP=0x000000000002e056
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000000002de13
- (id)description;	// IMP=0x000000000002ddff
- (id)initWithOptions:(unsigned long long)arg1 reason:(long long)arg2 speechRequestOptions:(id)arg3;	// IMP=0x000000000002dd76
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e689

@end

