//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSystemGestureHandle, PBSystemGestureRecognizerDescriptor;

@interface PBSystemGestureTableHandleResult : NSObject
{
    PBSystemGestureHandle *_handle;	// 8 = 0x8
    PBSystemGestureRecognizerDescriptor *_descriptor;	// 16 = 0x10
}

+ (id)resultWithHandle:(id)arg1 descriptor:(id)arg2;	// IMP=0x0040000000128a70
- (void).cxx_destruct;	// IMP=0x0020000000128b90
@property(readonly, nonatomic) PBSystemGestureRecognizerDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) PBSystemGestureHandle *handle; // @synthesize handle=_handle;

@end

