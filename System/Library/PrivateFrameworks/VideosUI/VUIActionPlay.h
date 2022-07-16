//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDictionary, VUIAppContext;

__attribute__((visibility("hidden")))
@interface VUIActionPlay
{
    _Bool _upNextPlayback;	// 8 = 0x8
    NSDictionary *_contextData;	// 16 = 0x10
    NSArray *_videosPlayables;	// 24 = 0x18
    VUIAppContext *_appContext;	// 32 = 0x20
    NSDate *_userPlaybackInitiationDate;	// 40 = 0x28
    NSDate *_openURLCompletionDate;	// 48 = 0x30
}

+ (id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)arg1;	// IMP=0x00000000001172da
+ (void)_presentPlaybackWithMediaInfo:(id)arg1 extrasInfo:(id)arg2 allowsCellular:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000117051
+ (void)_playMediaInfo:(id)arg1 watchType:(long long)arg2 extrasInfo:(id)arg3 isRentAndWatchNow:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001168dd
+ (void)playMediaInfo:(id)arg1 watchType:(long long)arg2 isRentAndWatchNow:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000116805
+ (void)playMediaInfo:(id)arg1 watchType:(long long)arg2 isRentAndWatchNow:(_Bool)arg3;	// IMP=0x00000000001167f0
+ (void)_playPlayables:(id)arg1 appContext:(id)arg2 watchType:(long long)arg3 isUpNextPlayback:(_Bool)arg4 userPlaybackInitiationDate:(id)arg5 openURLCompletionDate:(id)arg6;	// IMP=0x00000000001165ad
- (void).cxx_destruct;	// IMP=0x00000000001175c6
@property(retain, nonatomic) NSDate *openURLCompletionDate; // @synthesize openURLCompletionDate=_openURLCompletionDate;
@property(retain, nonatomic) NSDate *userPlaybackInitiationDate; // @synthesize userPlaybackInitiationDate=_userPlaybackInitiationDate;
@property(nonatomic, getter=isUpNextPlayback) _Bool upNextPlayback; // @synthesize upNextPlayback=_upNextPlayback;
@property(nonatomic) __weak VUIAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSArray *videosPlayables; // @synthesize videosPlayables=_videosPlayables;
@property(retain, nonatomic) NSDictionary *contextData; // @synthesize contextData=_contextData;
- (_Bool)isAccountRequired;	// IMP=0x0000000000117445
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001160e5
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000000115f81

@end

