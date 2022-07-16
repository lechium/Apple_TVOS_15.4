//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TILinguisticAssetDownloadServer : NSObject
{
    _Bool _isStarted;	// 8 = 0x8
}

+ (long long)serverResultForAssetManagerResult:(long long)arg1;	// IMP=0x0020000000007f00
+ (id)_dispatchQueue;	// IMP=0x0010000000007d71
+ (MISSING_TYPE *)sharedServer;	// IMP=0x0010000000007d1c
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008284
- (void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000819a
- (void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007f14
- (void)stop;	// IMP=0x0010000000007e7a
- (void)start;	// IMP=0x0010000000007df4

@end

