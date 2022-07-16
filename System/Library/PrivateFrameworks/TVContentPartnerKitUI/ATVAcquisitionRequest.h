//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVCKAcquisitionProperties;

__attribute__((visibility("hidden")))
@interface ATVAcquisitionRequest : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    TVCKAcquisitionProperties *_properties;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006ad77
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) TVCKAcquisitionProperties *properties; // @synthesize properties=_properties;

@end

