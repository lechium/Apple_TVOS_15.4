//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteAttributes;

__attribute__((visibility("hidden")))
@interface _GEODirectionsServiceRequestBuilder : NSObject
{
    GEORouteAttributes *_builder;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

+ (id)builderFor:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000127bf4c
- (void).cxx_destruct;	// IMP=0x000000000127c1f6
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x000000000127c1e0
- (void)buildRequest:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x000000000127bfda

@end
