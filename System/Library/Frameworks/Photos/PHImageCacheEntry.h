//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHRecyclableObject-Protocol.h>

@class NSDictionary, NSError, NSMutableArray, NSString;

@interface PHImageCacheEntry : NSObject <PHRecyclableObject>
{
    NSError *_error;	// 8 = 0x8
    struct CGImage *_imageRef;	// 16 = 0x10
    NSDictionary *_additionalInfo;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    _Bool _isCancelled;	// 36 = 0x24
    NSMutableArray *_handlersWaitingOnResult;	// 40 = 0x28
    int _imageRequestIDForPopulatingCache;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000038501
@property(readonly, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(nonatomic) int imageRequestIDForPopulatingCache; // @synthesize imageRequestIDForPopulatingCache=_imageRequestIDForPopulatingCache;
- (void)prepareForReuse;	// IMP=0x000000000003843e
- (_Bool)isCancelled;	// IMP=0x0000000000038416
- (void)cancel;	// IMP=0x00000000000383a4
- (void)populateWithImageRef:(struct CGImage *)arg1 additionalInfo:(id)arg2 error:(id)arg3 executeBeforeNotifyingWaitersBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000038293
- (void)addNotifyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000381f8
- (void)_callWaiters:(id)arg1 wasCancelled:(_Bool)arg2;	// IMP=0x00000000000380a6
- (_Bool)hasImageRef;	// IMP=0x0000000000038063
- (struct CGImage *)createImageRef;	// IMP=0x0000000000038018
- (void)dealloc;	// IMP=0x0000000000037fde
- (id)init;	// IMP=0x0000000000037f71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

