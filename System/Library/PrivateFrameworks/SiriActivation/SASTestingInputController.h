//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SiriTestingContext;

@interface SASTestingInputController : NSObject
{
    SiriTestingContext *_preloadedTestingInput;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002fd4f
@property(readonly, nonatomic) SiriTestingContext *preloadedTestingInput; // @synthesize preloadedTestingInput=_preloadedTestingInput;
- (id)dequeuePreloadedTestingContext;	// IMP=0x000000000002fd2c
- (void)_testingAudioInputPathsDidChange:(id)arg1;	// IMP=0x000000000002fcae
- (void)_testingStringsDidChange:(id)arg1;	// IMP=0x000000000002fbfd
- (void)dealloc;	// IMP=0x000000000002fb88
- (void)_registerForTestingNotifications;	// IMP=0x000000000002fb05
- (id)init;	// IMP=0x000000000002faa7

@end
