//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCListenerEndpoint;

@interface WFJavaScriptRunClient : NSObject
{
    NSXPCListenerEndpoint *_endpoint;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bbffc
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void)runJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bbee3
- (id)initWithEndpoint:(id)arg1;	// IMP=0x00000000000bbdea

@end

