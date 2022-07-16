//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKit/MCProfileConnectionObserver-Protocol.h>

@class NSNumber, NSString, WLKDebouncingQueue;

@interface WLKRestrictionsObserver : NSObject <MCProfileConnectionObserver>
{
    NSNumber *_TVRanking;	// 8 = 0x8
    NSNumber *_movieRanking;	// 16 = 0x10
    WLKDebouncingQueue *_debounceQueue;	// 24 = 0x18
}

+ (id)sharedObserver;	// IMP=0x0000000000024d9d
- (void).cxx_destruct;	// IMP=0x0000000000025353
@property(retain, nonatomic) WLKDebouncingQueue *debounceQueue; // @synthesize debounceQueue=_debounceQueue;
@property(retain, nonatomic) NSNumber *movieRanking; // @synthesize movieRanking=_movieRanking;
@property(retain, nonatomic) NSNumber *TVRanking; // @synthesize TVRanking=_TVRanking;
- (void)_evaluateRestrictionsChange;	// IMP=0x000000000002505b
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000024f4d
- (void)dealloc;	// IMP=0x0000000000024ed8
- (id)init;	// IMP=0x0000000000024df2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

