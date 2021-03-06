//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WFFinderImageResizer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d9ba2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)resizeImages:(id)arg1 toSize:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d98b0
- (void)computeResizedSizesForImages:(id)arg1 inSizes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d9643
- (id)init;	// IMP=0x00000000001d956a

@end

