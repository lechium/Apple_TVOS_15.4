//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SGFuture;
@protocol SGDSuggestManagerMessagesProtocol;

@interface SGMessagesDaemonConnection : NSObject
{
    SGFuture *_daemonConnectionFuture;	// 8 = 0x8
    id <SGDSuggestManagerMessagesProtocol> _remoteSuggestionManagerForTesting;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004da71
- (void)setManagerForTesting:(id)arg1;	// IMP=0x000000000004da60
- (id)remoteSuggestionManagerWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d9af
- (id)initWithDaemonConnectionFuture:(id)arg1;	// IMP=0x000000000004d944

@end
