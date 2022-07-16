//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPArtworkResizeUtility : NSObject
{
    NSObject<OS_dispatch_queue> *_artworkResizingAccessQueue;	// 8 = 0x8
    NSOperationQueue *_artworkResizingOperationQueue;	// 16 = 0x10
    NSMapTable *_artworkResizingOperations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005c97a
@property(retain, nonatomic) NSMapTable *artworkResizingOperations; // @synthesize artworkResizingOperations=_artworkResizingOperations;
@property(retain, nonatomic) NSOperationQueue *artworkResizingOperationQueue; // @synthesize artworkResizingOperationQueue=_artworkResizingOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *artworkResizingAccessQueue; // @synthesize artworkResizingAccessQueue=_artworkResizingAccessQueue;
- (void)cancelResizeImage:(id)arg1;	// IMP=0x000000000005c878
- (id)resizeImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 useExactFittingSizeAsDestinationSize:(_Bool)arg3 saveToDestinationURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005c6ad
- (id)init;	// IMP=0x000000000005c570

@end
