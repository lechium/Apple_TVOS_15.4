//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ASCAppLaunchTrampolineWorkspace;

@interface ASCAppLaunchTrampoline : NSObject
{
    NSObject<ASCAppLaunchTrampolineWorkspace> *_workspace;	// 8 = 0x8
}

+ (id)log;	// IMP=0x0020000000011428
- (void).cxx_destruct;	// IMP=0x0020000000012b5d
@property(readonly, nonatomic) NSObject<ASCAppLaunchTrampolineWorkspace> *workspace; // @synthesize workspace=_workspace;
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2 encodedMetrics:(id)arg3;	// IMP=0x0010000000012925
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2;	// IMP=0x0010000000012910
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2 workspace:(id)arg3;	// IMP=0x0010000000012669
- (id)handleURL:(id)arg1 workspace:(id)arg2;	// IMP=0x0010000000011581
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2;	// IMP=0x001000000001156b
- (id)handleURL:(id)arg1;	// IMP=0x0010000000011555
- (id)initWithWorkspace:(id)arg1;	// IMP=0x00100000000114ea
- (id)init;	// IMP=0x0010000000011484

@end

