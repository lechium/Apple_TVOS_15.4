//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNSplitDetectorInfo : NSObject
{
    NSString *_detectorHead;	// 8 = 0x8
    NSString *_featureExtractor;	// 16 = 0x10
    NSString *_soundIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000a4a3
@property(readonly, nonatomic) NSString *soundIdentifier; // @synthesize soundIdentifier=_soundIdentifier;
@property(readonly, nonatomic) NSString *featureExtractor; // @synthesize featureExtractor=_featureExtractor;
@property(readonly, nonatomic) NSString *detectorHead; // @synthesize detectorHead=_detectorHead;
- (id)initWithDetectorHead:(id)arg1 featureExtractor:(id)arg2 soundIdentifier:(id)arg3;	// IMP=0x000000000000a3ce

@end

