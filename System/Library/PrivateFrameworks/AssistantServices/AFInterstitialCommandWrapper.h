//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AceObject;
@protocol SAAceCommand;

@interface AFInterstitialCommandWrapper : NSObject
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    AceObject<SAAceCommand> *_command;	// 16 = 0x10
    AceObject<SAAceCommand> *_defaultReply;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000015e40f
@property(readonly, nonatomic) AceObject<SAAceCommand> *defaultReply; // @synthesize defaultReply=_defaultReply;
@property(readonly, nonatomic) AceObject<SAAceCommand> *command; // @synthesize command=_command;
- (void)dispatchCompletionWithReply:(id)arg1 error:(id)arg2;	// IMP=0x000000000015e3c1
- (id)initWithCommand:(id)arg1 defaultReply:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000015e2e0
- (void)dealloc;	// IMP=0x000000000015e29c

@end

