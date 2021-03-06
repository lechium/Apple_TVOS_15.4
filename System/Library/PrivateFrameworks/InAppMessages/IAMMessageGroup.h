//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IAMMessageCoordinator, NSString;
@protocol IAMMessageGroupInternalDelegate;

@interface IAMMessageGroup : NSObject
{
    NSString *_groupIdentifier;	// 8 = 0x8
    IAMMessageCoordinator *_messageCoordinator;	// 16 = 0x10
    id <IAMMessageGroupInternalDelegate> _internalDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f71c
@property(nonatomic) __weak id <IAMMessageGroupInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) __weak IAMMessageCoordinator *messageCoordinator; // @synthesize messageCoordinator=_messageCoordinator;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void)reportModalMessageWasDismissedWithIdentifier:(id)arg1;	// IMP=0x000000000000f62b
- (void)reportModalMessageWasPresentedWithIdentifier:(id)arg1;	// IMP=0x000000000000f592
- (void)reportModalMessagePresentationFailedWithIdentifier:(id)arg1;	// IMP=0x000000000000f4f9
- (void)performModalMessagePresentation:(id)arg1 fromViewController:(id)arg2;	// IMP=0x000000000000f4f3
- (_Bool)shouldPerformModalMessagePresentation;	// IMP=0x000000000000f4eb
- (id)contextPropertyWithName:(id)arg1;	// IMP=0x000000000000f4e3
- (void)reportContextPropertiesDidChange:(id)arg1;	// IMP=0x000000000000f454
- (void)receiveEvent:(id)arg1;	// IMP=0x000000000000f3c5
- (void)reportModalMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2;	// IMP=0x000000000000f2f3
- (void)viewControllerForModalMessagePresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f2e3
- (id)initWithGroupIdentifier:(id)arg1;	// IMP=0x000000000000f270

@end

