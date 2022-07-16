//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLCommandBufferEncoderInfo-Protocol.h>

@class NSArray, NSString;

@interface _MTLCommandBufferEncoderInfo : NSObject <MTLCommandBufferEncoderInfo>
{
    unsigned long long _uniqueID;	// 8 = 0x8
    unsigned long long _globalTraceObjectID;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
    NSArray *_debugSignposts;	// 32 = 0x20
    long long _errorState;	// 40 = 0x28
}

@property(nonatomic) long long errorState; // @synthesize errorState=_errorState;
@property(retain, nonatomic) NSArray *debugSignposts; // @synthesize debugSignposts=_debugSignposts;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(nonatomic) unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)dealloc;	// IMP=0x00000000000989f4
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

