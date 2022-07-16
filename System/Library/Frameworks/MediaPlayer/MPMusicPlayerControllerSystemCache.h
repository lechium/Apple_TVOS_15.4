//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMusicPlayerControllerNowPlaying, MPMusicPlayerQueueDescriptor, NSUserDefaults;

@interface MPMusicPlayerControllerSystemCache : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
}

+ (id)sharedCache;	// IMP=0x00000000002a9bb7
- (void).cxx_destruct;	// IMP=0x00000000002a9ba7
- (_Bool)_saveObject:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a9ae7
- (id)_objectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a9a6b
@property(retain, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property(retain, nonatomic) MPMusicPlayerControllerNowPlaying *nowPlaying;
- (void)clearCache;	// IMP=0x00000000002a9698
@property(readonly, nonatomic) _Bool hasCachedData;
- (id)_init;	// IMP=0x00000000002a95ed

@end

