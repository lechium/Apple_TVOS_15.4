//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNAudioQueueConfiguration : NSObject
{
    unsigned int _creationFlags;	// 8 = 0x8
    CDUnknownBlockType _configureAudioQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000996b
@property(copy) CDUnknownBlockType configureAudioQueue; // @synthesize configureAudioQueue=_configureAudioQueue;
@property unsigned int creationFlags; // @synthesize creationFlags=_creationFlags;

@end

