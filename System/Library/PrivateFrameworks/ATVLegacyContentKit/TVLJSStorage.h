//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVLLegacyJSContext;
@protocol TVLReadWriteFeedResource;

@interface TVLJSStorage : NSObject
{
    TVLLegacyJSContext *_context;	// 8 = 0x8
    struct OpaqueJSValue *_jsObjectRef;	// 16 = 0x10
    id <TVLReadWriteFeedResource> _resource;	// 24 = 0x18
}

@property(retain, nonatomic) id <TVLReadWriteFeedResource> resource; // @synthesize resource=_resource;
@property(nonatomic) struct OpaqueJSValue *jsObjectRef; // @synthesize jsObjectRef=_jsObjectRef;
@property(retain) TVLLegacyJSContext *context; // @synthesize context=_context;
- (void)dealloc;	// IMP=0x00000000000c2218
- (id)initWithContext:(id)arg1 jsContext:(struct OpaqueJSContext *)arg2 resource:(id)arg3;	// IMP=0x00000000000c1bdd

@end

