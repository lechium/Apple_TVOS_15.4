//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIImage, PFLivePhotoEditSession;

@interface PHLivePhotoEditingContext : NSObject
{
    PFLivePhotoEditSession *_editSession;	// 8 = 0x8
}

+ (id)errorWithUnderlyingError:(id)arg1;	// IMP=0x00000000001b9d5c
- (void).cxx_destruct;	// IMP=0x00000000001ba1f4
- (void)cancel;	// IMP=0x00000000001ba1de
- (void)saveLivePhotoToOutput:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ba002
- (void)prepareLivePhotoForPlaybackWithTargetSize:(struct CGSize)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b9f4d
@property(readonly) unsigned int orientation;
@property float audioVolume;
@property(copy) CDUnknownBlockType frameProcessor;
@property(readonly) CDStruct_1b6d18a9 photoTime;
@property(readonly) CDStruct_1b6d18a9 duration;
@property(readonly) CIImage *fullSizeImage;
- (id)initWithLivePhotoEditingInput:(id)arg1;	// IMP=0x00000000001b9e45
- (id)init;	// IMP=0x00000000001b9e37

@end

