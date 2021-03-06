//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface HMEPendingEventsCollection : NSObject
{
    NSMutableArray *_mutableEventItems;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000010390
@property(retain, nonatomic) NSMutableArray *mutableEventItems; // @synthesize mutableEventItems=_mutableEventItems;
- (unsigned long long)eventInfoMaxSizeInBytes:(id)arg1;	// IMP=0x00000000000102e8
- (id)popEventItemsUpWithFragments:(_Bool)arg1 toSizeInBytes:(unsigned long long)arg2;	// IMP=0x000000000001000f
- (_Bool)hasEventItem;	// IMP=0x000000000000ffc7
- (void)resetItems;	// IMP=0x000000000000ff74
- (void)combinePreviousEvents:(id)arg1;	// IMP=0x000000000000fdb2
- (void)addEventInfo:(id)arg1;	// IMP=0x000000000000fa55
@property(readonly, copy, nonatomic) NSArray *eventItems;
- (id)init;	// IMP=0x000000000000f9f4
- (id)initWithEvents:(id)arg1;	// IMP=0x000000000000f981

@end

