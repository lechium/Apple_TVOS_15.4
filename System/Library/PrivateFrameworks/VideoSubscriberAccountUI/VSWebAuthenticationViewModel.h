//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, VSMessageQueue;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationViewModel
{
    NSURL *_sourceURL;	// 8 = 0x8
    VSMessageQueue *_messagesToWeb;	// 16 = 0x10
    VSMessageQueue *_messagesFromWeb;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002853b
@property(readonly, nonatomic) VSMessageQueue *messagesFromWeb; // @synthesize messagesFromWeb=_messagesFromWeb;
@property(readonly, nonatomic) VSMessageQueue *messagesToWeb; // @synthesize messagesToWeb=_messagesToWeb;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void)configureWithRequest:(id)arg1;	// IMP=0x0000000000028421
- (id)init;	// IMP=0x000000000002839e

@end

