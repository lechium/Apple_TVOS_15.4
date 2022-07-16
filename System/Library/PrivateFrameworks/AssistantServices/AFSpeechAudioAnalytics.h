//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface AFSpeechAudioAnalytics : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_speechRecognitionFeatures;	// 8 = 0x8
    NSDictionary *_acousticFeatures;	// 16 = 0x10
    double _snr;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001276a2
- (void).cxx_destruct;	// IMP=0x0000000000127afe
@property(readonly, nonatomic) double snr; // @synthesize snr=_snr;
@property(readonly, nonatomic) NSDictionary *acousticFeatures; // @synthesize acousticFeatures=_acousticFeatures;
@property(readonly, nonatomic) NSDictionary *speechRecognitionFeatures; // @synthesize speechRecognitionFeatures=_speechRecognitionFeatures;
- (id)initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2 snr:(double)arg3;	// IMP=0x0000000000127a17
- (id)initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2;	// IMP=0x000000000012795e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012773e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001276b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001276aa

@end
