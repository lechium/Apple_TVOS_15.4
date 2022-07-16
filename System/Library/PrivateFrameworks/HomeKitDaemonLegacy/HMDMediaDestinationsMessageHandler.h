//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationsMessageHandlerDelegate;

@interface HMDMediaDestinationsMessageHandler
{
    id <HMDMediaDestinationsMessageHandlerDataSource> _dataSource;	// 8 = 0x8
    id <HMDMediaDestinationsMessageHandlerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000083f265
@property __weak id <HMDMediaDestinationsMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationsMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)handleUpdatedDestination:(id)arg1;	// IMP=0x000000000083f172
- (void)handleMediaDestinationUpdatedNotification:(id)arg1;	// IMP=0x000000000083ed85
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;	// IMP=0x000000000083ec14

@end

