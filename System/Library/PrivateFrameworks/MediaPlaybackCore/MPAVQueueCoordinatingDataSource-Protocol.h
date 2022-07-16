//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPAVItem;
@protocol MPAVQueueCoordinating;

@protocol MPAVQueueCoordinatingDataSource <NSObject>
- (MPAVItem *)queueCoordinator:(id <MPAVQueueCoordinating>)arg1 itemToFollowItem:(MPAVItem *)arg2;

@optional
- (void)queueCoordinatorDidChangeItems:(id <MPAVQueueCoordinating>)arg1;
- (void)queueCoordinator:(id <MPAVQueueCoordinating>)arg1 willInsertItem:(MPAVItem *)arg2 afterItem:(MPAVItem *)arg3;
- (void)queueCoordinator:(id <MPAVQueueCoordinating>)arg1 failedToLoadItem:(MPAVItem *)arg2;
- (void)queueCoordinator:(id <MPAVQueueCoordinating>)arg1 didLoadItem:(MPAVItem *)arg2;
- (void)queueCoordinator:(id <MPAVQueueCoordinating>)arg1 willLoadItem:(MPAVItem *)arg2;
@end

