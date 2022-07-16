//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MessageConsumer-Protocol.h>
#import <Message/QueryProgressMonitor-Protocol.h>

@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor>
{
    NSMutableArray *_messages;	// 8 = 0x8
    MFActivityMonitor *_monitor;	// 16 = 0x10
    CDUnknownBlockType _transmogrifier;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType transmogrifier; // @synthesize transmogrifier=_transmogrifier;
- (_Bool)shouldCancel;	// IMP=0x000000000006af89
- (void)newMessagesAvailable:(id)arg1;	// IMP=0x000000000006ae1e
- (id)copyMessages;	// IMP=0x000000000006ae0f
- (id)messages;	// IMP=0x000000000006adf8
- (void)dealloc;	// IMP=0x000000000006ada7
- (id)init;	// IMP=0x000000000006ad5b

@end
