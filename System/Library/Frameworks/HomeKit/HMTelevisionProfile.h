//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/_HMTelevisionProfileDelegate-Protocol.h>

@class NSArray, NSString;
@protocol HMTelevisionProfileDelegate;

@interface HMTelevisionProfile <_HMTelevisionProfileDelegate>
{
    id <HMTelevisionProfileDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000228653
@property __weak id <HMTelevisionProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x000000000022847c
- (void)televisionProfileDidUpdateSourceDisplayOrder:(id)arg1;	// IMP=0x0000000000228341
- (void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000022828c
@property(readonly) _Bool mediaSourceDisplayOrderModifiable;
@property(readonly) NSArray *mediaSourceDisplayOrder;
- (id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2;	// IMP=0x00000000002280c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

