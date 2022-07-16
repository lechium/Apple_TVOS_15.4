//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSiriAudioRoute;
@protocol OS_dispatch_queue;

@interface CSSiriAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSSiriAudioRoute *_inputRoute;	// 16 = 0x10
    CSSiriAudioRoute *_outputRoute;	// 24 = 0x18
}

+ (id)currentInputDeviceUIDArray;	// IMP=0x00000000000ab495
+ (id)sharedSession;	// IMP=0x00000000000aa923
- (void).cxx_destruct;	// IMP=0x00000000000ab6e5
- (id)currentOutputRoute;	// IMP=0x00000000000ab0b6
- (id)currentInputRoute;	// IMP=0x00000000000aa9cb
- (id)init;	// IMP=0x00000000000aa978

@end
