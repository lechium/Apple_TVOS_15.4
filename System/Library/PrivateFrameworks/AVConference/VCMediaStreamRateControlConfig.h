//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCBasebandCongestionDetector, AVCRateControlFeedbackController, AVCStatisticsCollector, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCMediaStreamRateControlConfig : NSObject
{
    AVCStatisticsCollector *_statisticsCollector;	// 8 = 0x8
    AVCBasebandCongestionDetector *_basebandCongestionDetector;	// 16 = 0x10
    AVCRateControlFeedbackController *_feedbackController;	// 24 = 0x18
    VCRateControlMediaController *_mediaController;	// 32 = 0x20
    _Bool _shouldCreateMediaControlInfoGenerator;	// 40 = 0x28
    _Bool _shouldRegisterMediaControlInfoGeneratorCallbacks;	// 41 = 0x29
    void *_mediaControlInfoGenerator;	// 48 = 0x30
    unsigned int _mediaControlInfoGeneratorType;	// 56 = 0x38
    struct tagHANDLE *_mediaQueue;	// 64 = 0x40
    struct tagVCMediaQueue *_vcMediaQueue;	// 72 = 0x48
    unsigned char _mediaControlInfoVersion;	// 80 = 0x50
    unsigned int _mediaControlInfoGeneratorOptions;	// 84 = 0x54
    double _mediaQueueThrottlingInterval;	// 88 = 0x58
}

@property(nonatomic) unsigned int mediaControlInfoGeneratorOptions; // @synthesize mediaControlInfoGeneratorOptions=_mediaControlInfoGeneratorOptions;
@property(nonatomic) unsigned char mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
@property(nonatomic) struct tagVCMediaQueue *vcMediaQueue; // @synthesize vcMediaQueue=_vcMediaQueue;
@property(nonatomic) struct tagHANDLE *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(nonatomic) double mediaQueueThrottlingInterval; // @synthesize mediaQueueThrottlingInterval=_mediaQueueThrottlingInterval;
@property(nonatomic) unsigned int mediaControlInfoGeneratorType; // @synthesize mediaControlInfoGeneratorType=_mediaControlInfoGeneratorType;
@property(nonatomic) void *mediaControlInfoGenerator; // @synthesize mediaControlInfoGenerator=_mediaControlInfoGenerator;
@property(nonatomic) _Bool shouldRegisterMediaControlInfoGeneratorCallbacks; // @synthesize shouldRegisterMediaControlInfoGeneratorCallbacks=_shouldRegisterMediaControlInfoGeneratorCallbacks;
@property(nonatomic) _Bool shouldCreateMediaControlInfoGenerator; // @synthesize shouldCreateMediaControlInfoGenerator=_shouldCreateMediaControlInfoGenerator;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(retain, nonatomic) AVCRateControlFeedbackController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
- (void)dealloc;	// IMP=0x0000000000322d1a
- (id)init;	// IMP=0x0000000000322c4b

@end

