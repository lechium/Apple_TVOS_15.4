//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface UIRuntimeOutletCollectionConnection
{
    NSString *runtimeCollectionClassName;	// 8 = 0x8
    _Bool addsContentToExistingCollection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000079eb75
@property _Bool addsContentToExistingCollection; // @synthesize addsContentToExistingCollection;
@property(copy) NSString *runtimeCollectionClassName; // @synthesize runtimeCollectionClassName;
- (id)description;	// IMP=0x000000000079ea40
- (void)connectForSimulator;	// IMP=0x000000000079e9d6
- (void)connect;	// IMP=0x000000000079e9c4
- (void)performConnect;	// IMP=0x000000000079e690
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000079e5f9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000079e547

@end

