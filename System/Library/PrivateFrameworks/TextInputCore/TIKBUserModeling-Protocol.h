//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TITypingSessionAggregatedEventObserver-Protocol.h>
#import <TextInputCore/TIUserModeling-Protocol.h>

@class NSArray;

@protocol TIKBUserModeling <TIUserModeling, TITypingSessionAggregatedEventObserver>
@property(readonly, nonatomic) NSArray *kbContexts;
@end

