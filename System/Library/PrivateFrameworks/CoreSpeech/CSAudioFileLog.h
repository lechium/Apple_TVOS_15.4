//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface CSAudioFileLog : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct OpaqueExtAudioFile *_audioFile;	// 16 = 0x10
    struct AudioStreamBasicDescription _asbd;	// 24 = 0x18
    NSURL *_url;	// 64 = 0x40
    unsigned int _audioLength;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x000000000005e6cb
- (void).cxx_destruct;	// IMP=0x000000000005f18a
- (id)_makeTimestampedAudioLogFilenameWithPrefix:(id)arg1 suffix:(id)arg2;	// IMP=0x000000000005f06d
- (id)_nowString;	// IMP=0x000000000005efa5
- (id)_getOrCreateAudioLogDirectory;	// IMP=0x000000000005ee7c
- (id)_audioLogDirectory;	// IMP=0x000000000005edbc
- (void)stopRecording;	// IMP=0x000000000005ecb9
- (void)appendAudioData:(id)arg1;	// IMP=0x000000000005eb19
- (void)startRecording;	// IMP=0x000000000005e8c4
- (void)_closeAudioFile;	// IMP=0x000000000005e867
- (void)dealloc;	// IMP=0x000000000005e829
- (id)init;	// IMP=0x000000000005e720

@end
