//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPhotoSources/TVPhotoServerInterface-Protocol.h>

@class NSString;
@protocol TVPhotoSourceServiceDelegate;

@interface TVPhotoSourceService : NSObject <TVPhotoServerInterface>
{
    id <TVPhotoSourceServiceDelegate> _photoServiceDelegate;	// 8 = 0x8
    CDUnknownBlockType _photoCacheCompletionBlock;	// 16 = 0x10
    id _sessionID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000013cc
@property(retain, nonatomic) id sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) CDUnknownBlockType photoCacheCompletionBlock; // @synthesize photoCacheCompletionBlock=_photoCacheCompletionBlock;
@property(nonatomic) __weak id <TVPhotoSourceServiceDelegate> photoServiceDelegate; // @synthesize photoServiceDelegate=_photoServiceDelegate;
- (void)didFinishFetchingPhotoAssets;	// IMP=0x00000000000012e1
- (void)updateCacheWithPhotoAssets:(id)arg1;	// IMP=0x000000000000124b
- (void)dealloc;	// IMP=0x0000000000001206

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

