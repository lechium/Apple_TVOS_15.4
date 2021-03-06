//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface VNMetalContext : NSObject
{
    _Bool _useGPU;	// 8 = 0x8
    id <MTLDevice> _metalDevice;	// 16 = 0x10
    NSDictionary *_wisdomParams;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005fbe4
@property(readonly) _Bool useGPU; // @synthesize useGPU=_useGPU;
@property(readonly) NSDictionary *wisdomParams; // @synthesize wisdomParams=_wisdomParams;
@property(readonly) id <MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
- (id)initWithMetalDevice:(id)arg1;	// IMP=0x000000000005fa6c

@end

