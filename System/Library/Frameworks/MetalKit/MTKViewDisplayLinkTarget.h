//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTKView;

__attribute__((visibility("hidden")))
@interface MTKViewDisplayLinkTarget : NSObject
{
    MTKView *_target;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000199f
@property(nonatomic) __weak MTKView *target; // @synthesize target=_target;
- (void)draw;	// IMP=0x0000000000001947
- (id)initWithTarget:(id)arg1;	// IMP=0x00000000000018c8

@end

