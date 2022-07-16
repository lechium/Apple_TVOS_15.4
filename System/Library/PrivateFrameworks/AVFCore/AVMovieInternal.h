//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetInspectorLoader, AVDispatchOnce, NSArray, NSData, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface AVMovieInternal : NSObject
{
    AVAssetInspectorLoader *loader;	// 8 = 0x8
    NSURL *URL;	// 16 = 0x10
    NSData *data;	// 24 = 0x18
    NSDictionary *initializationOptions;	// 32 = 0x20
    NSArray *tracks;	// 40 = 0x28
    AVDispatchOnce *makeTracksArrayOnce;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000131d29

@end

