//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PFPhotoSharingOperation, PFVideoSharingOperation;

@interface PFSharingRemakerOperation : NSObject
{
    long long _inputType;	// 8 = 0x8
    NSURL *_imageOutputURL;	// 16 = 0x10
    NSURL *_videoOutputURL;	// 24 = 0x18
    NSString *__uuid;	// 32 = 0x20
    PFVideoSharingOperation *__videoOperation;	// 40 = 0x28
    PFPhotoSharingOperation *__imageOperation;	// 48 = 0x30
}

+ (id)remakerOperationWithInputType:(long long)arg1 videoURL:(id)arg2 imageURL:(id)arg3 adjustmentData:(id)arg4;	// IMP=0x0000000000044195
- (void).cxx_destruct;	// IMP=0x000000000004414c
@property(retain, nonatomic, setter=_setImageOperation:) PFPhotoSharingOperation *_imageOperation; // @synthesize _imageOperation=__imageOperation;
@property(retain, nonatomic, setter=_setVideoOperation:) PFVideoSharingOperation *_videoOperation; // @synthesize _videoOperation=__videoOperation;
@property(copy, nonatomic, setter=_setUUID:) NSString *_uuid; // @synthesize _uuid=__uuid;
@property(copy, nonatomic, setter=_setVideoOutputURL:) NSURL *videoOutputURL; // @synthesize videoOutputURL=_videoOutputURL;
@property(copy, nonatomic, setter=_setImageOutputURL:) NSURL *imageOutputURL; // @synthesize imageOutputURL=_imageOutputURL;
@property(nonatomic, setter=_setInputType:) long long inputType; // @synthesize inputType=_inputType;
- (id)init;	// IMP=0x0000000000044011

@end

