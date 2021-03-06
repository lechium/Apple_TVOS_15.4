//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface SFSpeechURLRecognitionRequest
{
    NSURL *_URL;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000015826
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)_startedLocalConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;	// IMP=0x0000000000015489
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;	// IMP=0x0000000000014c32
- (void)_handlePreRecordedAudioWithAsset:(id)arg1 audioTracks:(id)arg2 narrowband:(_Bool)arg3 addSpeechDataBlock:(CDUnknownBlockType)arg4 stopSpeechBlock:(CDUnknownBlockType)arg5 cancelSpeechWithErrorBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000143cc
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000014352
- (id)init;	// IMP=0x0000000000014310

@end

