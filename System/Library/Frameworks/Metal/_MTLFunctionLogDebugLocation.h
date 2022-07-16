//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLFunctionLogDebugLocation-Protocol.h>

@class MTLDebugLocation, NSString, NSURL;

@interface _MTLFunctionLogDebugLocation : NSObject <MTLFunctionLogDebugLocation>
{
    MTLDebugLocation *_debugLocation;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
}

@property(readonly) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long column;
@property(readonly) unsigned long long line;
@property(readonly) NSString *functionName;
- (void)dealloc;	// IMP=0x00000000000036b5
- (id)initWithDebugLocation:(id)arg1;	// IMP=0x0000000000003620

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

