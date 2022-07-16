//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVCTestMonitorInjectAudioConfig : NSObject
{
    int _injectAudioConfigType;	// 8 = 0x8
    double _amplitude;	// 16 = 0x10
    NSString *_audioFileName;	// 24 = 0x18
    double _startHostTime;	// 32 = 0x20
    double _loopLength;	// 40 = 0x28
}

@property(nonatomic) double loopLength; // @synthesize loopLength=_loopLength;
@property(nonatomic) double startHostTime; // @synthesize startHostTime=_startHostTime;
@property(nonatomic) NSString *audioFileName; // @synthesize audioFileName=_audioFileName;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) int injectAudioConfigType; // @synthesize injectAudioConfigType=_injectAudioConfigType;

@end

