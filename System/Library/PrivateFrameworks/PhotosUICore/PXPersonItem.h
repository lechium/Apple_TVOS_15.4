//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPerson, UIImage;

@interface PXPersonItem : NSObject
{
    int _faceImageRequestID;	// 8 = 0x8
    PHPerson *_modelObject;	// 16 = 0x10
    CDUnknownBlockType _faceImageLoadingCompletionBlock;	// 24 = 0x18
    CDUnknownBlockType _fastDisplayBlock;	// 32 = 0x20
    CDUnknownBlockType _resultHandler;	// 40 = 0x28
    UIImage *_faceImage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000062b0ec
@property __weak UIImage *faceImage; // @synthesize faceImage=_faceImage;
@property(copy) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(copy) CDUnknownBlockType fastDisplayBlock; // @synthesize fastDisplayBlock=_fastDisplayBlock;
@property(copy) CDUnknownBlockType faceImageLoadingCompletionBlock; // @synthesize faceImageLoadingCompletionBlock=_faceImageLoadingCompletionBlock;
@property int faceImageRequestID; // @synthesize faceImageRequestID=_faceImageRequestID;
@property(retain, nonatomic) PHPerson *modelObject; // @synthesize modelObject=_modelObject;
- (void)updateWithModel:(id)arg1;	// IMP=0x000000000062b01d
- (id)initWithPerson:(id)arg1;	// IMP=0x000000000062afb2

@end

