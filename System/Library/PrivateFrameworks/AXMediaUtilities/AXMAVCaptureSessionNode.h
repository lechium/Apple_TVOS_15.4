//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMVisionAnalysisOptions, NSObject;
@protocol AXMAVCaptureSessionNodeDelegate, AXMAVCaptureSessionNodeFrameDelegate, OS_dispatch_queue;

@interface AXMAVCaptureSessionNode
{
    NSObject<OS_dispatch_queue> *_autotrigger_queue;	// 8 = 0x8
    id <AXMAVCaptureSessionNodeDelegate> _captureSessionNodeDelegate;	// 16 = 0x10
    id <AXMAVCaptureSessionNodeFrameDelegate> _frameDelegate;	// 24 = 0x18
    AXMVisionAnalysisOptions *_analysisOptions;	// 32 = 0x20
}

+ (id)title;	// IMP=0x000000000002830a
+ (_Bool)isSupported;	// IMP=0x0000000000028302
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000282fa
- (void).cxx_destruct;	// IMP=0x0000000000028497
@property(retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(nonatomic) __weak id <AXMAVCaptureSessionNodeFrameDelegate> frameDelegate; // @synthesize frameDelegate=_frameDelegate;
@property(nonatomic) __weak id <AXMAVCaptureSessionNodeDelegate> captureSessionNodeDelegate; // @synthesize captureSessionNodeDelegate=_captureSessionNodeDelegate;
- (void)endVideoFrameEvents;	// IMP=0x0000000000028412
- (void)endAutoTriggerOfVideoFrameEvents;	// IMP=0x00000000000283e2
- (void)nodeInitialize;	// IMP=0x00000000000283b3
- (void)produceImage:(id)arg1;	// IMP=0x0000000000028378
- (void)setShouldProcessRemotely:(_Bool)arg1;	// IMP=0x0000000000028317

@end

