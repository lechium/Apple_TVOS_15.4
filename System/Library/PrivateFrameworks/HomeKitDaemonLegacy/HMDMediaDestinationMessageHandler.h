//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate;

@interface HMDMediaDestinationMessageHandler
{
    id <HMDMediaDestinationMessageHandlerDataSource> _dataSource;	// 8 = 0x8
    id <HMDMediaDestinationMessageHandlerDelegate> _delegate;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000724877
- (void).cxx_destruct;	// IMP=0x0000000000724628
@property __weak id <HMDMediaDestinationMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)handleMediaDestinationUpdateSupportedOptionsRequestMessage:(id)arg1;	// IMP=0x00000000007241d8
- (void)handleMediaDestinationUpdateAudioGroupIdentifierRequestMessage:(id)arg1;	// IMP=0x0000000000723dca
- (unsigned long long)supportedOptionsInMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000723b3b
- (id)audioGroupIdentifierInMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007237e4
- (void)handleUpdatedDestination:(id)arg1;	// IMP=0x00000000007236b6
- (void)sendRequestToUpdateSupportOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000723392
- (void)sendRequestToUpdateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000723064
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 notifications:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6;	// IMP=0x0000000000722e30
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;	// IMP=0x0000000000722e0b

@end

