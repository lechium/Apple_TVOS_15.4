//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <MediaFoundation/MFResettable-Protocol.h>
#import <MediaFoundation/MFStateDumpable-Protocol.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC15MediaFoundation9PlayerFSM : _TtCs12_SwiftObject <MFStateDumpable, MFResettable>
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *states;	// 32 = 0x20
    MISSING_TYPE *controller;	// 40 = 0x28
}

@property(nonatomic, readonly) NSDictionary *stateDictionary;
- (void)reset;	// IMP=0x00000000000253c0

@end

