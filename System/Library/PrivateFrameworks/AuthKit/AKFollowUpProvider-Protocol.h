//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSObject-Protocol.h>

@class FLFollowUpItem, NSArray;

@protocol AKFollowUpProvider <NSObject>
- (_Bool)clearNotificationsForItem:(FLFollowUpItem *)arg1 error:(id *)arg2;
- (_Bool)removeFollowUpItemsWithIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)removeFollowUpItems:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)addFollowUpItems:(NSArray *)arg1 error:(id *)arg2;
- (_Bool)removeAllFollowUpItems:(id *)arg1;
- (NSArray *)pendingFollowUpItems:(id *)arg1;
@end

