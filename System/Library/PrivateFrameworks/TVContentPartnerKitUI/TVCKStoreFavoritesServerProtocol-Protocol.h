//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/NSObject-Protocol.h>

@class NSSet, NSString;

@protocol TVCKStoreFavoritesServerProtocol <NSObject>
- (void)endMonitoringForChanges;
- (void)beginMonitoringForChanges;
- (void)fetchInfoForShowsWithAdamIDs:(NSSet *)arg1 withReplyHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)removeAllItemsInCategory:(unsigned long long)arg1;
- (void)removeItemWithAdamID:(NSString *)arg1;
- (void)addItemWithAdamID:(NSString *)arg1;
- (void)moveItemInCategory:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)fetchLightWeightItemsInCategory:(unsigned long long)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchItemsInCategory:(unsigned long long)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchCountOfItemsInCategory:(unsigned long long)arg1 withReplyHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)fetchStatusOfItemInContentCategory:(unsigned long long)arg1 withAdamID:(NSString *)arg2 replyHandler:(void (^)(NSNumber *, NSError *))arg3;
@end

