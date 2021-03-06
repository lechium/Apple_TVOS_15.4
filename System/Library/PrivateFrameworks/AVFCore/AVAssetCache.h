//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVAssetCache : NSObject
{
}

+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg1;	// IMP=0x00000000000f31d3
+ (id)assetCacheForProgressiveDownloadWithURL:(id)arg1;	// IMP=0x00000000000f31ba
+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)arg1;	// IMP=0x00000000000f31a1
+ (id)assetCacheWithURL:(id)arg1;	// IMP=0x00000000000f3188
- (id)allKeys;	// IMP=0x00000000000f3398
- (id)lastModifiedDateOfEntryForKey:(id)arg1;	// IMP=0x00000000000f336a
- (long long)sizeOfEntryForKey:(id)arg1;	// IMP=0x00000000000f333c
- (void)removeEntryForKey:(id)arg1;	// IMP=0x00000000000f3311
- (id)URL;	// IMP=0x00000000000f32e3
- (long long)currentSize;	// IMP=0x00000000000f32b5
- (long long)maxEntrySize;	// IMP=0x00000000000f3287
- (long long)maxSize;	// IMP=0x00000000000f3259
@property(readonly, nonatomic, getter=isPlayableOffline) _Bool playableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;	// IMP=0x00000000000f31ec
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000f3154
- (id)_init;	// IMP=0x00000000000f3125

@end

