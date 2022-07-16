//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class ICPlayActivityController, ICRadioGetTracksRequest, NSString;

__attribute__((visibility("hidden")))
@interface MPCModelRadioGetTracksOperation : MPAsyncOperation
{
    ICPlayActivityController *_playActivityController;	// 8 = 0x8
    ICRadioGetTracksRequest *_request;	// 16 = 0x10
    NSString *_siriAssetInfo;	// 24 = 0x18
    void *_radioQueueFeederPointerForLogging;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001633a1
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_runStep:(id)arg1 withFinishHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000163224
- (id)_cacheTracksForStep:(id)arg1;	// IMP=0x0000000000162939
- (void)execute;	// IMP=0x0000000000162772
- (id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3 radioQueueFeeder:(id)arg4;	// IMP=0x0000000000162663

@end

