//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class SCROBrailleKey;
@protocol SCROBrailleDisplayCommandDispatcherDelegate;

@protocol SCROBrailleDisplayCommandDispatcherProtocol <NSObject>
@property(nonatomic) __weak id <SCROBrailleDisplayCommandDispatcherDelegate> delegate;
- (_Bool)handleBrailleKeyEvent:(SCROBrailleKey *)arg1;
@end

