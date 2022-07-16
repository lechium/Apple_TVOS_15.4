//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSString;
@protocol SSPersonalizeOffersDelegate;

@interface SSPersonalizeOffersRequest <SSXPCCoding>
{
    NSArray *_items;	// 56 = 0x38
}

- (id)copyXPCEncoding;	// IMP=0x00000000000ca8e1
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000ca693
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca62b
- (_Bool)start;	// IMP=0x00000000000ca4c2
- (void)startWithPersonalizedResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9f71
@property(readonly, nonatomic) NSArray *items;
- (void)dealloc;	// IMP=0x00000000000c9f11
- (id)initWithItems:(id)arg1;	// IMP=0x00000000000c9eb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SSPersonalizeOffersDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
